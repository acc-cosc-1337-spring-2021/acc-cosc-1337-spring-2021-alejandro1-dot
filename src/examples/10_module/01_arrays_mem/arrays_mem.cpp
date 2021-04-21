//write code for for stack_array and display each element to screen
#include"arrays_mem.h"

using std::cout;

void use_stack_array()
{
    const int SIZE = 5;
    int numbers[SIZE]{}; // reserve five stack of slots of 4 bytes each

    for(int i = 0; 1 < SIZE; ++i)
    {
        number[i] = i + 1;

    }

    for(int i = 0; 1 < SIZE; ++i)
    {
        cout<<number[i]<<"\n";
    }

}


void arrat_noths()
{
    const int NO_OF_MONTHS = 3;

    int months[NO_OF_MONTHS]{1, 2, 3};

    std::string month_names[NO_OF_MONTHS]{"Jan", "Feb", "Mar"};

    for(int i =0; i < NO_OF_MONTHS; ++i)
    {
        cout<months[i]<<" "<<month_names[i]<<"\n";
    }


}


void array_for_ranged()
{
    const int SIZE = 5;
    int numbers[SIZE]{};
    for(auto number: numbers)
    {
        cout<<number<<"\n";
    }

}
