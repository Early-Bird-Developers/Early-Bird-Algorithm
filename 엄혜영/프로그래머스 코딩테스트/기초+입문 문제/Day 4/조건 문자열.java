class Solution {
    public int solution(String ineq, String eq, int n, int m) {
        boolean result = false;
        
        if(eq.equals("!")) {
            if(ineq.equals("<"))
                result = (n < m);
            else
                result = (n > m);
        } else {
            if(ineq.equals("<")) 
                result = (n <= m);
            else
                result = (n >= m);
        }
        
        return result ? 1 : 0 ;
    }
}
