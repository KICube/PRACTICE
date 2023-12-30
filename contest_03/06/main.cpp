#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>

int main()
{
    int amm1;
    int amm2;
    std::cin >> amm1;
    std::vector<std::string> requests;
    std::map<std::string,std::string> users;
    for(int i = 0; i < amm1; i += 1) {
        std::string line;
        std::string key;
        std::string sum;
        
        std::cin >> line;
        std::istringstream new_line(line);
        
        std::getline(new_line,key,';');
        std::getline(new_line,sum);
        
        users[key] = sum;
    }
    std::cin >> amm2;
    for(int i = 0; i < amm2; i += 1){
        std::string line;
        std::cin >> line;
        requests.push_back(line);
    }
    for(std::string line : requests){
        std::cout << users[line] << " ";
    }
}
