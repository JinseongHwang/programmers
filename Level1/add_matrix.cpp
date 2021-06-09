
// Çà·ÄÀÇ µ¡¼À
// 2Â÷¿ø º¤ÅÍ?

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;

	int rows = arr1.size();
	int cols = arr1[0].size();

	for (int i = 0; i < rows; i++) {
		vector<int> tmp(cols);
		answer.push_back(tmp);
	}
	
	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			answer[row][col] = arr1[row][col] + arr2[row][col];
		}
	}

	return answer;
}

int main() {
	solution({ {1}, {2} }, { {3}, {4} });
	return 0;
}