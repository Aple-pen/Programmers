//
// Created by Eung gi Kim on 2023/09/05.
//

//프로그래머스 옹알이 문제
#ifndef PROGRAMMERS_1_18_H
#define PROGRAMMERS_1_18_H

#include <string>
#include <vector>

using namespace std;

namespace _1_18{
    int solution(vector<string> babbling) {
        int answer = 0;
        vector<string> joka = {"aya", "ye", "woo", "ma"};
        for (auto b: babbling) {
            string _str = "";
            int min = b.length();
            for (auto j: joka) {
                int findIndex = 0;
                if (b == j) {
                    answer++;
                    continue;
                } else {
                    size_t index = b.find(j);
                    while(index != string::npos){
                        findIndex += index + 1;
                        _str.insert(index > _str.length() ? _str.length() : index < min ? 0 : index, j);
                        if(index < min) min = index;
                        index = b.find(j,findIndex);
                        if(findIndex + 1 == index) break;
                    }
                    if(_str == b){
                        answer++;
                        break;
                    }
                }
            }
        }

        return answer;
    }
}



#endif //PROGRAMMERS_1_18_H
