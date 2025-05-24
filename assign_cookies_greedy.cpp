#include <bits/stdc++.h>
using namespace std;

int assignCookies(vector<int>&greed, vector<int>&cookies){
    int n = greed.size();
    int m= cookies.size();

    int l=0, r = 0;

    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());

    while (l < m && r < n){
        if (greed[r] <= cookies[l]){
            r += 1;
        }
        l++;
    }
    return r;
}

int main(){
    int children[5] = { 1, 5, 3, 3, 4 };
    int cookies[6] = {4, 2, 1, 2, 1, 3};

    vector<int> child(children, children + 5);
    vector<int> cookie(cookies, cookies + 6);

    int maxChild = assignCookies(child, cookie);

    cout << "Maximum number of children that can be satisfied: " << maxChild << endl;

    return 0;

}