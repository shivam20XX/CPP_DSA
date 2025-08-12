#include<iostream>
using namespace std;

//! this is more memory efficent code for reversing array

int main(){
int arr[5]={1,3,4,5,6};

    int l=0;
    int r=4;
    while(l<r){
        // int temp=arr[r];
        // arr[r]=arr[l];
        // arr[l]=temp;
        swap(arr[l],arr[r]);

        l++;
        r--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}