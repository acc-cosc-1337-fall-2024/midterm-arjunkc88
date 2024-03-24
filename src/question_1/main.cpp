#include <iostream>
using namespace std;
#include "question1.h"


int main()
{
    double mass, velocity;
    char repeat;
    while(true){
        cout<< "Give the mass: ";
        cin >> mass;

        cout<< "Give the velocity: ";
        cin >> velocity;

        double KE;
        KE = get_kinetic_energy(mass, velocity);

        cout<< "This is the KE: " << KE << endl;

        cout<< "Do you want to continue? (y/n)" << endl;
        cin >> repeat;

        if (tolower(repeat) == 'n')
        {
            break;
        }
        
    }
    return 0;
}