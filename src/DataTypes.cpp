#include "DataTypes.h"
#include<stdio.h>

HeightvsWeight::HeightvsWeight(std::string fileName)
{
	readData(fileName);

	linearRegression.train(firstinput, secondInput);
	std::cout << "Calculated value of a is " << linearRegression.getA() << " and b is " << linearRegression.getB() << std::endl;
	std::cout << "The equation would be height = " << linearRegression.getA() << " + " << linearRegression.getB() << "(weight)" << std::endl;

	std::cout << "What value would you like to predict Height wise" << std::endl;
	int input = 0;
	std::cin >> input;
	std::cout << "The predicted Weight value for that Height would be: " << linearRegression.predict(input, Xentry) << std::endl;
}

void HeightvsWeight::readData(std::string fileName)
{
	FILE* inFile = fopen(fileName.c_str(), "r");
	char line[100] = { '\0' };
	char* token1;

	fgets(line, 100, inFile);
	token1 = strtok(line, ",");
	firstinput[0] = (atof(strtok(NULL, ",")));
	secondInput[0] = (atof(strtok(NULL, ",")));

	while (fgets(line, 100, inFile) != NULL)
	{
		token1 = strtok(line, ",");
		firstinput.push_back(atof(strtok(NULL, ",")));
		secondInput.push_back(atof(strtok(NULL, ",")));
	}
}

BattingStats::BattingStats(std::string fileName)
{
	readData(fileName);

	linearRegression.train(firstinput, secondInput);
	std::cout << "Calculated value of a is " << linearRegression.getA() << " and b is " << linearRegression.getB() << std::endl;
	std::cout << "The equation would be height = " << linearRegression.getA() << " + " << linearRegression.getB() << "(weight)" << std::endl;

	std::cout << "What value would you like to predict Height wise" << std::endl;
	int input = 0;
	std::cin >> input;
	std::cout << "The predicted Weight value for that Height would be: " << linearRegression.predict(input, Xentry) << std::endl;
}

void BattingStats::readData(std::string fileName)
{
	FILE* inFile = fopen(fileName.c_str(), "r");
	char line[100] = { '\0' };
	char* token1;

	fgets(line, 100, inFile);
	token1 = strtok(line, ",");
	token1 = strtok(NULL, "\0");
	token1 = strtok(NULL, "\0");
	token1 = strtok(NULL, "\0");
	firstinput[0] = (atof(strtok(NULL, ",")));
	secondInput[0] = (atof(strtok(NULL, ",")));
	token1 = strtok(NULL, ",");
	token1 = strtok(NULL, ",");
	token1 = strtok(NULL, ",");
	token1 = strtok(NULL, ",");
	token1 = strtok(NULL, ",");

	while (fgets(line, 100, inFile) != NULL)
	{
		token1 = strtok(line, ",");
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
		firstinput[0] = (atof(strtok(NULL, ",")));
		secondInput[0] = (atof(strtok(NULL, ",")));
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
		token1 = strtok(NULL, ",");
	}
}
