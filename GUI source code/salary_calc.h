#ifndef _SALARY_CALC_H
#define _SALARY_CALC_H
#include <limits>


#define ANNUAL_EXMPT   		15000.00

#define  LEVEL_1_MAX		8000.0
#define  LEVEL_1_TAX		0.0

#define  LEVEL_2_MAX		30000.0
#define  LEVEL_2_TAX		(0.075*0.15)

#define  LEVEL_3_MAX		45000.0
#define  LEVEL_3_TAX		(0.1*0.55)

#define  LEVEL_4_MAX		200000.0
#define  LEVEL_4_TAX		(0.2*0.925)

#define  LEVEL_5_MAX		std::numeric_limits<double>::max() 
#define  LEVEL_5_TAX		0.225


#define LEVEL_NBR		5
#define LEVEL_INIT_MAX LEVEL_1_MAX ,\
			LEVEL_2_MAX ,\
			LEVEL_3_MAX ,\
			LEVEL_4_MAX ,\
			LEVEL_5_MAX 
			
#define LEVEL_INIT_TAX  LEVEL_1_TAX ,\
			LEVEL_2_TAX ,\
			LEVEL_3_TAX ,\
			LEVEL_4_TAX ,\
			LEVEL_5_TAX 


double calcMonthlyNet(double annual_gross, double insurance);

#endif

