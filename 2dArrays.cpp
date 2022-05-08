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


int main () {

// int arr[] = {1,2,3,4,5};
// int n = sizeof(arr) / sizeof(arr[0]);
int arr[3][4];
int rows = sizeof(arr) / sizeof(arr[0]);
int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
cout<<rows<<endl<<cols<<endl;
arr[0][0] = 11;
arr[0][1] = 12;
arr[0][2] = 13;
arr[0][3] = 14;

arr[1][0] = 15;
arr[1][1] = 16;
arr[1][2] = 17;
arr[1][3] = 18;

arr[2][0] = 19;
arr[2][1] = 20;
arr[2][2] = 21;
arr[2][3] = 22;
for(int i =0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}


return 0;
}