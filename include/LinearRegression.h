#pragma once

#include<iostream>
#include<vector>
#include<cmath>

namespace Regression
{
	class Linear
	{
	public:
		Linear(std::vector<int> X, std::vector<int> Y);
		float getA();
		float getB();
		float calcualteValue(int val);
	private:
		void train(std::vector<int> X, std::vector<int> Y);
		float a, b;
	};
}