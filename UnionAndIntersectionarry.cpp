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

void printunion (int arr1[],int arr2[],int n, int m){
// CODE HERE
int i=0 , j = 0;
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        cout<<arr1[i++]<<" ";
    }else if(arr2[j]<arr1[i]){
        cout<<arr2[j++]<<" ";
    }else{
        cout<<arr2[j++]<<' ';
        i++;
    }
}
while(i<n){
    cout<<arr1[i++]<<" ";
}
while(j<m){
    cout<<arr2[j++]<<" ";
}


};
int main () {

    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
 
   
    printunion(arr1, arr2, n, m);
 
    return 0;
}