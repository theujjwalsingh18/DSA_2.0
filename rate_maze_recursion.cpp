// Problem : https://www.geeksforgeeks.org/problems/palindromic-patitioning4845/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis)
    {
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(move);
            return;
        }
        //   Downward

        if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1)
        {
            vis[i][j] = 1;
            solve(i + 1, j, a, n, ans, move + "D", vis);
            vis[i][j] = 0;
        }
        // Left
        if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1)
        {
            vis[i][j] = 1;
            solve(i, j - 1, a, n, ans, move + "L", vis);
            vis[i][j] = 0;
        }
        // Right
        if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1)
        {
            vis[i][j] = 1;
            solve(i, j + 1, a, n, ans, move + "R", vis);
            vis[i][j] = 0;
        }

        // Upward
        if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1)
        {
            vis[i][j] = 1;
            solve(i - 1, j, a, n, ans, move + "U", vis);
            vis[i][j] = 0;
        }
    }

    void solve2(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move,
                vector<vector<int>> &vis, int di[], int dj[])
    {
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(move);
            return;
        }
        string dir = "DLRU";
        for (int idx = 0; idx < 4; idx++)
        {
            int nexti = i + di[idx];
            int nextj = j + dj[idx];
            if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1)
            {
                vis[i][j] = 1;
                solve2(nexti, nextj, a, n, ans, move + dir[idx], vis, di, dj);
                vis[i][j] = 0;
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int n = maze.size();
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        // if (maze[0][0] == 1)
        //     solve(0, 0, maze, n, ans, "", vis);
        int di[] = {+1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};
        if (maze[0][0] == 1)
            solve2(0, 0, maze, n, ans, "", vis, di, dj);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C :  O(4^(M*N))         S.C : O(M*N)                      |
|                                                                                |
----------------------------------------------------------------------------------

*/