#include <iostream>
#include <map>
#include <algorithm>
#include <cstdint>

int main(){
  int_fast16_t amm;
  std::cin >> amm;
  std::map<std::string,int_fast16_t> text_map;
  std::string add_str;
  int_fast16_t max_cnt = 1;
  for(int_fast16_t i = 0; i < amm; i += 1){
    std::cin >> add_str;
    if(text_map.count(add_str) > 0){
        text_map[add_str] += 1;
        max_cnt = std::max(max_cnt,text_map[add_str]);
    } else {
        text_map[add_str] = 1;
    }
  }
  for(auto it = text_map.begin(); it != text_map.end(); it ++){
    if(it->second == max_cnt){
        std::cout << it->first << " ";
    }
  }
}
