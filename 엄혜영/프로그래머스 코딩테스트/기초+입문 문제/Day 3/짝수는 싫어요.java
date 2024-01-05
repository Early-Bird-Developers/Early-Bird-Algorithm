class Solution {
    public int[] solution(int n) {
        int size = (n % 2 == 0) ? n / 2 : (n+1) / 2;
        int[] answer = new int[size];
        int count = 1;
        
        for(int i=0; i < size; i++) {
            answer[i] = count;
            count += 2;
        }
        
        return answer;
    }
}
