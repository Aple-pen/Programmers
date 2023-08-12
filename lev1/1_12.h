//
// Created by Eung gi Kim on 2023/08/12.
//
//프로그래머스 1-12 문자열 나누기 문제
#ifndef PROGRAMMERS_1_12_H
#define PROGRAMMERS_1_12_H


#include <string>

using namespace std;

namespace _1_12{
    int solution(string s) {
        int answer = 0;
        char prevChar = '\0';
        int prevCount = 0,lastCount = 0;
        for(int i = 0;i<s.size();i++){
            if(i == s.size() - 1){
                answer++;
                break;
            }
            if(prevChar == '\0'){
                prevChar = s[i];
                prevCount++;
            }else{
                if(prevChar == s[i]) prevCount++;
                else lastCount++;

                if(prevCount == lastCount){
                    answer++;
                    prevChar = '\0';
                    prevCount = 0;
                    lastCount = 0;
                }
            }
        }

        return answer;
    }
}
#endif //PROGRAMMERS_1_12_H
