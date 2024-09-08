class Solution {
    public int solution(int[] numbers) {
         int totalSum = 45; // 0부터 9까지의 합
        int sumOfNumbers = 0;
        
        // numbers 배열에 있는 숫자들의 합을 구함
        for (int number : numbers) {
            sumOfNumbers += number;
        }
        
        // 45에서 numbers 배열의 합을 빼면 없는 숫자들의 합이 됨
        return totalSum - sumOfNumbers;
    }
}