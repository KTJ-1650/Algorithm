import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr, int divisor) {
       int count = 0;
        
       //나누어 떨어지는 요소를 arr 배열의 앞부분에 저장
        
        for(int num : arr){
            if(num % divisor == 0){
                arr[count++] = num;
            }
        }
        
        if(count == 0){
            return new int[]{-1};
        }
        
    
        //나누어 떨어지는 요소들만을 
        int[] answer = Arrays.copyOf(arr,count);
        
        Arrays.sort(answer);
             
        
       
        return answer;
    }
}