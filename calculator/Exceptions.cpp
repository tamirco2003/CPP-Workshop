#include "Exceptions.h"

char const* DivisionByZero::what() const noexcept {
	return "Attempted division by zero.";
}

char const* UnrecognizedOperator::what() const noexcept {
	return "Unrecognized calculator operator.";
}