class Solution {
    public int[] solution(long n) {
        
        String str = new StringBuilder(String.valueOf(n)).reverse().toString();
        
        int[] answer = new int[str.length()];
        
        for(int i=0; i<str.length(); i++){
            
            answer[i] = Character.getNumericValue(str.charAt(i));
        }
        
        return answer;
    }
}