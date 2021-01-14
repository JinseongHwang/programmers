
// Ű�е� ������
// ����

#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

struct Pos {
    int R, C;
};

Pos keypad[12] = {
    {3, 1}, // 0
    {0, 0}, {0, 1}, {0, 2}, // 1 2 3
    {1, 0}, {1, 1}, {1, 2}, // 4 5 6
    {2, 0}, {2, 1}, {2, 2}, // 7 8 9
    {3, 0}, {3, 2} // 10: *, 11: #
};

int len(const Pos& hand, const Pos& target) {
    return abs(hand.R - target.R) + abs(hand.C - target.C);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    bool rightHanded = false;
    if (hand == "right") {
        rightHanded = true;
    }
    Pos L = keypad[10], R = keypad[11];
    for (const int& num : numbers) {
        if (num == 1 || num == 4 || num == 7) {
            L = keypad[num];
            answer.push_back('L');
        }
        else if (num == 3 || num == 6 || num == 9) {
            R = keypad[num];
            answer.push_back('R');
        }
        else {
            int l = len(L, keypad[num]);
            int r = len(R, keypad[num]);
            // �޼��� �� �����ų�, �Ÿ��� ������ �޼������� ��� �޼����� ������.
            if (l < r || (!rightHanded && l == r)) {
                answer.push_back('L');
                L = keypad[num];
            }
            // �̿��� ��쿡�� ���������� ������.
            else {
                answer.push_back('R');
                R = keypad[num];
            }
        }
    }

    return answer;
}