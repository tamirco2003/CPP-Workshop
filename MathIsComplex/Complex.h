#pragma once

/**
 * Class representation of a complex number.
 */
class Complex {
private:
	/**
	 * The real part.
	 */
	double m_real;
	/**
	 * The imaginary part.
	 */
	double m_imaginary;

public:
	/**
	 * Constructor, sets to 0 + 0i.
	 */
	Complex();

	/**
	 * Constructor, sets members to parameters.
	 */
	Complex(double real, double imaginary);

	/**
	 * Gets the real part.
	 */
	double getReal() const;
	/**
	 * Sets the real part.
	 */
	void setReal(double real);

	/**
	 * Gets the imaginary part.
	 */
	double getImaginary() const;
	/**
	 * Sets the imaginary part.
	 */
	void setImaginary(double imaginary);

	/**
	 * Prints the number as "a + bi".
	 */
	void printNumber() const;

	/**
	 * Compares 2 numbers' parts.
	 */
	bool operator==(const Complex& rhs) const;

	/**
	 * Adds 2 numbers.
	 */
	Complex operator+(const Complex& rhs) const;
	/**
	 * Subtracts 2 numbers.
	 */
	Complex operator-(const Complex& rhs) const;
	/**
	 * Multiplies 2 numbers.
	 */
	Complex operator*(const Complex& rhs) const;
};

