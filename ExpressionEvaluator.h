#include "ILoggable.h"
#include <string>
#pragma once
class ExpressionEvaluator : public ILoggable
{
protected:
	int numOfOperands = 0;
	double* operands;
	std::string operators = "0";

private:
	virtual void initializeZeros();
public:
	
	virtual ~ExpressionEvaluator();
	ExpressionEvaluator(int numOfOperands);
	ExpressionEvaluator();
	virtual void setOperand(size_t pos, double value);
	virtual void setOperands(double ops[], size_t n);
	virtual double calculate() = 0;

	virtual void logToScreen() const override;
	virtual void logToFile(const std::string& filename) const override;
};
