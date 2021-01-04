#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string s;
    string d;
    int j=0;
    map<string,string> m;
    while(j<n){
        cin>>s;
        cin>>d;
        m[s]=d;
        j++;
    }

    while(cin>>s){
        auto i=m.begin();
        if(m.find(s)!=m.end()){
            cout<<s<<"="<<m[s]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }

    }
    

    return 0;
}