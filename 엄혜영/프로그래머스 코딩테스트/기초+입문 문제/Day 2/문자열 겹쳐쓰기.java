class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        String answer = "";
        
        if (my_string.length() == 1) {
            answer += overwrite_string;
        
        } else {
            // before s
            for (int i = 0; i < s; i++)
                answer += my_string.charAt(i);

            // after s
            answer += overwrite_string;
            
            if (my_string.length() != (overwrite_string.length() + s)) {
                for(int i = overwrite_string.length() + s; i < my_string.length(); i++)
                    answer += my_string.charAt(i);
            }
        }
        
        return answer;
    }
}
