
// 서울에서 김서방 찾기


#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string result = "김서방은 ";
    for (int i = 0; i < seoul.size(); i++) {
        if ("Kim" == seoul[i]) {
            result += to_string(i);
            break;
        }
    }
    return result + "에 있다";
}