
// 콜라츠 추측
// 문제가 조금 이상한건가??

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;

	while (num > 1) {
		if (num % 2 == 1) { // 홀수
			num *= 3;
			num++;
		}
		else { // 짝수
			num /= 2;
		}
		answer++;
		if (answer >= 500) {
			answer = -1;
			break;
		}
	}

	return answer;
}