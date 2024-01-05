class Solution {
    public int solution(int a, int b) {
        int multiply = 2 * a * b;
        
        return Math.max(Integer.parseInt(""+a+b), multiply);
    }
}
