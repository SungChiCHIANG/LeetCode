#include "Solution.h"

using namespace std;

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
    // Brute Force Solution
    vector<int> Ans;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                Ans.push_back(i);
                Ans.push_back(j);
            }
        }
    }
    return Ans;
}
