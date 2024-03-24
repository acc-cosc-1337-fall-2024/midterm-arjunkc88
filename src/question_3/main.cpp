#include <iostream>
#include "question3.h"

#include <string>
using namespace std;


// string transcribe_dna_into_rna(const string& dna_string) {
//     string rna_string = dna_string;
//     for (char& c : rna_string) {
//         if (c == 'T') {
//             c = 'U';
//         }
//     }
//     return rna_string;
// }

int main() {
    string input_dna = "GATGGAACTTGACTACGTAAATT";
    string output_rna = transcribe_dna_into_rna(input_dna);
    
    cout << output_rna << endl;
    
    return 0;
}