// 01 / 04 / 26

#include<iostream>
#include<map>
using namespace std ;

int main(){
    map<int, string> students = {{101,"Aboli"},{102,"Aman"},{103,"Tejas"}};
    students[105] = "Shruti";
    students[106] = "Sanika";
    students[107] = "Pranav";

    map<int, string>::iterator si;
    for(si = students.begin(); si != students.end(); si++){
        cout<<si->first<<" - "<<si->second<<endl;
    }

    cout<<"size of map is "<<students.size()<<endl;

    students.find(102);

    students.insert(make_pair(104,"Deep"));
    for(si = students.begin(); si != students.end(); si++){
        cout<<si->first<<" - "<<si->second<<endl;
    }

    students.erase(104);
    for(si = students.begin(); si != students.end(); si++){
        cout<<si->first<<" - "<<si->second<<endl;
    }

    return 0;
}