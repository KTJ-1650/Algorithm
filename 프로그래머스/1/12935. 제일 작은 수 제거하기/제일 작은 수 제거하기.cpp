#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    // 배열이 비어있으면 [-1] 반환
    if (arr.empty()) {
        answer.push_back(-1);
        return answer;
    }
    
    // 가장 작은 수 찾기
    int minValue = *min_element(arr.begin(), arr.end());
    
    // 가장 작은 수를 제외한 배열 만들기
    for (int num : arr) {
        if (num != minValue) {
            answer.push_back(num);
        }
    }
    
    // 만약 answer가 비어있으면 [-1] 반환
    if (answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}