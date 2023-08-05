#include <string>
#include <vector>
#include <iostream>
#include "lev1/1_4.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}



int main() {
    vector<std::string> wallpaper = {"..........", ".....#....", "......##..", "...##.....", "....#....."};
    vectorPrint(solution(wallpaper));
    return 0;
}