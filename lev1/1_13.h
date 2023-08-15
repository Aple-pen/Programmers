//
// Created by Eung gi Kim on 2023/08/16.
//
#ifndef PROGRAMMERS_1_13_H
#define PROGRAMMERS_1_13_H

#include <iostream>
#include <vector>
#include <queue>
#include <functional>

//프로그래머스 1-13 명예의 전당(1) 문제 풀이
using namespace std;
namespace _1_13{
    vector<int> solution(int k, vector<int> score) {
        vector<int> answer;
        priority_queue <int,vector<int>,greater<int>> honor;

        for(int i = 0;i<score.size();i++){
            if(i < k){
                honor.push(score[i]);
            }else{
                if(honor.top()<score[i]){
                    honor.pop();
                    honor.push(score[i]);
                }
            }
            answer.push_back(honor.top());
        }
        return answer;
    }
}

#endif //PROGRAMMERS_1_13_H
