#include "question3.h"

bool test_config()

std::string transcribe_dna_into_rna(const std::string& dna) 
{
    std::string rna;
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

