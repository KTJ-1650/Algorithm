class Solution {
    public int solution(int n) {
        int answer = 0;
        
        //12의 약수 
        //n=12   1,2,3,4,6,12   나머지가 0이고 구한값을 다 더한다
        
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                answer = answer + i;
            }
        }
        
        
        return answer;
    }
}