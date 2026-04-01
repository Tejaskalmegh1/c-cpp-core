// 31 / 03 / 26

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1;
    v1 = {1,2,3,4,5};

    vector<int> v2 = {12,13,14,15,16};
    int sizeOfVector = v1.size();
    cout<<sizeOfVector<<endl;

    cout<<"values are : ";
    for(int i : v1){
        cout<<"i is "<<i<<endl;
    }
 
    for(int z = 0; z < v2.size(); z++){
        cout<<v2[z]<<endl;
    }

    v1.insert(v1.begin() + 2,34);
    v1.push_back(45);

    sizeOfVector = v1.size();
    cout<<sizeOfVector<<endl;

    cout<<"values are : ";
    for(int i : v1){
        cout<<"i is "<<i<<endl;
    }
    
    v1.erase(find(v1.begin(), v1.end(),1));
    
    sizeOfVector = v1.size();
    cout<<sizeOfVector<<endl;

    cout<<"values are : ";
    for(int i : v1){
        cout<<"i is "<<i<<endl;
    }
 
    return 0;
}