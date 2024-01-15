class Solution {
    public String solution(String my_string, String letter) {
        String answer = "";
        char let = letter.charAt(0);
        
        for(int i=0; i < my_string.length(); i++) {
            
            if(let == my_string.charAt(i))
                continue;
            answer += my_string.charAt(i);
        }
      
        return answer;
    }
}
