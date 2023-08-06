#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include "lev1/1_4.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char,int> keyHash;
    vector<int>answer;
    for(auto key : keymap){
        for(int i = 0; i<key.length();i++){
            auto iter = keyHash.find(key[i]);
            if(iter != keyHash.end()){
                if(i + 1 < iter->second )iter->second = i + 1;
            }else keyHash.insert(make_pair(key[i],i + 1));
        }
    }

    for(auto target : targets){
        int sum = 0;
        for(auto targetChar : target){
            auto iter = keyHash.find(targetChar);
            if(iter != keyHash.end()) sum += iter->second;
            else{
                sum = -1;
                break;
            }
        }
        answer.push_back(sum == 0 ? -1 : sum);
    }

    return answer;
}


int main() {
    vector<string> keymap = {"ABACD", "BCEFD"};
    vector<string> target = {"ABCD","AABB"};
    vectorPrint(solution(keymap, target));
    return 0;
}