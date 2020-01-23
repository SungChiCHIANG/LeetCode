#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>

static int x = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return NULL;
}();

class Solution
{
public:
    Solution();
    bool isPalindrome(int x);
};

#endif // SOLUTION_H
