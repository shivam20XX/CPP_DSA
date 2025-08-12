#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,4,5,6,7};
    int arr2[5];
    int j=0;

    for(int i=4;i>=0;i--){
         arr2[j]=arr[i];
         j++; 

    }
    cout<<"Original array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"New reverse array: ";
    for(int i=0;i<sizeof arr/sizeof arr[0];i++){
        cout<<arr2[i]<< " ";
    }


    return 0;
}