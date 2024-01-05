class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for (int i=n*6; i >=1; i--) {
            if(i%n == 0 && i%6 == 0)
                answer = i;
        }
        
        answer /= 6;
        return answer;
    }
}
