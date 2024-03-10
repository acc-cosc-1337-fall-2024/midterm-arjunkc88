#include <iostream>
#include "question1.h"
#include <cmath> // For pow function

double get_kinetic_energy(double mass, double velocity)
 {
  // Check for non-negative mass
  if (mass <= 0) 
  {
    std::cerr << "Error: Mass must be positive." << std::endl;
    return -1;
  }

  // Kinetic energy formula
  return 0.5 * mass * pow(velocity, 2);
}

int main() 
{
  double mass, velocity;

  while (true) 
  {
    // Prompt for user input
    std::cout << "Enter object mass (kg): ";
    std::cin >> mass;

    std::cout << "Enter object velocity (m/s): ";
    std::cin >> velocity;

    // Calculate kinetic energy
    double kinetic_energy = get_kinetic_energy(mass, velocity);

    // Check for valid input and handle error from function
    if (kinetic_energy >= 0) 
    {
      // Display result
      std::cout << "Kinetic energy: " << kinetic_energy << " J" << std::endl;
    } else {
      std::cerr << "Error: An error occurred while calculating kinetic energy." << std::endl;
    }

    // Prompt to continue
    char choice;
    std::cout << "Continue (y/n)? ";
    std::cin >> choice;
    if (tolower(choice) != 'y') 
    {
      break;
    }
  }

  return 0;
}