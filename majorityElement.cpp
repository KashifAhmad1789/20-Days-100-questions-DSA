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

int majorityelement (int arr[],int n){
// CODE HERE
int i, j , count=1;
for(i=0;i<n;i++){
    for(j =i+1;j<n;j++){
        if(arr[i]==arr[j]) count++;
    }
    cout<<count<<endl;
    if(count>n/2){
        return arr[i];
    }
}


};
int main () {

int arr[] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<majorityelement(arr,n);



return 0;
}