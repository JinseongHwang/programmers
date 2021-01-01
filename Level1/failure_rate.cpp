
// 실패율
// 정렬, 구현

#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
	int stage;
	double f_rate;

	bool operator<(const Data& nxt) const {
		if (this->f_rate == nxt.f_rate) {
			return this->stage < nxt.stage;
		}
		return this->f_rate > nxt.f_rate;
	}
};

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<Data> repo;

	sort(stages.begin(), stages.end());
	int leftMembers = stages.size();
	int currStage = 1, currStageCnt = 0, idx = 0;
	for (; idx < stages.size() && currStage <= N; currStage++) {
		while (stages[idx] == currStage) {
			currStageCnt++;
			idx++;
		}
		repo.push_back({ currStage, (double)currStageCnt / leftMembers });
		leftMembers -= currStageCnt;
		currStageCnt = 0;
	}
	while (repo.size() < N) {
		repo.push_back({ currStage, 0});
		currStage++;
	}
	sort(repo.begin(), repo.end());
	for (const Data& data : repo) {
		answer.emplace_back(data.stage);
	}

	return answer;
}

int main() {
	int N = 5;
	vector<int> stages = { 1,2,2,1,3};
	
	for (const int& res : solution(N, stages)) {
		printf("%d ", res);
	}

	return 0;
}