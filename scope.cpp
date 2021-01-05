#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> d){
        maximumDifference=d[0]-d[1];
        for(int i=0;i<d.size();i++){
            int difference=0;
            for(int j=1;j<d.size();j++){
                difference=abs(d[i]-d[j]);
                if(maximumDifference<difference){
                    maximumDifference=difference;
                }
            }
        }
    }
    int computeDifference(){
        return maximumDifference;
    }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}