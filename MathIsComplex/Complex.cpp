#include "Complex.h"

#include <iostream>

// Constructors:

Complex::Complex() : m_real(0), m_imaginary(0) {}
Complex::Complex(double real, double imaginary) : m_real(real), m_imaginary(imaginary) {}

// Getters & Setters:

double Complex::getReal() const {
	return m_real;
}
void Complex::setReal(double real) {
	m_real = real;
}

double Complex::getImaginary() const {
	return m_imaginary;
}
void Complex::setImaginary(double imaginary) {
	m_imaginary = imaginary;
}

// Print:

void Complex::printNumber() const {
	std::cout << m_real << " + " << m_imaginary << "i" << std::endl;
}

// Operators:

bool Complex::operator==(const Complex& rhs) const {
	return m_real == rhs.m_real && m_imaginary == rhs.m_imaginary;
}

Complex Complex::operator+(const Complex& rhs) const {
	return Complex(m_real + rhs.m_real, m_imaginary + rhs.m_imaginary);
}
Complex Complex::operator-(const Complex& rhs) const {
	return Complex(m_real - rhs.m_real, m_imaginary - rhs.m_imaginary);
}
Complex Complex::operator*(const Complex& rhs) const {
	double new_real = m_real * rhs.m_real - m_imaginary * rhs.m_imaginary;
	double new_imaginary = m_real * rhs.m_imaginary + m_imaginary * rhs.m_real;

	return Complex(new_real, new_imaginary);
}
