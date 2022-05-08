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

    int arr[3][4];
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    for(int j =0;j<cols;j++){
       if(j%2==0){
           for (int i = 0; i < rows; i++)
           {
               cout << arr[i][j] << endl;
           }
       } else{
           for(int i = rows-1;i>=0;i--){
               cout<<arr[j][i];
           }
       }
    }

    return 0;
}