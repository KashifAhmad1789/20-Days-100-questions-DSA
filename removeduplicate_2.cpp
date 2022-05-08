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

int removeduplicate(int nums[], int n)
{

    int i = 0, j = 1;
    for (j = 1; j < n; j++)
    {
        if (nums[i] != nums[j])
            i++;

        nums[i] = nums[j];
    }
    return i + 1;
}
int main()
{

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // removeDuplicates() returns new size of
    // array.
    n = removeduplicate(arr, n);

    // Print updated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}