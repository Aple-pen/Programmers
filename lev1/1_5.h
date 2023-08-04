//
// Created by Eung gi Kim on 2023/08/04.
//


//프로그래머스 덧칠하기 문제 1-5
#ifndef PROGRAMMERS_1_5_H
#define PROGRAMMERS_1_5_H

#include <vector>

using namespace std;

namespace _1_5 {
    int solution(int n, int m, vector<int> section) {
        int wallPointer = 0;
        int count = 0;

        for (int i = 0; i < section.size(); i++) {
            if (section[i] < wallPointer + 1) {
                continue;
            }
            wallPointer = (section[i] - 1) + m; //check
            count++;
        }
    }
}

#endif //PROGRAMMERS_1_5_H
