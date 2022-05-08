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

void majorityelemnt (int arr[],int n){
// CODE HERE
int i,j;
int maxcount =0;
int index = -1;
for(i=0;i<n;i++){
    int count =0;
    for(j =0;j<n;j++){
        if(arr[i]==arr[j])
           count++;

    }
    if(count>maxcount){
        maxcount = count;
        index = i;
    }
}
if (maxcount > n / 2)
    cout << arr[index] << endl;

else
    cout << "No Majority Element" << endl;
};
int main () {

    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    majorityelemnt(arr,n);

    return 0;
}