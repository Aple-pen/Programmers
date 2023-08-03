#include <string>
#include <vector>
#include <iostream>
#include "lev1/1_5.h"


using namespace std;


template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}


int main() {
    std::vector<int> section = {2,3,6};
    cout << _1_5::solution(8,4,section) <<endl;
    return 0;
}