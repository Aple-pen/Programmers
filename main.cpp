#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include "lev1/1_4.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int prevIndex = 0;
    unordered_map <string,int> hash_goal(goal.size());

    for(int i = 0;i<goal.size();i++){
        hash_goal.insert(make_pair( goal[i],i));
    }

    for(int i =0 ;i<cards1.size();i++){
        auto r = hash_goal.find(cards1[i]);
        if(r != hash_goal.end()){
            if(r->second >= prevIndex){
                prevIndex = r->second;
                answer = "Yes";
            }
            else return "No";
        }else{
            answer = "No";
        }
    }

    prevIndex = 0;

    for(int i =0 ;i<cards2.size();i++){
        auto r = hash_goal.find(cards2[i]);
        if(r != hash_goal.end()){
            if(r->second >= prevIndex) {
                prevIndex = r->second;
                answer = "Yes";
            }
            else return "No";
        }else{
            answer = "No";
        }
    }

    if(prevIndex == 0) answer = "Yes";
    return answer;
}


int main() {
    vector<string> keymap = {"def", "bcd"};
    vector<string> target = {"b", "c", "d"};
    vector<string> goal = {"bcd"};
//    vector<string> keymap = {"i", "drink", "water", "wow"};
//    vector<string> target = {"want", "to"};
//    vector<string> goal = {"i", "want", "to", "drink", "water"};
    cout<<solution(keymap,target,goal)<<endl;
    return 0;
}