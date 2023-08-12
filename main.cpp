#include <vector>
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <string.h>
#include "lev1/1_9.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}


int main() {
    string today = "2022.05.19";
    vector<string> terms = {"A 6", "B 12", "C 3"};
    vector<string> privacies = {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"};
    vectorPrint(_1_9::solution(today,terms,privacies));
    return 0;
}