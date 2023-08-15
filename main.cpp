#include "lev1/1_13.h"

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}


int main() {
    int k = 3;
    vector<int> score = {10, 100, 20, 150, 1, 100, 200};
    vectorPrint(_1_13::solution(k,score));
    return 0;
}