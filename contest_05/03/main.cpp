#include <sstream>  
#include <algorithm>
class Complex {
public:
	double a,b;
	Complex(std::string nums) {
		nums.erase(std::remove(nums.begin(), nums.end(), ' '),nums.end());
        nums.erase(std::remove(nums.begin(), nums.end(), '\n'),nums.end());
        double sign = 1.0;
        double sign1 = 1.0;
        if(nums[0] == '-'){sign = -1.0; nums[0] = ' ';}
        std::stringstream str_nums(nums);
        std::size_t it = nums.find("+",1);
        if(it == std::string::npos){it = nums.find("-",1); sign1 = -1.0;}
        std::string str;
        std::string::size_type sz;
        std::getline(str_nums, str, nums[(int) it]);
        a = sign * stod(str, &sz);
        std::getline(str_nums, str);
        b = sign1 * stod(str, &sz);
	};
	Complex(double a_n, double b_n) : a(a_n), b(b_n) {}
	friend std::ostream& operator<<(std::ostream& out, const Complex& num) {
		out << (num.a == 0.0 ? 0.0 : num.a)
			<< (num.b < 0 ? "" : "+")
			<< (num.b == 0.0 ? 0.0 : num.b) << 'j';
		return out;
	}
	friend Complex operator+ (Complex c1, Complex c2) {
		return Complex(c1.a + c2.a, c1.b + c2.b);
	}
	friend Complex operator- (Complex c1, Complex c2) {
		return Complex(c1.a - c2.a, c1.b - c2.b);
	}
	friend Complex operator* (Complex c1, Complex c2) {
		return Complex(c1.a * c2.a - c1.b * c2.b, c1.b * c2.a + c2.b * c1.a);
	}
	friend Complex operator/ (Complex c1, Complex c2) {
		return Complex((c1.a * c2.a + c1.b * c2.b) / (c2.a * c2.a + c2.b * c2.b), (c1.b * c2.a - c1.a * c2.b) / (c2.a * c2.a + c2.b * c2.b));
	}
};
