#include "vec.h"
#include<string>
using std::vector;
using std::cout; 
using std::string;

int main() 
{
	vector<int> nums; 
	nums.push_back(10);
	nums.push_back(2);
	nums.push_back(4);

	loop_vector_w_index_val(nums);

	vector<string> names{"joe", "mary", "john"};

	names[0]="jerry";

	for(auto name: names)
	{
		cout<<name<<"\n";
	}

	return 0;
}