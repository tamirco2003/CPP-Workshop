#pragma once

#include <exception>

class DivisionByZero : public std::exception {
public:
	char const* what() const noexcept override;
};

class UnrecognizedOperator : public std::exception {
public:
	char const* what() const noexcept override;
};