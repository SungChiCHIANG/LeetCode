#include "Solution.h"

int main()
{
    std::vector<int> input;

    for(int i = 0; i < 10; i++) input.push_back(i);
    Solution s;
    std::vector<int> Ans = s.twoSum(input, 15);
    std::cout << Ans[0] << ' ' << Ans[1] ;
    return 0;
}
