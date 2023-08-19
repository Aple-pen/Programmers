//
// Created by Eung gi Kim on 2023/08/20.
// 프로그래머스 푸드 파이터 대회

#ifndef PROGRAMMERS_1_16_H
#define PROGRAMMERS_1_16_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string _reverse = "";
    for(int i = 1;i<food.size();i++){
        if(food[i] >= 2){
            for(int j = 0 ;j < (food[i] / 2);j++) answer += to_string(i);
        }
    }
    _reverse = answer;
    reverse(_reverse.begin(),_reverse.end());

    return answer + "0" + _reverse;
}
#endif //PROGRAMMERS_1_16_H
