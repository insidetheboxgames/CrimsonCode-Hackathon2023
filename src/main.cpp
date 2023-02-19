#include<iostream>
#include"LinearRegression.h"
int main()
{
	std::cout << "Hello C++" << std::endl;
	std::vector<int> firstvals = { 2,5,2,8,2 };
	std::vector<int> secondvals = { 5,7,6,9,7 };

	Regression::Linear test(firstvals, secondvals);
	std::cout << "Calculated value of a is " << test.getA() << " and b is " << test.getB() << std::endl;
	std::cout << "The equation would be y = " << test.getA() << " + " << test.getB() << "x" << std::endl;

	std::cout << "What value would you like to predict X wise" << std::endl;
	int input = 0;
	std::cin >> input;
	std::cout << "The predicted Y value for that X would be: " << test.predict(input, Xentry) << std::endl;


	return 0;
}