// 01 / 04 / 26

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> numbers = {11,12,13,11,14,15};
    set<int>::iterator i;

    for(i = numbers.begin(); i != numbers.end(); i++){
        cout<<*i<<endl;
    }

    numbers.erase(12);

    for(i = numbers.begin(); i != numbers.end(); i++){
        cout<<*i<<endl;
    }

    numbers.insert(77);
    for(i = numbers.begin(); i != numbers.end(); i++){
        cout<<*i<<endl;
    }

    numbers.find(13);
    return 0;
}