#include<iostream>
using namespace std;

int main(){

    int arr[1000]={1,2,3,4,5,7,8};
    int start=arr[0];
    int end=arr[6];
    int key=4;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            cout<<"element found at index = "<<mid<<endl;
            break;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }
    cout<<"\nElement not found in the array\n"<<endl;
    return 0;
}