#include "lev1/1_10.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}



int main() {
    string t = "3141592";
    string p = "271";

    cout<<_1_10::solution(t,p);
    return 0;
}