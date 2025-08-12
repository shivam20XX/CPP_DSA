#include<iostream>
using namespace std;

void printArray(int *arr,int n)
{

    cout<<"array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){

//! function to traversal of array

    int arr[5]={1,24,5,5,6};
    int size=sizeof arr/sizeof arr[0];
    printArray(arr,size);
 return 0;
   

}