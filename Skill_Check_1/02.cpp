#include <cstdio>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    long double answer = 0;
    for (const int& elem : arr) answer += elem;
    answer /= (double)arr.size();
    return answer;
}

int main() {
    vector<int> arr = { 1,2,3,4 };
    printf("%lf\n", solution(arr));

    return 0;
}