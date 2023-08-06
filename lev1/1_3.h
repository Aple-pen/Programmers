//
// Created by Eung gi Kim on 2023/08/06.
//
//프로그래머스 공원산책 문제

#ifndef PROGRAMMERS_1_3_H
#define PROGRAMMERS_1_3_H
#include <string>
#include <vector>

using namespace std;

namespace _1_3{
    vector<int> solution(vector<string> park, vector<string> routes) {
        vector<int> answer;
        //park 그리기
        vector<vector<char>> _park;
        int x; //가로 좌표
        int y; //세로 좌표

        char locateChar; //방향
        int step; //이동횟수

        for (int i = 0; i < park.size(); i++) {
            vector<char> _parkWidth;
            for (int j = 0; j < park[i].length(); j++) {
                if (park[i][j] == 'S') {
                    x = j;
                    y = i;
                }
                _parkWidth.push_back(park[i][j]);
            }
            _park.push_back(_parkWidth);
        }
        // cout <<"start : " << "y : " << y << " , " << "x : " << x << endl;

        for (auto _routes: routes) {
            int _x;
            int _y;

            locateChar = _routes[0];
            step = _routes[2] - '0';

            int prev_x = x;
            int prev_y = y;
            int count = 0;
            while (count < step) {
                _x = x;
                _y = y;
                switch (locateChar) {
                    case 'N' :
                        _y = _y - 1;
                        if (_y < 0){
                            _y = prev_y;
                            count = step;
                        }else {
                            if (_park[_y][_x] == 'X') {
                                _y = prev_y;
                                count = step;
                            }
                        }
                        y = _y;
                        break;
                    case 'S' :
                        _y = _y + 1;
                        if (_y >= park.size()){
                            _y = prev_y;
                            count = step;
                        }else {
                            if (_park[_y][_x] == 'X') {
                                _y = prev_y;
                                count = step;
                            }
                        }
                        y = _y;
                        break;
                    case 'W' :
                        _x = _x - 1;
                        if (_x < 0) {
                            _x = prev_x;
                            count = step;
                        }
                        else {
                            if (_park[_y][_x] == 'X') {
                                _x = prev_x;
                                count = step;
                            }
                        }
                        x = _x;
                        break;
                    case 'E' :
                        _x = _x + 1;
                        if (_x > park[0].length() - 1){
                            _x = prev_x;
                            count = step;
                        }
                        else {
                            if (_park[_y][_x] == 'X') {
                                _x = prev_x;
                                count = step;
                            }
                        }
                        x = _x;
                        break;
                }
                count += 1;
            }



//        cout << "y : " << y << " , " << "x : " << x << endl;
        }
        answer.push_back(y);
        answer.push_back(x);

        return answer;
    }
}

#endif //PROGRAMMERS_1_3_H
