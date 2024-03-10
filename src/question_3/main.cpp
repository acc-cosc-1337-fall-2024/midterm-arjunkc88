#include <iostream>
#include "question3.h"

#include <string>


std::string transcribe_dna_into_rna(const std::string& dna_string) {
    std::string rna_string = dna_string;
    for (char& c : rna_string) {
        if (c == 'T') {
            c = 'U';
        }
    }
    return rna_string;
}

int main() {
    std::string input_dna = "GATGGAACTTGACTACGTAAATT";
    std::string output_rna = transcribe_dna_into_rna(input_dna);
    
    std::cout << output_rna << std::endl;
    
    return 0;
}