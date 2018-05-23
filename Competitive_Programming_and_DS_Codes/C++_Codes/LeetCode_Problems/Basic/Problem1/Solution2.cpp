class Solution {
public:
    int reverse(int x) {

        long long result = 0;

        int sign = 1;

        if(x<0)
        {
            sign = -1;
        }
        else
        {
            sign = 1;
        }

        x = abs(x);

        while(x>0)
        {
            if(result>INT_MAX/10)
            {
                return 0;
            }
            result = result * 10 + x %10;
            x = x/10;
        }

        return sign*result;
    }
};
