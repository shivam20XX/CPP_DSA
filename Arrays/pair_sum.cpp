#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,4,2,1};
    int value=5;
   
    int sum=0;
    for(int i=0;i<sizeof arr/sizeof arr[0];i++)
    {
        for(int j=i+1;j<sizeof arr/sizeof arr[0];j++)
        {
            if(arr[i]+arr[j]==value)
            {
                cout<<"Pairs found: "<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                sum++;

            }
        }
    }

    cout<<"Total pairs: "<<sum;
    return 0;
}