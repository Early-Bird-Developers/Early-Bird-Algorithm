class Solution {
    public int[] solution(int[] numbers, int num1, int num2) {
        int len = num2 - (num1 - 1);
        int[] answer = new int[len];
        int cnt=0;
        
        for(int i=num1; i < num2+1; i++)
            answer[cnt++] = numbers[i];
        
        return answer;
    }
}
