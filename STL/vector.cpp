#include<iostream>
#include <vector>
using namespace std;

int main(){
        vector<int> v (4,1); //* here 4 is the size of vector and 2 is the value of v vector it also give 2 to every index
       //* 2 2 2 2
       
        v.push_back(5);
        v.push_back(6);
        v.push_back(5);

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

        //* 2 2 2 2 5 6 5

    return 0;
}