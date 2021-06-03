#include "dna.h"
using std::vector;
using std::string;
using std::cout; 

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


double get_gc_content(const string& dna)
{
    double gc_content = 0;
        for(size_t i = 0; i < dna.size(); ++i)
        {
            if(dna[i] != 'A' && dna[i] != 'T' && dna[i] != 'C' && dna[i] != 'G')
            {
              cout<<"Could not continue due to invalid input";
              exit(dna[i]);
            }

            if(dna[i] == 'G' || dna[i] == 'C')
            {
                gc_content++;

            }
        }
    double percentage = gc_content / dna.size();
    return percentage;

}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse_dna;
    for (int i = dna.size() - 1; i >= 0; i--)
    {
        reverse_dna.push_back(dna[i]);
    } 
    return reverse_dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/


std::string get_dna_complement(std::string dna)
{
    std::string dna_ref = get_reverse_string(dna);

    for(size_t i = 0; i < dna.size(); i++) 
    {
       //A -> T
      if(dna_ref[i] == 'A')
      {
        dna_ref[i] = 'T';
      }

      //T -> A
      else if(dna_ref[i] == 'T')
      {
        dna_ref[i] = 'A';
      }
      //C -> G
      else if(dna_ref[i] == 'C')
      {
        dna_ref[i] = 'G';
      }

      //G -> C
      else if(dna_ref[i] == 'G')
      {
        dna_ref[i] = 'C';
      }

      //In case of errors delete 
      if(dna_ref[i] != 'A' && dna_ref[i] != 'T' && dna_ref[i] != 'C' && dna_ref[i] != 'G')
            {
              cout<<"Could not continue due to invalid input";
              exit(dna_ref[i]);
            }
    } 
    return dna_ref;  

}



