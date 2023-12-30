#include <iostream>
#include <stack>
#include <string>
#include <vector>

int priority(char curr_operator) {
    if (curr_operator == '^') {
        return 3;
    }else if (curr_operator == '*' || curr_operator == '/' || curr_operator == '%') {
        return 2;
    }else if (curr_operator == '+' || curr_operator == '-') {
        return 1;
    }else {
        return 0;
    }
}

std::vector<std::string> to_afterchar(const std::string& math_exp) {
    std::string str;
    std::vector<std::string> afterchar;
    std::stack<char> symb_list;
    for (char curr_char : math_exp) {
        if (isdigit(curr_char)) {
            str += curr_char;
        }else if (curr_char == '(') {
            symb_list.push(curr_char);
        }else if (curr_char == ')') {
            while (!symb_list.empty() && symb_list.top() != '(') {
            afterchar.push_back(str);
            str = "";
            str = symb_list.top();
            symb_list.pop();
            }
            if (!symb_list.empty() && symb_list.top() == '(') {
                symb_list.pop();
            }
        }else if (curr_char == '+' || curr_char == '-' || curr_char == '*' || curr_char == '/' || curr_char == '%' || curr_char == '^') {
            afterchar.push_back(str);
            str = "";
        while (!symb_list.empty() && priority(curr_char) <= priority(symb_list.top()) && priority(curr_char) != 3) {
            str = symb_list.top();
            afterchar.push_back(str);
            str = "";
            symb_list.pop();
        }
        symb_list.push(curr_char);
        }
    }
    while (!symb_list.empty()) {
        afterchar.push_back(str);
        str = "";
        str = symb_list.top();
        symb_list.pop();
    }
    afterchar.push_back(str);
    return afterchar;
}

int main() {
    std::string math_exp;
    std::cin >> math_exp;
    std::vector <std::string> afterchar{ to_afterchar(math_exp) };
    for (int i = 0; i < afterchar.size(); i++) {
        std::cout << afterchar[i] << " ";
    }
}
