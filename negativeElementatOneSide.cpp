// Move all negative element at One side
#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

void solve(int arr[], int n){
    // CODE HERE

};
int main()
{

    int arr[] = {1,4,-1,-6,7,9,-5,-21};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}