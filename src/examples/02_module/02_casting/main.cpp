#include "casting.h"
#include <iostream>
using std::cin; using std::cout;


int main()
{
    auto num = .01;
    cout <<" Enter a decimal number ";
    cin>>num;

    cout<<"you typed "<<num<<"\n";
    cout<<"int converted to double: "<<convert_double_to_int(num);


    return 0;
}