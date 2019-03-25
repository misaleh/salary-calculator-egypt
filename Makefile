all: main.cpp salary_calc.h salary_calc.cpp
	$(CXX) -lm  main.cpp  salary_calc.cpp  -o salary_calc.bin
