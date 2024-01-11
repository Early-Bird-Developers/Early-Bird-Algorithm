class Solution {
    public int solution(int price) {
        double discount = 0;
        
        if(price >= 500000)
            discount = price * 0.8;
        else if (price >= 300000)
            discount = price * 0.9;
        else if (price >= 100000)
            discount = Math.floor(price * 0.95); 
        
        return (price < 100000)?price:(int)discount;
    }
}
