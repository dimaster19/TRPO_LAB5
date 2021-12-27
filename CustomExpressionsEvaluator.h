#include "ExpressionEvaluator.h"
#include "IShuffle.h"
#pragma once
class CustomExpressionsEvaluator : public ExpressionEvaluator, public IShuffle
{
public:
	CustomExpressionsEvaluator();
	CustomExpressionsEvaluator(int numOfOperands);
	double calculate() override;
	void logToScreen() const override;
	void shuffle() override;
	void shuffle(size_t i, size_t j) override;

};