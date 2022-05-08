#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    int lft =0;
    int rgt = n-1;
    int fi =-1;
    while(lft<=rgt){
        int mid = (lft +rgt)/2;
        if(data>arr[mid]) lft = mid+1;
        else if(data<arr[mid]) rgt = mid -1;
        else{
            fi = mid;
            rgt = mid -1;
        }
    }
    
    cout<<fi<<endl;

     lft =0;
     rgt = n-1;
    int li =-1;
    while(lft<=rgt){
        int mid = (lft +rgt)/2;
        if(data>arr[mid]) lft = mid+1;
        else if(data<arr[mid]) rgt = mid -1;
        else{
            li = mid;
            lft = mid +1;
        }
    }
    
    cout<<li<<endl;
}