class Solution {
    public int solution(int a, int d, boolean[] included) {
        int answer = 0;
        int number = a;
        
        for(boolean n : included) {
            if(n)
                answer += number;
            number += d;
        }
        
        return answer;
    }
}
