#pragma once
#include "ExpressionEvaluator.h"
#include "IShuffle.h"
class Divisor : public ExpressionEvaluator, public IShuffle
{
public:
	Divisor();
	Divisor(int numOfOperands);
	double calculate() override;
	void shuffle() override;
	void shuffle(size_t i, size_t j) override;
	bool containZeros();
};
