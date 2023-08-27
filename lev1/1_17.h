//
// Created by Eung gi Kim on 2023/08/27.
//

#ifndef PROGRAMMERS_1_17_H
#define PROGRAMMERS_1_17_H

#include <vector>
#include <stack>

using namespace std;

namespace _1_17{
    int solution(vector<int> ingredient) {
        stack<int> hamburg;
        int answer = 0;
        int sequence = 0;

        for (auto v: ingredient) {
            if (v == 1) {
                if (!hamburg.empty()) {
                    if (hamburg.top() == 3) {
                        answer++;
                        for (int i = 0; i < sequence ; i++)
                            hamburg.pop();
                        sequence = 0;
                        continue;
                    }
                }
                hamburg.push(v);
                sequence = v;
                continue;
            }
            if (!hamburg.empty()) {
                if (v == 2 || v == 3) {
                    if (hamburg.top() == v - 1) {
                        hamburg.push(v);
                        sequence = v;
                        continue;
                    }
                }
            }

            int size = hamburg.size();
            for (int i = 0; i < size; i++)
                hamburg.pop();

            sequence = 0;
        }
        return answer;
    }
}
#endif //PROGRAMMERS_1_17_H
