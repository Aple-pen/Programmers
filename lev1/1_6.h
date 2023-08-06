//
// Created by Eung gi Kim on 2023/08/07.
//
//프로그래머스 대충 만든 자판 문제

#ifndef PROGRAMMERS_1_6_H
#define PROGRAMMERS_1_6_H

#include<vector>
#include<

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

#endif //PROGRAMMERS_1_6_H
