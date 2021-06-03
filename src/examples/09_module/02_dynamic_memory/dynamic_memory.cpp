#include "dynamic_memory.h"
#include<iostream>
//
using std::cout;

void use_dynamic_memory(int num)
{
    int* num_ptr = new int(num); //creates memory
    cout<<*num_ptr<<"\n"; //use memory -- this is whats difficult
    delete num_ptr; //delete memory
}



int* return_dynamic_memory(int num)
{
    int* num_ptr = new int(num);
    return num_ptr;
}


void limit_dynamic_memory(int num)
{
    int* val = return_dynamic_memory(num);
    cout<<*val<<"\n";
    delete val;
}

int* get_dynamic_array(const std::size_t size)
{
    cout<<"Create dyanmic arrays\n";
    int* nums = new int[size]();

    return nums; 
}

void delete_dynamic_array(int* array)
{
    cout<<"delete dynamic arrays\n";
    delete[] array;
}

void use_dynamic_array(const std::size_t size)
{
    std::shared_ptr<int[]> nums(get_dynamic_array), delete_dynamic_array();

    for(std::size_t i = 0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}
