#include <iostream>
#include <string>

std::string resultline = "";

int main()
{
    int n;
    
    std::cin >> n;
    
    while (n > 0)
    {
        int idx = (n - 1) % 26;
    	n = (n - 1) / 26;
        resultline = char(idx + 65) + resultline;
    }
    
    std::cout << resultline;
    
    return 0;
}
