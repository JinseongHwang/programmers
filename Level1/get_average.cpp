
// 평균 구하기
// 수학

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	for (const int& i : arr) answer += i;
	answer /= (double)arr.size();
	return answer;
}