#include <iostream>
#include <sstream>  
#include <string>
#include <algorithm>

Complex make_complex(std::string number) {
    Complex complex_number;
    number.erase(std::remove(number.begin(), number.end(), ' '), number.end());
    std::istringstream final_nums(number);
    final_nums >> complex_number.re >> complex_number.im;
    return complex_number;
}

Complex sum(Complex num1, Complex num2) {
    Complex num_final;
    num_final.re = num1.re + num2.re;
    num_final.im = num1.im + num2.im;
    return num_final;
}

Complex sub(Complex num1, Complex num2) {
    Complex num_final;
    num_final.re = num1.re - num2.re;
    num_final.im = num1.im - num2.im;
    return num_final;
}

Complex mul(Complex num1, Complex num2) {
    Complex num_final;
    num_final.re = (num1.re * num2.re - num1.im * num2.im);
    num_final.im = (num1.im * num2.re + num2.im * num1.re);
    return num_final;
}

Complex div(Complex num1, Complex num2) {
    Complex num_final;
    num_final.re = ((num1.re * num2.re + num1.im * num2.im) / (num2.re * num2.re + num2.im * num2.im));
    num_final.im = ((num1.im * num2.re - num1.re * num2.im) / (num2.re * num2.re + num2.im * num2.im));
    return num_final;
}

void print(Complex number) {
    std::cout << number.re;
	if (number.im == -0) {
    	number.im = 0;
	}
    if(number.im >= 0){
        std::cout << "+";
    }
    std::cout << number.im << "j" << '\n';
}
