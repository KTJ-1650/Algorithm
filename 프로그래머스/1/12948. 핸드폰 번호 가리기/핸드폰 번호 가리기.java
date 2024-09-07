class Solution {
    public String solution(String phone_number) {
           // 뒷 4자리를 제외한 나머지 부분을 '*'로 변환
        String answer = "";
        int length = phone_number.length();
        // 앞의 나머지 부분을 *로 대체
        for (int i = 0; i < length - 4; i++) {
            answer += "*";
        }
        // 뒷 4자리 부분을 그대로 붙이기
        answer += phone_number.substring(length - 4);
        
        return answer;
    }
}