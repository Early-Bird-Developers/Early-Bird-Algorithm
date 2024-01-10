class Solution {
    public String solution(String code) {
        String answer = "";
        int mode = 0;
        char getChar;
        
        for(int i=0; i < code.length(); i++) {
            getChar = code.charAt(i);
            if(getChar == '1'){
                if(mode == 0)
                    mode = 1;
                else
                    mode = 0;
                continue;
            } 
            if((mode == 0) && (i % 2 == 0))
                answer += getChar;
            if((mode == 1) && (i % 2 != 0))
                answer += getChar;
        }
        
        if(answer.length() == 0)
            answer = "EMPTY";
        
        return answer;
    }
}
