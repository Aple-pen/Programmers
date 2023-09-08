//
// Created by Eung gi Kim on 2023/09/08.
//
// 프로그래머스 lev1 카드 뭉치 문제
#ifndef PROGRAMMERS_1_7_H
#define PROGRAMMERS_1_7_H

#include <string>
#include <vector>

using namespace std;

namespace _1_7 {
    string solution(vector <string> cards1, vector <string> cards2, vector <string> goal) {
        int ptr1 = 0;
        int ptr2 = 0;
        for (auto g: goal) {
            if (g == cards1[ptr1]) {
                ptr1++;
                continue;
            }
            if (g == cards2[ptr2]) {
                ptr2++;
                continue;
            }
            return "No";
        }
        return "Yes";
    }
}

#endif //PROGRAMMERS_1_7_H
