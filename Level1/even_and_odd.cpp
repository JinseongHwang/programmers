
// ¦���� Ȧ��
// ����?

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    // ���� ���� ǥ���̴�.
    // return num % 2 ? "Odd" : "Even";
    return num & 1 ? "Odd" : "Even";
}