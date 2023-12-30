#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

int main()
{
    int amm1;
    int amm2;
    std::set<std::string> start_array;
    std::set<std::string> end_array;
    std::cin >> amm1;
    std::string add_str;
    for(int i = 0;i < amm1; i += 1){
        std::cin >> add_str;
        start_array.insert(add_str);
    }
    std::cin >> amm2;
    for(int i = 0;i < amm2; i += 1){
        std::cin >> add_str;
        end_array.insert(add_str);
    }
    std::vector<std::string> sorted_array;
    std::set_intersection(start_array.begin(),start_array.end(),end_array.begin(),end_array.end(),std::back_inserter(sorted_array));
    std::sort(sorted_array.begin(),sorted_array.end());
    if(sorted_array.size() > 0){
        for(std::string str : sorted_array){
            std::cout << str << " ";
        }
    } else {
        std::cout << -1;
    }
}
