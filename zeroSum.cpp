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

int main()
{

    int arr[] = {-3, 2, 3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0, f = false;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            s = s + arr[j];
            if (s == 0)
            {
                f = 1;
                break;
            }
            if (f == true)
                cout << "yes";
            else
                cout << "no";
        }
        

        return 0;

}
}