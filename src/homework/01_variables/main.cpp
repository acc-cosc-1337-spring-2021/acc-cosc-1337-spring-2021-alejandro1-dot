//write include statements
#include "variables.h"
using std::cin; using std::cout;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	//Meal cost cooding
	double meal_cost;
	cout << "Enter the price of your meal ";
	cin >> meal_cost;

	//Tax cost
	auto total_meal_tax = get_sales_tax(meal_cost);

	// Tips
	double amount_of_tip;
	cout << "The tip % leaving behind: ";
	cin >> amount_of_tip; 
	
	//Total amount of tips
	auto total_meal_with_tips = get_tips(meal_cost, amount_of_tip);
	
	// Total amount 
	double total_cost = meal_cost + total_meal_tax + total_meal_with_tips;

	// Receipt
	cout<< "Your meal cost is: " << meal_cost << "\nSales Tax: " << total_meal_tax << "\nTips: " << total_meal_with_tips
	<< "\nYour total is: " << total_cost;
	
	return 0;
}
