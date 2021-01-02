
// 비밀지도
// 문자열

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;

	for (int i = 0; i < n; i++) {
		string tmp;
		for (int j = 0; j < n; j++) tmp.push_back(' ');
		answer.emplace_back(tmp);
	}

	for (int row = 0; row < arr1.size(); row++) {
		int curr = arr1[row];
		vector<int> bin; int cnt = 1;
		while (curr > 0) {
			bin.emplace_back(curr % 2);
			curr /= 2;
			if (bin.back() == 1) answer[row][n - cnt] = '#';
			cnt++;
		}
	}

	for (int row = 0; row < arr2.size(); row++) {
		int curr = arr2[row];
		vector<int> bin; int cnt = 1;
		while (curr > 0) {
			bin.emplace_back(curr % 2);
			curr /= 2;
			if (bin.back() == 1) answer[row][n - cnt] = '#';
			cnt++;
		}
	}
	
	return answer;
}