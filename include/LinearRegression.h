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
		Linear(std::vector<float> X, std::vector<float> Y);
		float predict(float X, char entryType);
		float getA();
		float getB();
		float calcualteValue(float val);
	private:
		void train(std::vector<float> X, std::vector<float> Y);
		float a, b;
	};
}