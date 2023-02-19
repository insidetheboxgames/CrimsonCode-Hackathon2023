#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "LinearRegression.h"

class HeightvsWeight
{
public:
	HeightvsWeight(std::string fileName);
private:
	void readData(std::string fileName);
	std::vector<double> firstinput = {0};
	std::vector<double> secondInput = {0};
	Regression::Linear linearRegression;
};
//Batting Key Stats2.csv

class BattingStats
{
public:
	BattingStats(std::string fileName);
private:
	void readData(std::string fileName);
	std::vector<double> firstinput = { 0 };
	std::vector<double> secondInput = { 0 };
	Regression::Linear linearRegression;
};