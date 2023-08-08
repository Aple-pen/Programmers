//
// Created by Eung gi Kim on 2023/08/09.
//
//프로그래머스 1-8 둘만의 암호
#ifndef PROGRAMMERS_1_8_H
#define PROGRAMMERS_1_8_H

#include <string>
#include <algorithm>

using namespace std;

namespace _1_8{
    string solution(string s, string skip, int index) {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string answer = "";

        for(auto _skip : skip){
            alphabet.erase(find(alphabet.begin(),alphabet.end(),_skip));
        }

        for(auto _s : s){
            int sIndex = alphabet.find(_s);
            answer += alphabet[(sIndex + index) % alphabet.length()];
        }
        return answer;
    }
}
#endif //PROGRAMMERS_1_8_H
