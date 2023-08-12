//
// Created by Eung gi Kim on 2023/08/12.
//
//프로그래머스 가장 가까운 글자 풀이
#ifndef PROGRAMMERS_1_11_H
#define PROGRAMMERS_1_11_H
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

namespace _1_11{
    vector<int> solution(string s) {
        vector<int> answer;
        unordered_map<char,int> s_hash;
        for(int i =0;i<s.size();i++){
            if(s_hash.find(s[i]) != s_hash.end()){
                answer.push_back(i - s_hash.find(s[i])->second);
                s_hash.erase( s_hash.find(s[i]));
            }else answer.push_back(-1);

            s_hash.insert(make_pair(s[i],i));
        }
        return answer;
    }
}

#endif //PROGRAMMERS_1_11_H
