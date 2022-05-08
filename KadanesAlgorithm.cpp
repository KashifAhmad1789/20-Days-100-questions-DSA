#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

int solve (int arr[],int n){
// CODE HERE
int cs = 0;
int maxsm = 0;
for (int i = 0; i < n - 1; i++)
{
    cs = cs + arr[i];
    if (cs < 0)
    {
        cs = 0;
    }
    maxsm = max(cs, maxsm);
}
};
int main () {

    int arr[] = {-3, -4, 5, -1, 2, -4, 6, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solve(arr, n);

    return 0;
}