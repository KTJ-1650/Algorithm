#include <string>
#include <vector>
#include <algorithm>  // for sort

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    // 각 command에 대해 처리
    for (const auto& command : commands) {
        int i = command[0];
        int j = command[1];
        int k = command[2];
        
        // array의 i번째부터 j번째까지 자른 부분 배열 생성
        vector<int> temp(array.begin() + i - 1, array.begin() + j);

        // 자른 배열을 정렬
        sort(temp.begin(), temp.end());

        // 정렬된 배열의 k번째 숫자를 answer에 추가
        answer.push_back(temp[k - 1]);
    }

    return answer;
}
