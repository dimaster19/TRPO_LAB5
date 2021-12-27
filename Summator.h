#include "ExpressionEvaluator.h"
#pragma once
class Summator : public ExpressionEvaluator
{
public:
	Summator();
	Summator(int numOfOperands);
	double calculate() override;
};
