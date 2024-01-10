class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int multiply = 1;
        int square = 0;
        
        for(int n : num_list) {
            multiply *= n;
            square += n;
        }
        if (multiply < square*square)
            answer = 1;
        
        return answer;
    }
}
