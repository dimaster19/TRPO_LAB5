#include "Summator.h"
#include "Subtractor.h"
#include "Multiplier.h"
#include "Divisor.h"
#include "ExpressionEvaluator.h"
#include "CustomExpressionsEvaluator.h"
#include "CameraMan.h"
#include "Designer.h"
#include "Worker.h"
#include <iostream>
using namespace std;

template<typename T>




void dynamicCastExercise1(const T& obj) {
	printf("\nShuffle(1, 2)\n");
	obj->logToScreen();
	cout << "<Result: " << obj->calculate() << ">\n";
	obj->shuffle(1, 2);
	obj->logToScreen();
	cout << "<Result: " << obj->calculate() << ">\n";
	printf("\nShuffle\n");
	obj->logToScreen();
	cout << "<Result: " << obj->calculate() << ">\n";
	obj->shuffle();
	obj->logToScreen();
	cout << "<Result: " << obj->calculate() << ">\n";
	
}

void Exercise1() {
	cout << ".................::::::::::::Exercise1::::::::::::.................\n";
	const int numberOfElements = 5;
	ExpressionEvaluator* evaluators[numberOfElements];

	cout << "---------------------------Divisor----------------------------------\n";
	
	evaluators[0] = new Divisor(5);
	double DivisorData[5]{ 1.5, 4, -2.5, -8, -15 };
	evaluators[0]->setOperands(DivisorData, 5);
	evaluators[0]->logToScreen();
	cout << "<Result: " << evaluators[0]->calculate() << ">\n";
	evaluators[0]->logToFile("logs");

	
	cout << "---------------------------Multiplier--------------------------------\n";
	evaluators[1] = new Multiplier(2);
	double MultiplierData[5]{ -1.5, 80 };
	evaluators[1] = new Multiplier(2);
	evaluators[1]->setOperand(0, -1.5);
	evaluators[1]->setOperand(1, 80);
	evaluators[1]->setOperands(MultiplierData, 2);
	evaluators[1]->logToScreen();
	cout << "<Result: " << evaluators[1]->calculate() << ">\n";
	evaluators[1]->logToFile("logs");

	cout << "---------------------------Summator----------------------------------\n";
	evaluators[2] = new Summator(5);
	double SummatorData[5]{ 1.5, 4, -2.5, -8, -15 };
	evaluators[2]->setOperands(SummatorData, 5);
	evaluators[2]->logToScreen();
	cout << "<Result: " << evaluators[2]->calculate() << ">\n";
	evaluators[2]->logToFile("logs");

	cout << "---------------------------Subtractor--------------------------------\n";
	evaluators[3] = new Subtractor(9);
	double SubtractorData[9]{ 120,-12, 83.2, -1.5, 5, 7, 2, 18.5, 76 };
	evaluators[3]->setOperands(SubtractorData, 9);
	evaluators[3]->logToScreen();
	cout << "<Result: " << evaluators[3]->calculate() << ">\n";
	evaluators[3]->logToFile("logs");


	cout << "---------------------------CustomExpressionEvaluator-----------------\n";
	evaluators[4] = new CustomExpressionsEvaluator(5);
	double CustomExpressionEvaluatorData[5]{ 5, 10, -2.5, -40, -2 };
	evaluators[4]->setOperands(CustomExpressionEvaluatorData, 5);
	evaluators[4]->logToScreen();
	cout << "<Result: " << evaluators[4]->calculate() << ">\n";
	evaluators[4]->logToFile("logs");




	cout << "---------------------------Dynamic cast------------------------------\n";
	for (int i = 0; i < numberOfElements; ++i) {
		if (dynamic_cast<Divisor*>(evaluators[i])) {
			dynamicCastExercise1(dynamic_cast<Divisor*>(evaluators[i]));
		}
		else if (dynamic_cast<Subtractor*>(evaluators[i])) {
			dynamicCastExercise1(dynamic_cast<Subtractor*>(evaluators[i]));
		}
		else if (dynamic_cast<CustomExpressionsEvaluator*>(evaluators[i])) {
			dynamicCastExercise1(dynamic_cast<CustomExpressionsEvaluator*>(evaluators[i]));
		}
	}
	for (int i = 0; i < numberOfElements; ++i) {
		delete evaluators[i];
	}
}


void Exercise2() {
	cout << ".................::::::::::::Exercise2::::::::::::..............\n";
	Worker* worker[4];
	std::cout << "\nCameraMan #1\n";
	worker[0] = new CameraMan("Dmitry", "Pavlikov", 1, "2002", "2020", 12.1, 10);
	dynamic_cast<CameraMan*>(worker[0])->process("C:/photo.jpg");
	worker[0]->serialize();
	worker[0]->deserialize();

	std::cout << "\nCameraMan #2\n";
	worker[1] = new CameraMan();
	worker[1]->setName("Alexander");
	worker[1]->setSurname("Pavlikov");
	worker[1]->setSex(1);
	worker[1]->setBornYear("2002");
	worker[1]->setStartYear("2020");
	worker[1]->setRating(12.1);
	worker[1]->setPortfolio(10);
	dynamic_cast<CameraMan*>(worker[1])->process("C:/photo.jpg");

	std::cout << "Designer #1\n";
	worker[2] = new Designer("Dmitry", "Pavlikov", 1, "2002", "2020", 12.1, 10);
	dynamic_cast<Designer*>(worker[2])->process("C:/photo.jpg");


	std::cout << "\nDesigner #2\n";
	worker[3] = new Designer();
	worker[3]->setName("Alexander");
	worker[3]->setSurname("Pavlikov");
	worker[3]->setSex(1);
	worker[3]->setBornYear("2002");
	worker[3]->setStartYear("2020");
	worker[3]->setRating(12.1);
	worker[3]->setPortfolio(10);
	dynamic_cast<CameraMan*>(worker[1])->process("C:/photo.jpg");

	for (int i = 0; i < 4; ++i) {
		delete worker[i];
	}
}


int main()
{
	cout << "\n Pavlikov Dmitry | 8 Variant | Lab #3\n\n";
        Exercise1();
		Exercise2();
		return 0;
}

