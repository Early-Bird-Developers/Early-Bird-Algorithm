class Solution {
    public String solution(int age) {
        String strAge = Integer.toString(age);
        String answer = "";
        
        for(int i=0; i < strAge.length(); i++){
            age = strAge.charAt(i) - '0';
            answer+= (char)(age + 97);  // a=97
        }
        
        return answer;
    }
}
