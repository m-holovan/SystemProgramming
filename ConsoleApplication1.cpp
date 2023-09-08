#include <iostream>
#include <limits>
#include<locale.h>

int main() {
	setlocale(LC_CTYPE, "rus");

	std::cout << "Тип данных\tРазмер (байт)\tМинимальное значение\tМаксимальное значение" << std::endl;

	std::cout << "int\t\t" << sizeof(int) << "\t\t" << std::numeric_limits<int>::min() << "\t\t" << std::numeric_limits<int>::max() << std::endl;
	std::cout << "short\t\t" << sizeof(short) << "\t\t" << std::numeric_limits<short>::min() << "\t\t\t" << std::numeric_limits<short>::max() << std::endl;
	std::cout << "long\t\t" << sizeof(long) << "\t\t" << std::numeric_limits<long>::min() << "\t\t" << std::numeric_limits<long>::max() << std::endl;
	std::cout << "char\t\t" << sizeof(char) << "\t\t" << static_cast<int>(std::numeric_limits<char>::min()) << "\t\t\t" << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;
	std::cout << "float\t\t" << sizeof(float) << "\t\t" << std::numeric_limits<float>::lowest() << "\t\t" << std::numeric_limits<float>::max() << std::endl;
	std::cout << "double\t\t" << sizeof(double) << "\t\t" << std::numeric_limits<double>::lowest() << "\t\t" << std::numeric_limits<double>::max() << std::endl;

	return 0;
}
