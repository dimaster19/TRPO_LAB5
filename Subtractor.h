#pragma once
#include "ExpressionEvaluator.h"
#include "IShuffle.h"
class Subtractor : public ExpressionEvaluator, public IShuffle
{
public:
	Subtractor();
	Subtractor(int numOfOperands);
	double calculate() override;
	void shuffle() override;
	void shuffle(size_t i, size_t j) override;
};