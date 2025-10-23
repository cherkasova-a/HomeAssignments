/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment2b
*/

#include <iostream>
#include <sstream>
#include <string>
int main() {
    std::string input;
    std::cout << "Enter expression: ";
    std::getline(std::cin, input);
    std::stringstream ss(input);

    int maxs = 100;
    double* stack = new double[maxs];
    int top = -1;

    std::string item;
    while (ss >> item){
        if (std::isdigit(item[0]) || (item.size() > 1 && std::isdigit(item[1]))){
	    stack[++top] = std::stod(item);
        } else {
            if (top >= 1) {
		double a = stack[top--];
		double b = stack[top--];
		double result;

	        if (item == "+") {
		     result = b + a;
	        } else if (item == "-") {
		    result = b - a;
		} else if (item == "*") {
		    result = b * a;
		} else if (item == "/") {
		    if (a == 0) {
		        std::cout << "Can't divide by zero" << std::endl;
			delete[] stack;
			return 1;
		    }
		    result = b / a;
		} else {
		    std::cout << "Unknowen operator" << std::endl;
		    delete[] stack;
		    return 1;
		}
		stack[++top] = result;

	    } else {
	        std::cout << "The operands are out of range" << std::endl;
                delete[] stack;
	        return 1;
			}
		}
	}

	if (top != 0){
	    std::cout << "There are too many operands" << std::endl;
	    delete[] stack;
	    return 1;
	}


	std::cout << "Result is " << stack[top] << std::endl;
	delete[] stack;
	return 0;

}
