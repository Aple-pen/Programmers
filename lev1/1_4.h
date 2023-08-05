//
// Created by Eung gi Kim on 2023/08/05.
//

#ifndef PROGRAMMERS_1_4_H
#define PROGRAMMERS_1_4_H

#include <string>
#include <vector>

using namespace std;

namespace _1_4{
    vector<int> solution(vector<string> wallpaper) {
        int maxX = 0;
        int minX = wallpaper[0].length();
        int maxY = 0;
        int minY = wallpaper.size();

        for(int i=0;i<wallpaper.size();i++){
            for(int j=0;j<wallpaper[0].length();j++){
                if(wallpaper[i][j] == '#'){
                    if(i < minY) minY = i;
                    if(j < minX) minX = j;
                    if(maxY < i) maxY = i;
                    if(maxX < j) maxX = j;
                }
            }
        }
        return {minY,minX,maxY + 1,maxX};
    }
}
#endif //PROGRAMMERS_1_4_H
