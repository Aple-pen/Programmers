//
// Created by Eung gi Kim on 2023/08/06.
//
//프로그래머스 달리기 경주 문제

#ifndef PROGRAMMERS_1_1_H
#define PROGRAMMERS_1_1_H

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
namespace _1_1{
    vector<string> solution(vector<string> players, vector<string> callings) {

        unordered_map<string,int> p_hash;

        int index = 0;
        for(auto p : players){
            p_hash.insert(unordered_map<string,int>::value_type(p,index++));
        }

        for(auto i : callings){
            auto r = p_hash.find(i);
            string Prev = players[r->second < 0 ? 0 : r->second - 1];
            r->second -= 1;
            players[r->second] = r->first;


            r = p_hash.find(Prev);
            r->second += 1;
            players[r->second] = r->first;
        }

        return players;
    }
}


#endif //PROGRAMMERS_1_1_H
