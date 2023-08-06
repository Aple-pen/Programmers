//
// Created by Eung gi Kim on 2023/08/06.
//
//프로그래머스 추억 점수 문제
#ifndef PROGRAMMERS_1_2_H
#define PROGRAMMERS_1_2_H
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
namespace _1_2{
    vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
        vector<int> answer;
        unordered_map<string, int> _hash;
        for (int i = 0; i < name.size(); i++) {
            _hash.insert(unordered_map<string, int>::value_type(name[i], yearning[i]));
        }

        for (auto _vect: photo) {
            int count = 0;
            for (auto _name: _vect) {

                auto r = _hash.find(_name);
                if (r != _hash.end()) {
                    count += r->second;
                }
            }

            answer.push_back(count);
        }
        return answer;
    }
}

#endif //PROGRAMMERS_1_2_H
