#include <iostream>
#include <cmath>
int main() {
	char op;
	double num, result;
		do{
		std::cout << "Enter an operator (s = sin,c = cos,t = tan,x = arcsin,y = arccos,z = arctan): ";
		std::cin >> op;
		std::cout << "Enter num: ";
		std::cin >> num;

		switch (op) {
		case 's':
			result = sin(num);
			break;
		case 'c':
			result = cos(num);
			break;
		case 't':
			result = tan(num);
			break;
		case 'x':
			result = sinh(num);
			break;
		case 'y':
			result = cosh(num);
			break;
		case 'z':
			result = tanh(num);
			break;
		default:
			std::cout << "Invalid operator";
		}
		   std::cout << "Result: " << result;
		}while(op != 'q');
	
    return 0;
}