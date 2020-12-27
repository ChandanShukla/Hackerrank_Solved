#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ln=0,temp,i=0,suml=0,sumu=0;
    temp=n;
    while(n){
    n=n/10;
    ln++;
    }
    n=temp;
    cout<<"\n"<<ln;
    while(i<ln/2){
        //cout<<"\nn%10:"<<int(n%10);
    suml=suml+n%10;
    n=n/10;
    i++;
    }
i=0;
while(i<ln/2){
    sumu=sumu+n%10;
    n=n/10;
    i++;
    }
    //cout<<"\nSuml: "<<suml<<"\nSumu: "<<sumu;   
if(suml==sumu){
    cout<< "\ntrue";
}
else{
    cout<< "\nfalse";
}

}