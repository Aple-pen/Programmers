#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <set>


using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, set<string>> reporterCheck; //중복 방지
    unordered_map<string, int> reportedCount;
    unordered_map<string, int> reporterCount;
    set<string>stopList;

    for (auto repo: report) {
        auto r = repo.find(" ");
        string reporter = repo.substr(0, r);
        string reported = repo.substr(r + 1, repo.size());

        auto index = reporterCheck[reporter].find(reported);
        if (!reporterCheck[reporter].empty()) {
            if (index == reporterCheck[reporter].end()) {
                reporterCheck[reporter].insert(reported);
                reportedCount[reported] += 1;
                if(reportedCount[reported] >= k) stopList.insert(reported);
            }
        } else {
            reporterCheck[reporter].insert(reported);
            reportedCount[reported] += 1;
            if(reportedCount[reported] >= k) stopList.insert(reported);
        }
    }

    for (auto id: id_list) {
        for(auto stop : stopList){
            auto r = reporterCheck[id].find(stop);
            if(r != reporterCheck[id].end()) reporterCount[id]+=1;
        }
        answer.push_back(reporterCount[id]);
    }
    return answer;
}

int main() {
    vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report = {"muzi frodo", "muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
    int k = 2;

    vectorPrint(solution(id_list, report, k));
}