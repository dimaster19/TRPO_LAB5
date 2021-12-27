#include "ExpressionEvaluator.h"
#include <iostream>
#include <ios>
#include <fstream>
#include <chrono>
using namespace std;

ExpressionEvaluator::ExpressionEvaluator(int numOfOperands) {
	this->numOfOperands = numOfOperands;
	operands = new double[numOfOperands] {0};
	initializeZeros();
}

ExpressionEvaluator::ExpressionEvaluator() {
	this->numOfOperands = 20;
	operands = new double[20]{ 0 };
	initializeZeros();
}

ExpressionEvaluator::~ExpressionEvaluator() {
	delete[] operands;
}

void ExpressionEvaluator::setOperand(size_t pos, double value) {
	operands[pos] = value;
}

void ExpressionEvaluator::setOperands(double ops[], size_t n) {
	for (int i = 0; i < n; ++i) {
		operands[i] = ops[i];
	}
}

void ExpressionEvaluator::initializeZeros() {
	for (int i = 0; i < numOfOperands; ++i) {
		operands[i] = 0;
	}
}



void ExpressionEvaluator::logToScreen() const {
	cout << "<" << numOfOperands << ">"<<endl;
	for (int i = 0; i < numOfOperands; i++) {
		
		(operands[i] < 0) ? cout<< "("<<operands[i] <<") " : cout << operands[i] << " ";
		 (i == numOfOperands - 1) ? cout << "" : cout << operators << " ";
		
	
	}
	
	cout << endl;
}

void ExpressionEvaluator::logToFile(const std::string& filename) const {
	cout << "Logged to file" << endl;
	std::ofstream log(filename + ".txt", std::ios_base::app | std::ios_base::out);
	for (int i = 0; i < numOfOperands; ++i) {
		if (operands[i] < 0) log << "(" << operands[i] << ") " << (i == numOfOperands - 1 ? "" : operators) << " ";
		else log << operands[i] << " " << (i == numOfOperands - 1 ? "" : operators) << " ";
	}
	log << "\n";
}