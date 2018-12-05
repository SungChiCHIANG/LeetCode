#include "Solution.h"
#include <string>
#include <utility>

int Solution::reverse(int x){
    std::string s;
    int ans = 0;
    if (x >= 0)
    {
        // transfer input x to std::string
        s = std::to_string(x);
        // get string length for loop condition
        int n = s.length();
        // use std::swap to reverse element in std::string
        for (size_t i = 0; i < n / 2; i++) std::swap(s[i], s[n - i - 1]);
        // use std::stoi to transfer std::string to int
        try
        {
            ans = std::stoi(s);
        }
        // for any exception, output 0
        catch(...)
        {
            ans = 0;
        }
    }
    else
    {
        // transfer input x to std::string
        s = std::to_string(x * -1);
        // get string length for loop condition
        int n = s.length();
        // use std::swap to reverse element in std::string
        for (size_t i = 0; i < n / 2; i++) std::swap(s[i], s[n - i - 1]);
        // use std::stoi to transfer std::string to int
        try
        {
            ans = -1 * std::stoi(s);
        }
        // for any exception, output 0
        catch(...)
        {
            ans = 0;
        }
    }
    return ans;
}
