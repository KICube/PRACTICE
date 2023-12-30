#include <iostream>
#include <string>

int count{1};
char prevchar{' '};

int main()
{
    std::string mainline;
    std::cin >> mainline;
    mainline = mainline + " ";
    for(char newchar : mainline)
    {
        if (prevchar == newchar)
        {
            count += 1;
        }
        else
        {
            if(prevchar != ' ') {std::cout << prevchar;}
            if(count != 1) {std::cout << count;}
            count = 1;
            prevchar = newchar;
        }
    }  
}
