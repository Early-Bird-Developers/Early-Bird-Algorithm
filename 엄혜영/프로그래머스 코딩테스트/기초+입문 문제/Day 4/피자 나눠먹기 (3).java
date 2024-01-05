class Solution {
    public int solution(int slice, int n) {
        int answer = 0;
        
        if(n % slice == 0)
            return n / slice;
        else {
            answer = (n / slice == 0) ? 1 : (n / slice) + 1;
        }
        
        return answer;
    }
}
