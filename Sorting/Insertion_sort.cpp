#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int num;
    cout<<"Enter the size of array";
    cin>>num;
    cout<<"Enter the elements of array : ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    //! main logic of insertion sort
    for(int i=1;i<num;i++)
  {
    for(int j=i;j>0;j--)
    {
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }

    }
  }

cout<<"Sorted array is:";
for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}