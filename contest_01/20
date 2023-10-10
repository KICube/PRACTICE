#include <iostream>
#include <string>

std::string num1;
std::string num2;

int main()
{
    int count{0};
    std::cin >> num1; 
    std::cin >> num2;
    for (char c1 : num1){
        for (char c2 : num2){
            if (c1 == c2){
                count += 1;
                c2 = 'F';
                break;
            }
        }
    }
    if (count == num2.length()){
       std::cout << "YES";
    } else {
       std::cout << "NO";
    }
}
