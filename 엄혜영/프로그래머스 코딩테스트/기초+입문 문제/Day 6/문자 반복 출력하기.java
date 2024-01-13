class Solution {
    public String solution(String my_string, int n) {
        String answer = "";
        char str;
        
        for(int i=0; i < my_string.length(); i++){
            str = my_string.charAt(i);
            for(int j=0; j < n; j++)
                answer += str;
        }
        
        return answer;
    }
}
