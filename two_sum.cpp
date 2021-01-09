#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,target;
    cin>>t;
    int temp;
    vector <int> inp;
    vector <int> v;
    for(int i=0;i<t;i++){
        cin>>temp;
        inp.push_back(temp);
    }
    cout<<"\nTarget: ";
    cin>>target;
    int i=0;
    while(i<t){
        if(target==inp[i]+*find(inp.begin()+i+1,inp.end(),target-inp[i])){
            v.push_back(i);
            v.push_back(find(inp.begin(),inp.end(),target-inp[i])-inp.begin());
            break;
        }
        i++;
    }
    i=0;
    cout<<"\n";
    while(i<v.size()){
        cout<<"\n"<<i<<": "<<v[i]<<" ";
        i++;
    }


}