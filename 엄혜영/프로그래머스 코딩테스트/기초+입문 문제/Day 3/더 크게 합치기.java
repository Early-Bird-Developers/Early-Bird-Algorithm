class Solution {
    public int solution(int a, int b) {
        String calcAB = "" + a + b;
        String calcBA = "" + b + a;
        int ab = Integer.parseInt(calcAB);
        int ba = Integer.parseInt(calcBA);
        
        if(ab > ba || ab == ba)
            return ab;
        
        return ba;
    }
}
