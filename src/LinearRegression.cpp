#include "LinearRegression.h"

Regression::Linear::Linear(std::vector<int> X, std::vector<int> Y)
{
    train(X, Y);
}

float Regression::Linear::predict(int X, char entryType)
{
    if (entryType == Xentry)
    {
        return a + (b * X);
    }
    else if(entryType == Yentry)
    {
        return (X - a) / b;
    }
}

float Regression::Linear::getA()
{
    return a;
}

float Regression::Linear::getB()
{
    return b;
}

float Regression::Linear::calcualteValue(int val)
{
    return 0.0f;
}

void Regression::Linear::train(std::vector<int> X, std::vector<int> Y)
{
    float sumX = 0, sumX2 = 0, sumY = 0, sumYX = 0;

    if (X.size() < Y.size())
    {
        for (int i = 0; i < X.size(); i++)
        {
            sumX = sumX + X[i];
            sumX2 = sumX2 + X[i] * X[i];
            sumY = sumY + Y[i];
            sumYX = sumYX + X[i] * Y[i];
        }
        b = (X.size() * sumYX - sumX * sumY) / (X.size() * sumX2 - sumX * sumX);
        a = (sumY - b * sumX) / X.size();
    }
    else
    {
        for (int i = 0; i < Y.size(); i++)
        {
            sumX = sumX + X[i];
            sumX2 = sumX2 + X[i] * X[i];
            sumY = sumY + Y[i];
            sumYX = sumYX + X[i] * Y[i];
        }
        b = (Y.size() * sumYX - sumX * sumY) / (Y.size() * sumX2 - sumX * sumX);
        a = (sumY - b * sumX) / Y.size();
    }
    

}
