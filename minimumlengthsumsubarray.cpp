// https://leetcode.com/problems/minimum-size-subarray-sum/submissions/

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

int sumsubarray (int arr[],int n, int x){
// CODE HERE
int n = nums.size();
int i=0; int j =0;
int minlen = INT_MAX;
int sum =0;
while(i<n){
    sum + = nums[i];
    while(sum>=x){
        minlen = min(minlen, i-j+1)
        sum = nums[j];
        j++;
    }
    i++;
}

return minlen = INT_MAX ? 0 : minlen ;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}