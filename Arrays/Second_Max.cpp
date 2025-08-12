#include<iostream>
#include<limits.h>
using namespace std;
    
int main(){

    int arr[5]={1,4,6,8,9};
    int ans=INT_MIN;
    int min=INT_MIN;


    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    } 

    for(int i=0;i<5;i++){
        if(arr[i]!=ans){
            min=max(min,arr[i]);
        }
    }

    cout<<"Second largest in array is= "<<min;


    return 0;
}