#pragma once

class Calculator {
public:
	/**
	 * Performs an arithmetic operation on 2 numbers.
	 * 
	 * @param calcOperator A char representing the operation to be done.
	 * @returns If the operation is legal returns its result, otherwise throws exception and returns 0.
	 */
	double calculate(double leftOperand, char calcOperator, double rightOperand);
private:
	/**
	 * Adds 2 doubles.
	 */
	double add(double leftOperand, double rightOperand);

	/**
	 * Subtracts 2 doubles.
	 */
	double subtract(double leftOperand, double rightOperand);

	/**
	 * Multiplies 2 doubles.
	 */
	double multiply(double leftOperand, double rightOperand);

	/**
	 * Divides 2 doubles.
	 */
	double divide(double leftOperand, double rightOperand);
};