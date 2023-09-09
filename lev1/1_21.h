//
// Created by Eung gi Kim on 2023/09/09.
//
//프로그래머스 lev1 성격유형 검사하기 문제
#ifndef PROGRAMMERS_1_21_H
#define PROGRAMMERS_1_21_H
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

namespace _1_21{
    string solution(vector<string> survey, vector<int> choices) {
        string answer = "";
        vector<string> indicators = {"RT","CF","JM","AN"};
        unordered_map<char, int> table = {
                {'R', 0},{'T', 0},{'C', 0},{'F', 0},{'J', 0},{'M', 0},{'A', 0},{'N', 0}
        };

        for (int i = 0; i < survey.size(); i++) {
            int choice = choices[i] - 4;
            if(choice < 0) table[survey[i][0]] += choice * -1;
            else if(choice > 0) table[survey[i][1]] += choice;
        }

        for(auto indicator : indicators){
            int max = -1;
            string higherChar = "";
            for(int c = 0;c<2;c++){
                if(table[indicator[c]] > max){
                    max = table[indicator[c]];
                    higherChar = indicator[c];
                }
            }
            answer += higherChar;
        }

        return answer;
    }
}

#endif //PROGRAMMERS_1_21_H
