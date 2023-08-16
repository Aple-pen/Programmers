//
// Created by Eung gi Kim on 2023/08/17.
//

//프로그래머스 레벨1 과일 장수 문제 풀이

#ifndef PROGRAMMERS_1_15_H
#define PROGRAMMERS_1_15_H
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

namespace _1_15{
    int solution(int k, int m, vector<int> score) {
        int answer = 0;
        int index = m - 1;
        sort(score.begin(),score.end(),greater<int>());
        do{
            answer += score[index] * m;
            index += m;
        }while(index <= score.size());

        return answer;
    }
}
#endif //PROGRAMMERS_1_15_H
