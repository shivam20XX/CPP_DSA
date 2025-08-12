#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,4,6,7,9};
    int sum=0;

    for(int i=0;i<sizeof arr/sizeof arr[0];i++){
        sum+=arr[i];
    }
    cout<<"sum of all thea array elements is:"<<sum;
    return 0;
}