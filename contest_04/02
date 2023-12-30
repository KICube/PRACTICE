#include <iostream>
#include <fstream>
#include "json.hpp"
#include <string>
using json = nlohmann::json;

int main(){
    std::ifstream f("data.json");
    json j;
    f >> j;
    int count = 0;
    int curr_user_id;
    std::cin >> curr_user_id;
    for (auto& it : j.items()) {
        if(!it.value()["tasks"].empty()){
            for(auto& task : it.value()["tasks"].items()){
                if(task.value()["user_id"] == curr_user_id && task.value()["completed"] == true){
                    count ++;
                }
            }
        }
    }
    std::cout << count;
}
