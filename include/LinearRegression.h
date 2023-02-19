#pragma once

#include<iostream>
#include<vector>
#include<cmath>

#define Xentry 'x'
#define Yentry 'y'


namespace Regression
{
	class Linear
	{
	public:
		Linear(std::vector<double> X, std::vector<double> Y);
		Linear() {};
		float predict(float X, char entryType);
		float getA();
		float getB();
		float calcualteValue(float val);
		void train(std::vector<double> X, std::vector<double> Y);
	private:
		float a, b;
	};
}