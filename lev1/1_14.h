//
// Created by Eung gi Kim on 2023/08/16.
//
//프로그래머스 lev1 기사단원의 무기 문제 풀이
#ifndef PROGRAMMERS_1_14_H
#define PROGRAMMERS_1_14_H

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
namespace _1_14{
    int solution(int number, int limit, int power) {
        int answer = 0;
        for (int i = 1; i <= number; ++i) {
            int count = 0;
            for(int j = 1;j <= sqrt(i);j++){
                if (i % j == 0) {
                    ++count;
                    if(i / j != j) ++count;
                }
            }
            cout<<count<< " ";
            if(count > limit) count = power;
            answer+=count;
        }
        return answer;
    }
}

#endif //PROGRAMMERS_1_14_H
