
// 주식가격
// 브루트 포스

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    int sz = prices.size();
    vector<int> result(sz);
    for (int currIdx = 0; currIdx < sz; currIdx++) {
        int curr = prices[currIdx];
        for (int priceIdx = currIdx + 1; priceIdx < sz; priceIdx++) {
            result[currIdx]++;
            if (curr > prices[priceIdx]) break;
        }
    }
    return result;
}

int main() {
    vector<int> prices = { 1,2,3,2,3 };
    for (int elem : solution(prices)) {
        printf("%d ", elem);
    }

    return 0;
}