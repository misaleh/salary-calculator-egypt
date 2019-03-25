#include <iostream>
#include "salary_calc.h"
int main()
{
	double monthly_gross;
	double insurance;
	double monthly_net;

	
	std::cout<<"Enter Monthly Salary\n";
	std::cin>>monthly_gross;
	std::cout<<"Enter Monthly Insurance\n";
	std::cin>>insurance;
	
	monthly_net = calcMonthlyNet(monthly_gross,insurance);

	std::cout<<"Your Monthly Net Salary: "<<monthly_net<<"\n";


}
