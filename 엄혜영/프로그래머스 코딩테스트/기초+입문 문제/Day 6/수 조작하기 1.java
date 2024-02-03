class Solution {
    public int solution(int n, String control) {
        int answer = 0;
        char ctrl;
        
        for(int i=0; i < control.length(); i++) {
            ctrl = control.charAt(i);
            switch(ctrl) {
                case 'w':
                    n++;
                    break;
                    
                case 's':
                    n--;
                    break;
                    
                case 'd':
                    n += 10;
                    break;
                    
                case 'a':
                    n -= 10;
                    break;
            }
        }
        return n;
    }
}
