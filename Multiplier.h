#include "ExpressionEvaluator.h"
#pragma once
class Multiplier : public ExpressionEvaluator
{
public:
	Multiplier();
	Multiplier(int numOfOperands);
	double calculate() override;
	bool containZeros();
};