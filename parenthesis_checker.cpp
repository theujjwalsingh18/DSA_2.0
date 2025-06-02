// Problem : https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int pop(stack<char> &stack)
    {
        const int c = stack.top();
        stack.pop();
        return c;
    }

public:
    bool isBalanced(string &s)
    {
        // code here
        stack<char> stack;

        for (const char c : s)
            if (c == '(')
                stack.push(')');
            else if (c == '{')
                stack.push('}');
            else if (c == '[')
                stack.push(']');
            else if (stack.empty() || pop(stack) != c)
                return false;

        return stack.empty();
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                 T.C : O(N)                 S.C : O(N)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/