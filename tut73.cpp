#include<iostream>
#include<map>
#include<string>
using namespace std;

// cppreference.com

int main(){
    map<string , int> marksMap;
    // :: -> scope resolution operator
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert( { {"Rohit", 89}, {"Akshat", 46} } );

    map<string,int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<marksMap.size()<<endl;
    cout<<marksMap.max_size()<<endl;
    cout<<marksMap.empty()<<endl;
    return 0;
}