#include <iostream>
#include <vector>

//
#include <cmath>
class Shape{
    public:
        virtual double getPerimeter(){
            return 0;
        };
};

class Rectangle: public Shape{
    public:
        int a,b;
        Rectangle(int a_n, int b_n) {
            a = a_n; b = b_n;
        }
        double getPerimeter() override {
            return 2.0*(a + b);
        }
};
class Circle: public Shape{
    public:
        int a;
        Circle(int a_n){a = a_n;}
        double getPerimeter() override{
            return 2.0*M_PI*a;
        }
};
class Triangle: public Shape{
    public:
        int a = 0,b = 0,c = 0;
        Triangle(int a_n, int b_n, int c_n){
            if(a_n + b_n > c_n && a_n + c_n > b_n && b_n + c_n > a_n){
                a = a_n; b = b_n; c = c_n;
            }
        };
        double getPerimeter() override{
            return 1.0 *(a + b + c);
        }
};
//

int main(){
    int momentum;
    std::cin >> momentum;
    srand(momentum);
    std::vector <Shape*> shapes(rand() % 100 + 1);
    for (int i=0; i < shapes.size(); i++){
        int a = rand()%10 + 1, b = rand()%10 + 1, c = rand()%10 + 1;
        if (rand() % 3 == 0) shapes[i] = new Rectangle(a, b);
        else if (rand() % 3 == 1) shapes[i] = new Circle(c);
        else shapes[i] = new Triangle(a, b, c);
    }
    
    double sum = 0;
    for (auto shape : shapes) { sum += shape->getPerimeter();}
    std::cout << (int)sum;
}
