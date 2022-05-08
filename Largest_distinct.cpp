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

void solve (int arr[],int n){
// CODE HERE
int i;
if(n<3){
    cout<<"instinct input"<<endl;
    return;
}
int first,second,third;
third = second = first = INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>first){
        third = second;
        second = first;
        first = arr[i];
    }
    else if(arr[i]>second){
        third = second;
        second = arr[i];
    }else{
        third = arr[i];
    }
}


};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}