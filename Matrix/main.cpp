#include <iostream>
#include "src/Matrix.h"


int main() {

	Matrix m;
	Matrix m1(2, 2);
	Matrix m2(2, 2, { 1.1,2.2,3.2,4.4 });
	m = m2;

	std::cout << m << "\n" << m1 << "\n" << m2 << "\n";
	std::cout << "========================================\n";

	std::cout << "Input:\n";
	std::cin >> m1;
	std::cout << "\n";
	std::cout << m << "\n" << m1 << "\n" << m2 << "\n";
	std::cout << "========================================\n";

	std::cout << "Operator==:\n";
	std::cout << std::boolalpha << (m1 == m2) << "\n";
	std::cout << "========================================\n";

	std::cout << "Arithmetic operators:\n";
	m *= 2;
	if (m1.isAdded(m2))
		m -= m2;
	if (m2.isMultiplied(m1))
		m2 *= m1;
	++m1;
	std::cout << m << "\n" << m1 << "\n" << m2 << "\n";
	std::cout << "========================================\n";

	std::cout << "Operator[][]:\n";
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	std::cout << m << "\n";
	std::cout << "========================================\n";


	return 0;
}






























