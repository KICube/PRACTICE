#include <algorithm>
#include <vector>
#include <string>

bool compare(std::string n1,std::string n2){
    int result1{0};
    int result2{0};
    for(char& number : n1){
        if(number == '1'){
            result1 += 1;
        }
    }
    for(char& number : n2){
        if(number == '1'){
            result2 += 1;
        }
    }
    if(result1 != result2){
        return(result1 > result2);
    } else if(result1 == result2) {
        int num1 = stoi(n1);
        int num2 = stoi(n2);
        return(num1 < num2);
    }
}
