//
// Created by Eung gi Kim on 2023/09/08.
//
//프로그래머스 lev1 삼총사 문제
#ifndef PROGRAMMERS_1_20_H
#define PROGRAMMERS_1_20_H

#include<vector>

using namespace std;

namespace _1_20{
    int combi(int start,vector<int> b,vector<int>number){
        int sum = 0;
        if(b.size() == 3){
            int sum = 0;
            for(auto _b : b) sum += _b;
            if(sum == 0) return 1;
        }

        for(int i = start + 1;i<number.size();i++){
            b.push_back(number[i]);
            sum += combi(i,b,number);
            b.pop_back();
        }
        return sum;
    }

    int solution(vector<int> number) {
        vector<int>b;
        return combi(-1,b,number);
    }
}

#endif //PROGRAMMERS_1_20_H
