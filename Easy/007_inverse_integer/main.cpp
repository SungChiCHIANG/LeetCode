#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int input, output;
    cin >> input;
    output = s.reverse(input);
    cout << output << '\n';
    return 0;
}
