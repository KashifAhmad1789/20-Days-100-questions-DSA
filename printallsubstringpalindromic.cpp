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

bool isplaindromic (string sub){
// CODE HERE
bool flag = true;
int left =0;
int right = sub.length()-1;
while(left<right){
    char chleft = sub.at(left);
    char chright = sub.at(right);
    if(chleft!=chright){
        flag = false;
        break;
    }
    left++;
    right--;
}

return flag;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
string s = "ababab";
for(int i=0;i<s.length();i++){
    for(int j=i+1;j<s.length();j++){
        string sub = s.substr(i,j);
        bool ispalindrome = isplaindromic(sub);
        if(ispalindrome==true){
            cout<<sub<<endl;
        }
    }
}



return 0;
}