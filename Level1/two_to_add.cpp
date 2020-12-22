#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> result;
    int sz = numbers.size();
    for (int i = 0; i < sz; i++) {
        for (int j = i + 1; j < sz; j++) {
            result.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    // TC1
    // vector<int> numbers = { 2,1,3,4,1 };
    // TC2
    vector<int> numbers = { 5,0,2,7};

    for (int elem : solution(numbers)) {
        printf("%d ", elem);
    }

    return 0;
}