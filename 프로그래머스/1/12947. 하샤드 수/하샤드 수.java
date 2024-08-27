class Solution {
    public boolean solution(int x) {
        boolean answer = true;
        int sumDelight = 0;
        int originalX = x;
        
        while(x>0){
            sumDelight += x%10;
            x /=10;
        }
        
        answer = ((originalX % sumDelight) == 0);
        return answer;
    }
}