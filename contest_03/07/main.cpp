#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <iterator>

std::map<std::string,int> next_words;

bool sort_alg(std::string a, std::string b){
    if(next_words[a] == next_words[b]){
        int i = std::distance(next_words.begin(), next_words.find(a));
        int j = std::distance(next_words.begin(), next_words.find(b));
        return i < j;
    }
    return next_words[a] > next_words[b];
}

int main(){
    std::ifstream file("data.txt");
    
    std::string text;
    std::getline(file,text);
    
    std::vector<std::string> words;

    std::istringstream new_text(text);
    std::string word = "";
    
    while(word != "stopword"){
        std::getline(new_text,word,' ');
        words.push_back(word);
    }
    
    std::string target;
    std::cin >> target;
    
    int max_cnt = 1;
    for(int i = 1;words[i] != "stopword" ;i++){
        if(words[i - 1] == target){
            if(next_words.count(words[i]) > 0){
                next_words[words[i]] += 1;
                max_cnt = std::max(max_cnt,next_words[words[i]]);
            } else {
                next_words[words[i]] = 1;
            }
        }
    }
    std::vector<std::string> final_strings;
    int cnt = 0;
    while(cnt < 3){
        for(auto it = next_words.begin(); it != next_words.end(); it ++){
            if(it->second == max_cnt && cnt < 3){
                cnt += 1;
                final_strings.push_back(it->first);
            }
        }
        max_cnt -= 1;
        if(max_cnt == 0){
            break;
        }
    }
    if(cnt == 0){
        std::cout << "-";
    } else {
        std::sort(final_strings.begin(), final_strings.end(), sort_alg);
    }
    for(std::string word : final_strings){
        std::cout << word << " ";
    }
}
