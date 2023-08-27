#include "lev1/1_17.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <stack>

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}




int main() {
    vector<int> ingredient = {1, 1, 2, 2, 2, 3, 1};
    cout << _1_17::solution(ingredient) << endl;
    return 0;
}