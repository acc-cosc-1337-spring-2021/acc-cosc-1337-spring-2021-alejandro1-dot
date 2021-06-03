//cpp

#include "arrays_pointers.h"


using std::cout; using std::

void arrays_and_pointer()
{
    const int SIZE = 3;
    int num[SIZE]{3, 6, 9};
    cout<<num<<"\n";

    int* ptr = num;
    cout<<*ptr<<"\n";
    *ptr++;
    cout<<*ptr<<"\n";
    *ptr++;
    cout<<*ptr<<"\n";

    *ptr--;
    cout<<*ptr<<"\n";
}

void populate_time_table(int time_table[COLS], int ROW)
{
    for(int i = 0; i < ROW; ++i)
    {
        for(int j=0; j<VOLS; ++i)
        {
            time_tables[i]{i} = (i+1)* (j *1);
        }
    }
}

void display_times_tables(int time_table[COLS], int ROW)
{
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j< ROWS; ++j)
        {
            cout<<std::setw(5)<<time_tables[i]{j};
        }
         cout<<"\n"
    }
}

void display_arry(int* nums, const int SIZE)
{
    for (int i = 0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }

}
