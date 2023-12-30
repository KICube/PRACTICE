#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int amm1;
    int amm2;
    std::vector<int> full_array;
    std::cin >> amm1;
    int add_num;
    for(int i = 0;i <= amm1 - 1; i += 1){
        std::cin >> add_num;
        full_array.push_back(add_num);
    }
    std::cin >> amm2;
    for(int i = 0;i < amm2; i += 1){
        std::cin >> add_num;
        full_array.push_back(add_num);
    }
    std::sort(full_array.begin(), full_array.end());
    for(int num : full_array){
        std::cout << num << " ";
    }
}
