class Solution {
public:
    int countDigits(int num) {
        int digit, count=0, original = num;
        while(num>0) {
            digit = num%10;
            if(original%digit==0 && digit!=0) {
                count++;
            }
            num=num/10;

        }
        return count;
    }
};