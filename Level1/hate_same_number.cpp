
// ���� ���ڴ�  �Ⱦ�
// ����? �ߺ�����

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    // ù �ҽ��ڵ�
    /*
    vector<int> answer;
    if (arr.size() == 0) {
        return {};
    }
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (answer.back() != arr[i]) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
    */

    // �������ִ� �ߺ� ������ ���� �Ѵٸ� erase/unique�� ����ؼ� ������ �� �ְ�,
    // ��ü���� �迭���� ��� �ߺ� ������ ���� �Ѵٸ� sort�� �ؼ� ���� ���� ��ġ�� �� �� ������
    // erase/unique�� ����ؼ� �ߺ� ���Ÿ� �����Ѵ�.

    // ������ �ҽ��ڵ�
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

int main() {
    // TC1
    // vector<int> arr = { 1,1,3,3,0,1,1 };

    // TC2
    vector<int> arr = { 4,4,4,3,3 };

    for (int& elem : solution(arr)) {
        printf("%d ", elem);
    }

    return 0;
}