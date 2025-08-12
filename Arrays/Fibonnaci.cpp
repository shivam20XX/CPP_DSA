#include<iostream>
using namespace std;


int main(){
    int arr[100];
    int num;
    cout<<"Enter the number to find in fibonnaci :";
    cin>>num;
    arr[0]=0;
    arr[1]=1;


    for(int i=2;i<=num-1;i++){
        //! first and second element of fibonnaci is same
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[num-1]<<" ";

    return 0;
}