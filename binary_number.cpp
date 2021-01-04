#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp=0,max=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0){
        if(n%2==1){
            temp++;
        }
        else if(n%2==0){
            temp=0;
        }
        n=n/2;
        if(max<temp){
            max=temp;
        }

    }
    cout<<max;
    return 0;
}
