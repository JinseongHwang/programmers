
// K번째 수
// 정렬

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> result;

    for (vector<int> command : commands) {
        int i = command[0], j = command[1], k = command[2];
        vector<int> curr;
        for (int iter = i - 1; iter < j; iter++) curr.push_back(array[iter]);
        sort(curr.begin(), curr.end());
        result.push_back(curr[k - 1]);
    }

    return result;
}

int main() {

    // TC1
    vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} };

    for (int& elem : solution(array, commands)) {
        printf("%d ", elem);
    }

    return 0;
}