#include "solution.h"

Solution::Solution()
{

}

bool Solution::isPalindrome(int x)
{
    bool ans = true;
    int temp = x;
    unsigned digitLength = 0;
    std::vector<int> inv;

    if(x > 0)
    {
        // get the inverse and the digit length of input x
        while(temp != 0)
        {
            inv.push_back(temp % 10);
            temp = temp / 10;
            digitLength++;
        }

        // get x value again
        temp = x;

        // check if palindrome
        for(unsigned i = 1; i < digitLength + 1; i++)
        {
            if(temp % 10 != inv[digitLength - i])
            {
                ans = false;
                break;
            }
            temp = temp / 10;
        }
    }
    else if(x < 0) ans = false;

    return ans;
}
