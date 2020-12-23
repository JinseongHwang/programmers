
// 완주하지 못한 선수
// 해싱

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> ump;

    for (string& name : completion) {
        ump[name]++;
    }

    string result = "";
    for (string& name : participant) {
        if (!ump[name]) {
            result = name;
            break;
        }
        ump[name]--;
    }
    return result;
}

int main() {

    // TC1
    //vector<string> participant = {"leo", "kiki", "eden"};
    //vector<string> completion = {"eden", "kiki"};

    // TC2
    //vector<string> participant = {"marina", "josipa", "nikola", "vinko", "filipa"};
    //vector<string> completion = {"josipa", "filipa", "marina", "nikola"};

    // TC3
    vector<string> participant = {"mislav", "stanko", "mislav", "ana"};
    vector<string> completion = {"stanko", "ana", "mislav"};

    cout << solution(participant, completion) << "\n";

    return 0;
}