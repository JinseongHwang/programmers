
// 최대공약수와 최소공배수
// 수학

#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) { return b == 0 ? a : GCD(b, a % b); }
int LCM(int a, int b, int gcd) { return a * b / gcd; }

vector<int> solution(int n, int m) {
	vector<int> answer;
	answer.emplace_back(GCD(n, m));
	answer.emplace_back(LCM(n, m, answer.front()));
	return answer;
}