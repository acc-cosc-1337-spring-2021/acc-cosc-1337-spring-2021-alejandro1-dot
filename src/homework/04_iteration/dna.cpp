

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

#include "dna.h"
#include <string>


double get_gc_content(const string & dna)
{
    double gc_content = 0;
        for (int i = 0; i < dna.size (); i++)
        {
            if ( dna[i] == "G" || dna[i] == "C" )
            {
                gc_content++;

            }
        }
    double percentage = gc_content / dna.size();
    return percentage;

}



string get_reverse_string(string dna)
{
    string reverse_dna;
    for (size_t i = dna.size() -1; i >=0; --1)
    {
        reverse_dna.push_back(dna[i]);
    } 
    return reverse_dna;
}
