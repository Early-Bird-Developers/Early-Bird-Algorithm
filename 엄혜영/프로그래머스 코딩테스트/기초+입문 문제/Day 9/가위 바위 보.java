class Solution {
    public String solution(String rsp) {
        String answer = "";
        char letter;
        
        for(int i=0; i < rsp.length(); i++) {
            letter = rsp.charAt(i);
            switch(letter) {
                case '0':
                    answer += "5";
                    break;
                case '2':
                    answer += "0";
                    break;
                case '5':
                    answer += "2";
                    break;
            }
        }
        
        return answer;
    }
}
