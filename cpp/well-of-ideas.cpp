// Codewars Kata: Well of Ideas - Harder Version
// https://www.codewars.com/kata/57f22b0f1b5432ff09001cab/solutions/cpp
#include <iostream>
#include <vector>
#include <string>

std::string well(const std::vector<std::vector<std::string>>& arr) {
    
    std::vector<std::string> n;

    for (int h = 0; h < arr.size(); h++) {
     
        for (int i = 0; i < arr[h].size(); i++) {
            std::string word = "";
        
            for (int j = 0; j < arr[h][i].size(); j++) {
                word += tolower(arr[h][i][j]);
            }
            
            n.push_back(word);
        }
    }

    int good = 0;
    int bad = 0;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == "good") {
            good += 1;
        }
        else if (n[i] == "bad") {
            bad += 1;
        }
    }

    if (good > 0 && good < 3) {
        return "Publish!";
    }
    else if (good > 2) {
        return "I smell a series!";
    }
    return "Fail!";
}

int main() {
    std::vector<std::vector<std::string>> arr = {{"gOOd", "bAd", "BAD", "bad", "bad"},
                                                {"bad","bAd", "bad"},
                                                {"GOOD", "bad", "bad", "bAd"}};
    std::cout << well(arr);
    return 0;
}
