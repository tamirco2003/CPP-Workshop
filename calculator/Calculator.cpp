#include "Calculator.h"

#include "Exceptions.h"

double Calculator::calculate(double leftOperand, char calcOperator, double rightOperand) {
	switch (calcOperator) {
	case '+':
		return this->add(leftOperand, rightOperand);
	case '-':
		return this->subtract(leftOperand, rightOperand);
	case '*':
		return this->multiply(leftOperand, rightOperand);
	case '/':
		return this->divide(leftOperand, rightOperand);
	default:
		throw UnrecognizedOperator();
		return 0;
	}
}

double Calculator::add(double leftOperand, double rightOperand) {
	return leftOperand + rightOperand;
}

double Calculator::subtract(double leftOperand, double rightOperand) {
	return leftOperand - rightOperand;
}

double Calculator::multiply(double leftOperand, double rightOperand) {
	return leftOperand * rightOperand;
}

double Calculator::divide(double leftOperand, double rightOperand) {
	if (rightOperand == 0) {
		throw DivisionByZero();
	}

	return leftOperand / rightOperand;
}
