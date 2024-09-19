#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    // 결과를 저장할 answer 벡터, 크기는 arr1과 arr2의 크기와 같음
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size()));

    // 행렬 덧셈 수행
    for (int i = 0; i < arr1.size(); i++) {          // 행 반복
        for (int j = 0; j < arr1[0].size(); j++) {   // 열 반복
            answer[i][j] = arr1[i][j] + arr2[i][j];  // 같은 위치의 원소를 더함
        }
    }
    
    return answer;
}
