#include <iostream>
#include <cmath>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    if (abs((b - a)) < abs((c - a)))
    {
        std::cout << "B " << abs((b - a));
    }
    else
    {
        std::cout << "C " << abs((c - a));
    }
}
