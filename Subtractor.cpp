#include "Subtractor.h"
#include <ctime>
#include <cmath>

/// <summary>
/// 
/// </summary>

Subtractor::Subtractor() :
	ExpressionEvaluator() {
	operators = "minus";
}

Subtractor::Subtractor(int numOfOperands) :
	ExpressionEvaluator(numOfOperands) {
	operators = "minus";
}

double Subtractor::calculate() {
	double result = operands[0];

	for (int i = 1; i < numOfOperands; ++i) {
		result -= operands[i];
	}

	return result;
}

void Subtractor::shuffle() {
	std::swap(operands[0], operands[numOfOperands - 1]);
}

void Subtractor::shuffle(size_t i, size_t j) {
	float tmp;
	if (modf((float)operands[i], &tmp) != 0 || modf((float)operands[j], &tmp) != 0)
		std::swap(operands[i], operands[j]);
}