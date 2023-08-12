//
// Created by Eung gi Kim on 2023/08/12.
//
//프로그래머스 개인정보 수집 유효기간 문제 풀이
#include <vector>
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <string.h>

#ifndef PROGRAMMERS_1_9_H
#define PROGRAMMERS_1_9_H

using namespace std;

namespace _1_9{
    int sumDate(vector<int> date){
        return (date[0] * 12 * 28) + (date[1] * 28) + (date[2]);
    }

    vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
        vector<int> answer;
        vector<int> dateVector;
        unordered_map<char,int> terms_hash;
        unordered_map<int,char> privacy_hash;

        istringstream ss(today);
        string token;
        while(getline(ss,token,'.')){
            dateVector.push_back(stoi(token));
            token = "";
        }
        int todaySum = sumDate(dateVector);

        ss.clear();
        dateVector.clear();

        for(auto term : terms){
            ss.str(term);
            int index = 0;
            while(getline(ss,token,' ')){
                if(index == 0){
                    const char* cString = token.c_str();
                    dateVector.push_back(*cString);
                }else{
                    dateVector.push_back(stoi(token));
                }
                index ++;


            }

            terms_hash.insert(make_pair((char)dateVector[0],dateVector[1]));
            dateVector.clear();
            ss.clear();
        }

        dateVector.clear();
        int index = 0;
        for(int i = 0;i<privacies.size();i++){
            ss.str(privacies[i]);
            int privacySum;
            const char* type;
            while(getline(ss,token,' ')){
                if(index == 0) {
                    istringstream _ss(token);
                    vector<int>_dateVector;
                    while(getline(_ss,token,'.')){
                        _dateVector.push_back(stoi(token));
                    }
                    privacySum = sumDate(_dateVector);
                    index++;
                }else if(index == 1){
                    type = token.c_str();
                    auto r = terms_hash.find(*type);
                    if(r != terms_hash.end()){
                        if(privacySum + (r->second * 28) <= todaySum){
                            answer.push_back(i + 1);
                        }
                    }
                    index = 0;
                }
            }
            ss.clear();
        }


        return answer;
    }
}


#endif //PROGRAMMERS_1_9_H
