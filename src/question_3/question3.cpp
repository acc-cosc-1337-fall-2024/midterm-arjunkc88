#include "question3.h"
using namespace std;


bool test_config(){
    return true;
}

string transcribe_dna_into_rna(const string& dna) 
{
    string rna;
    for (char nucleotide : dna)
     {
        if (nucleotide == 'T')
         {
            rna += 'U';
        } else 
        {
            rna += nucleotide;
        }
    }
    return rna;
}

