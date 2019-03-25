#include <math.h>
#include "salary_calc.h"

static double  salary_array[LEVEL_NBR]  = {LEVEL_INIT_MAX};
static double  tax_array[LEVEL_NBR] =  {LEVEL_INIT_TAX};

double calcMonthlyNet(double monthly_gross, double insurance)
{
	double tax_percent = 0;
	double net_salary = 0;
	double tax_valid = 0;
	double the_tax=0;
	double annual_insurance = insurance*12.0;
	double annual_gross = monthly_gross*12.0;

	for(int i = 0 ; i < LEVEL_NBR; i++)
	{
		if((annual_gross - ANNUAL_EXMPT)< salary_array[i] )
		{
			tax_percent = tax_array[i];
			break;
		}
	}

	tax_valid = ((annual_gross - ANNUAL_EXMPT -annual_insurance) > 0 )  ? (annual_gross -ANNUAL_EXMPT-annual_insurance):0;

	the_tax =  tax_valid * tax_percent;

	net_salary  = annual_gross - the_tax;

	return (net_salary/12  - insurance);
}
