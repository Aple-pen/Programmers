//
// Created by Eung gi Kim on 2023/09/13.
//
//나머지가 1이 되는 수 찾기 풀이
#ifndef PROGRAMMERS_1_23_H
#define PROGRAMMERS_1_23_H

using namespace std;

namespace _1_23{
    int solution(int n) {
        int answer = 0;
        for(int i = 1;i<n;i++){
            if(n%i==1){
                answer = i;
                break;
            }
        }
        return answer;
    }
}

#endif //PROGRAMMERS_1_23_H
