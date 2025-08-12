#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,5,6,7,8};
    int index=-1;
    int element=5;

    for(int i=0;i<5;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
    cout<<"Number is Present at index: ["<<index<<"]";
    return 0;
}