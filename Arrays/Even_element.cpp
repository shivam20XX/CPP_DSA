#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int count_even=0;
    cout<<"Enter the array element to find the total even elment in the array: ";
    for(int i=0;i<sizeof arr/sizeof arr[0];i++){
        cin>>arr[i];
        
    }

    for(int i=0;i<sizeof arr/sizeof arr[0];i++){
        if(arr[i]%2==0){
            count_even++;
        }
    }

    cout<<"Total no of even element is: "<<count_even<<endl;
    return 0;
}