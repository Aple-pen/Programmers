//
// Created by Eung gi Kim on 2023/08/12.
//
//프로그래멋 1-10 크기가 작은 부분문자열
#ifndef PROGRAMMERS_1_10_H
#define PROGRAMMERS_1_10_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

namespace _1_10{
    int solution(string t, string p) {
        int answer = 0;
        for(int i = 0;i<=t.length()-p.length();i++){
            if(stol(t.substr(i,p.length())) <= stol(p)) answer++;
        }
        return answer;
    }
}


#endif //PROGRAMMERS_1_10_H
