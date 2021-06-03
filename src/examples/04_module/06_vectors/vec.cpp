#include "vec.h"
using std::vector;
using std::cout; 
/*
Function loop_vector_w_index 
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67

@param none


*/



/*
Function loop_vector_w_index_val 
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>
*/

void loop_vector_w_index_val(std::vector<int> nums)
{
    for(size_t i = 0; i < nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}

/*
Function loop_vector_w_index_ref
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>&
*/

void loop_vector_w_index_ref(std::vector<int>& nums)
{
    for(size_t i = 0; i < nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}

/*
Write code for function loop_vector_w_index_const_ref
Displays the incoming parameter vector numbers to screen use indexed loop

@param const vector<int>&
*/




void loop_vector_w_for_ranged(std::vector<int> nums)
{
    //copy of a copy
    for(auto num: nums)
    {
        cout<<nums<<"\n";
        nums = -1;
    }

    //copy that uses the original
    for(auto& num: nums)
    {
        cout<<nums<<"\n";
        nums = -1;
    }

    for(auto num: nums)
    {
        cout<<nums<<"\n";
        nums = 5;
    }
}

void loop_vector_w_for_ranged_ref(std::vector<int>& nums)
{
     for(auto& num: nums)
    {
        cout<<nums<<"\n";
        nums = -1;
    }

}