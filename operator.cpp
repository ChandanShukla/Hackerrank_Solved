#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
        
        double check;
        check=round(meal_cost+int(double(meal_cost*tip_percent)/100+double(meal_cost*tax_percent)/100))+0.5;
        if((meal_cost+int(double(meal_cost*tip_percent)/100+double(meal_cost*tax_percent)/100))<check){
            cout<<ceil(meal_cost+int(double(meal_cost*tip_percent)/100+double(meal_cost*tax_percent)/100));
        }
        else{
            cout<<floor(meal_cost+int(double(meal_cost*tip_percent)/100+double(meal_cost*tax_percent)/100));
        }
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
