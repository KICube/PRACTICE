#include <cmath>
class Point{
    private:
        double x, y, r, a;    
    public:
        Point(double x_new, double y_new){
            x = x_new;
            y = y_new;
            r = pow(pow(x,2)+pow(y,2),0.5);
            a = atan(y/x);
        }
    void set_x(double i){x = i; r = pow(pow(x,2)+pow(y,2),0.5); a = atan(y/x);}
    void set_y(double i){y = i; r = pow(pow(x,2)+pow(y,2),0.5); a = atan(y/x);}
    void set_r(double i){r = i; x = r*cos(a); y = r*sin(a);}
    void set_a(double i){a = i; x = r*cos(a); y = r*sin(a); r = pow(pow(x,2)+pow(y,2),0.5);}
    
    double get_x(){return x;}
    double get_y(){return y;}
    double get_r(){return r;}
    double get_a(){return a;}
};
