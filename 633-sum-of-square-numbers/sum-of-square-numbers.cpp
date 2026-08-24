class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a=0;a*a<=c;a++){
            long long b = sqrt(c - a*a);
            if(b*b == c - a*a) return true;
        }
        return false;
    }
};