class Solution {
public:
    int subtractProductAndSum(int num) {
        int sum=0; int mul=1;
        while(num>0) {
            sum+=num%10;
            mul= mul * (num%10);
            num=num/10;
            
        }
        return (mul-sum);
    }
};