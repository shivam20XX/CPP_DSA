#include<iostream>
using namespace std;

int main(){

    int arr[5]={-1,-4,-5,-6,-9};
    int max=arr[0];
    for(int i=0;i<sizeof arr/sizeof arr[0];i++)
    {
        if(arr[i]>max){
            max=arr[i];

        }
    }
    cout<<"Max element in array is: "<<max;
    return 0;
}