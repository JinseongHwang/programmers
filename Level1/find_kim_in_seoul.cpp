
// ���￡�� �輭�� ã��


#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string result = "�輭���� ";
    for (int i = 0; i < seoul.size(); i++) {
        if ("Kim" == seoul[i]) {
            result += to_string(i);
            break;
        }
    }
    return result + "�� �ִ�";
}