#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>


using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<string> indicators = {"RT","CF","JM","AN"};
    unordered_map<char, int> table = {
            {'R', 0},{'T', 0},{'C', 0},{'F', 0},{'J', 0},{'M', 0},{'A', 0},{'N', 0}
    };

    for (int i = 0; i < survey.size(); i++) {
        int choice = choices[i] - 4;
        if(choice < 0) table[survey[i][0]] += choice * -1;
        else if(choice > 0) table[survey[i][1]] += choice;
    }

    for(auto indicator : indicators){
        int max = -1;
        string higherChar = "";
        for(int c = 0;c<2;c++){
            if(table[indicator[c]] > max){
                max = table[indicator[c]];
                higherChar = indicator[c];
            }
        }
        answer += higherChar;
    }

    return answer;
}

int main() {
    vector<string> survey = {"TR", "RT", "TR"};
    vector<int> choice = {7, 1, 3};

    cout << solution(survey,choice) << endl;
    return 0;
}