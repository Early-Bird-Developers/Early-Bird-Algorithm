import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        char tmp;
        String output = "";
        
        for(int i = 0; i < a.length(); i++) {
            
            tmp = a.charAt(i);  // 입력받은 문자열을 한 글자씩 tmp에 넣는다.
            
            if((65 <= tmp) && (tmp <= 90))  // 문자가 대문자인 경우
                output += a.valueOf(tmp).toLowerCase();  // 소문자로 변환
            
            else if ((97 <= tmp) && (tmp <= 122))  // 문자가 소문자인 경우
                output += a.valueOf(tmp).toUpperCase();  // 대문자로 변환
        }
        
        System.out.println(output);
        
        sc.close();
    }
}
