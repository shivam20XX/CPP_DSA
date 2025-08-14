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

         //* vector is also a dynamic type allocation memory
         //* vector is stored in heap memory unlike array which is stored in stack

        //* push_back time complexity - O(1)

        //* Remove value from vector

        cout<<endl;

        v.pop_back();
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

        //* 2 2 2 2 5 6 

        //** v.clear(); // this will remove all value in vector

        cout<<"\n"<<v.front();
        cout<<"\n"<<v.back();
        cout<<"\n"<<v.empty();
        cout<<"\n"<<v.at(5);


    return 0;
}