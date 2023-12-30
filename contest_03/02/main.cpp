#include <iostream>
#include <vector>
#include <string>

bool print_is_valid(std::string line){
    std::string check_symbols = "()[]{}";
    std::vector<char> symbols;
    char curr_found_symbol = '}';
    for(char curr_symbol : line){
        if(curr_symbol == '!'){break;}
        size_t found_symbol = check_symbols.find(curr_symbol);
        if(found_symbol != std::string::npos && found_symbol % 2 == 0){
            curr_found_symbol = curr_symbol;
            symbols.push_back(curr_symbol);
        } else if(found_symbol != std::string::npos && found_symbol % 2 > 0) {
            if(symbols.size() > 0){
                if(check_symbols.find(curr_symbol) - check_symbols.find(curr_found_symbol) == 1){
                    std::vector<char> new_symbols;
                    for(int i = 0; i < symbols.size() - 1; i += 1){
                        new_symbols.push_back(symbols[i]);
                    }
                    symbols = new_symbols;
                    if(symbols.size() > 0){curr_found_symbol = symbols[symbols.size() - 1];} else {curr_found_symbol = '}';}
                } else {
                    std::cout << "NO" << '\n';
                    return false;
                }
            } else {
                std::cout << "NO" << '\n';
                    return false;
            }
        }
    }
    if(symbols.size() == 0){
        std::cout << "YES" << '\n';
        return true;
    } else {
        std::cout << "NO" << '\n';
        return false;   
    }
}

int main()
{
    std::string line;
    std::getline(std::cin,line,'!');
    print_is_valid(line);
}
