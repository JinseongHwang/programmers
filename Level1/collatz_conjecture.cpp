
// �ݶ��� ����
// ������ ���� �̻��Ѱǰ�??

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;

	while (num > 1) {
		if (num % 2 == 1) { // Ȧ��
			num *= 3;
			num++;
		}
		else { // ¦��
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