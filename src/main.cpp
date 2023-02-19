#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"LinearRegression.h"
#include<stdio.h>

#include "multiplot.h"
using namespace multiplot;

int main()
{

	FILE* inFile = fopen("data.csv", "r");
	char line[100] = {'\0'};
	char* token1;

	std::cout << "Hello C++" << std::endl;
	std::vector<float> height = {0};
	std::vector<float> weight = {0};

	fgets(line, 100, inFile);
	token1 = strtok(line, ",");
	height[0] = (atof(strtok(NULL, ",")));
	weight[0] = (atof(strtok(NULL, ",")));

	while (fgets(line, 100, inFile) != NULL)
	{
		token1 = strtok(line, ",");
		height.push_back(atof(strtok(NULL, ",")));
		weight.push_back(atof(strtok(NULL, ",")));
	}
	Regression::Linear test(height, weight);
	std::cout << "Calculated value of a is " << test.getA() << " and b is " << test.getB() << std::endl;
	std::cout << "The equation would be y = " << test.getA() << " + " << test.getB() << "x" << std::endl;

	std::cout << "What value would you like to predict X wise" << std::endl;
	int input = 0;
	std::cin >> input;
	std::cout << "The predicted Y value for that X would be: " << test.predict(input, Xentry) << std::endl;

	// create a multiplot Window at position (x,y)=(50,50) and width=640, height=480
	Multiplot m(50, 50, 1080, 720);
	m.color3f(1, 0, 0);
	m.plot(height, weight);

	return 0;
}