
// 크레인 인형뽑기 게임
// 스택

#include <string>
#include <vector>
#include <stack>

using namespace std;

int N, result;
stack<int> S;

void pop_same_elements() {
    S.pop();
    result += 2;
}

void pop_and_move(vector<vector<int>> &board, int col) {
    col--;
    int curr = -1;
    for (int row = 0; row < N; row++) {
        if (board[row][col] != 0) {
            curr = board[row][col];
            board[row][col] = 0;
            break;
        }
    }
    if (curr == -1) {
        return; // col 위치에 비어있는 경우
    }
    if (!S.empty() && S.top() == curr) {
        pop_same_elements();
        return;
    }
    S.push(curr);
}

int solution(vector<vector<int>> board, vector<int> moves) {
    N = board.size();
    for (int& elem : moves) {
        pop_and_move(board, elem);
    }
    return result;
}

int main() {
    // TC1
    vector<vector<int>> board = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 3},
        {0, 2, 5, 0, 1},
        {4, 2, 4, 4, 2},
        {3, 5, 1, 3, 1}
    };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };

    printf("%d\n", solution(board, moves));

    return 0;
}