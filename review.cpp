#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,j=0;
    cin>>t;
    cin.ignore();
    while(j<t){
    string s;
    getline(cin,s);
    cout<<"\n"<<s<<"\n";
    int i=0;
    while(i<s.length()){
        cout<<s[i];
        i=i+2;
    }
    cout<<" ";
    i=1;
    while(i<s.length()){
        cout<<s[i];
        i=i+2;
    }
    cout<<"\n";
    j++;
    }
    

    return 0;
}
