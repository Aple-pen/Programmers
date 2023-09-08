//
// Created by Eung gi Kim on 2023/09/08.
//
// 프로그래머스 lev1 콜라 문제
#ifndef PROGRAMMERS_1_19_H
#define PROGRAMMERS_1_19_H

#include <math.h>

using namespace std;

namespace _1_19{
    int solution(int a, int b, int n) {
        if (n < a) {
            return 0;
        }else{
            int sum = floor(n / a) * b;
            return sum + solution(a,b,sum + (n % a));;
        }
    }
}

#endif //PROGRAMMERS_1_19_H
