#include "CustomExpressionsEvaluator.h"
#include "Multiplier.h"
#include "Divisor.h"
#include <ctime>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;



double CustomExpressionsEvaluator::calculate() {
	Multiplier m(2);
	Divisor d(2); 
	double result = operands[0];

	for (int i = 0; i < numOfOperands; i ++) {
		
		// 5 * 10 / (-2.5) * (-40) / (-2)
		
		if (i < numOfOperands - 1) {

			if (i % 2 == 0) result *= operands[i + 1]; 
			else result /= operands[i + 1];

		}
		
	}

	return result;
}



void CustomExpressionsEvaluator::logToScreen() const {

	cout << "<" << numOfOperands << ">" << endl;

	for (int i = 0; i < numOfOperands; i++) {
		
		if (i % 2 == 0) { 
			
			(operands[i] < 0) ? cout << "(" << operands[i] << ") " : cout << operands[i] << " ";
			(i == numOfOperands - 1) ? cout << "" : cout << "times" << " ";
		}
		else
		{
			(operands[i] < 0) ? cout << "(" << operands[i] << ") " : cout << operands[i] << " ";
			(i == numOfOperands - 1) ? cout << "" : cout << "divided by" << " ";
		}
		
		
	}
	cout << endl;
}

void CustomExpressionsEvaluator::shuffle() {
	float tmp;
	int temp_first = -1;
	int temp_last = -1;
	for (int i = 0; i < numOfOperands; i++) {
		if (modf((float)operands[i], &tmp) != 0) temp_first = i;
		if (temp_first != -1) break;
	}

	for (int i = 0; i < numOfOperands; i++) {
		if (modf((float)operands[i], &tmp) != 0) temp_last = i;
	}
	if(temp_first != -1 && temp_last != -1) swap(operands[temp_first], operands[temp_last]);
	cout << endl;
}

void CustomExpressionsEvaluator::shuffle(size_t i, size_t j) {
	float tmp;
	if (modf((float)operands[i], &tmp) != 0 || modf((float)operands[j], &tmp) != 0)
		swap(operands[i], operands[j]);
	cout << endl;
}

CustomExpressionsEvaluator::CustomExpressionsEvaluator() : ExpressionEvaluator() {}

CustomExpressionsEvaluator::CustomExpressionsEvaluator(int numOfOperands) : ExpressionEvaluator(numOfOperands) {}