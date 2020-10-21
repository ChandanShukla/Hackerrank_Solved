#include<iostream>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<sstream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
//Structure to store all the values for a record
struct profit_loss{
    string name,cost,sell_price;
    int no_purchases,no_sales;
    float total_purchase,total_sales,p_l_percent;
};
//Function to round the float value to 2 decimal
float round_float(float a){
    float val = (int)(a*100);
    return (float)val/100;
}
//Function to convert string to interger as per requirements
float cal(string a,int b){
        float temp=0,result=0;
        if(isdigit(a[0])){
            stringstream int_cost(a.substr(0)); //code to fix issue when user just put number without '$' 
            int_cost>>temp;
            result=temp*b;
        }
        else{
            stringstream int_cost(a.substr(1)); //This code ignore '$' sign
            int_cost>>temp;
            result=temp*b;            
        }
        
        return result;
}
int main(int argc, const char** argv) {
    int temp=0,n,count=1;
    double sum_purchase=0,sum_sales=0,sum_pi_i=0;
    cout<<"Enter the number of products: ";
    cin>>n;
    struct profit_loss obj[n];
    float sort_p_i[n],te=0;
    //Loop to run for n Iterations to store the input from the user
    for (int i=0;i<n;i++){
        temp=0;
        cout<<"\nEnter the name of the product: ";
        cin.ignore();
        getline(cin,obj[i].name);
        cout<<"Enter the number of "<<obj[i].name<<" purchased: ";
        cin>>obj[i].no_purchases;
        cout<<"Enter the number of "<<obj[i].name<<" sold: ";
        cin>>obj[i].no_sales;
        cout<<"Enter the cost of each "<<obj[i].name<<": ";
        cin>>obj[i].cost;
        cout<<"Enter the selling price of each "<<obj[i].name<<": ";
        cin>>obj[i].sell_price;
        obj[i].total_purchase=cal(obj[i].cost,obj[i].no_purchases);
        sum_purchase+=obj[i].total_purchase;
        obj[i].total_sales=cal(obj[i].sell_price,obj[i].no_sales);
        sum_sales+=obj[i].total_sales;
        obj[i].p_l_percent=round_float(((obj[i].total_sales-obj[i].total_purchase)/obj[i].total_purchase)*100);
        sort_p_i[i]=obj[i].p_l_percent;
    }
    cout<<"\n\tName\t|  #Purchases  |  #Sales  |  Cost  |  Selling Price  |  Total Purchase  |  Total Sales  |  P/L%  |  Profit/Loss/Break-even |";
    cout<<"\n"<<string(140,'-');
    //sorting the array to arrange the final records in screasing order
    sort(sort_p_i,sort_p_i+n,greater<float>());
    //Loop to print the output values on console
    for (int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            
            //cout<<"temp2 "<<temp2[j]<<"\t"<<"Obj "<<obj[j].p_l_percent;
            if(obj[k].p_l_percent==sort_p_i[j]){
                cout<<"\n  ";
                cout<<std::left<<setw(5)<<count;
                cout<<std::left<<setw(16)<<obj[k].name;
                cout<<std::left<<setw(13)<<obj[k].no_purchases;
                cout<<std::left<<setw(9)<<obj[k].no_sales;
                if(isdigit(obj[k].cost[0])){
                    cout<<"$"<<std::left<<setw(13)<<obj[k].cost;
                }
                else{
                    cout<<std::left<<setw(14)<<obj[k].cost;
                }
                if(isdigit(obj[k].sell_price[0])){
                    cout<<"$"<<std::left<<setw(17)<<obj[k].sell_price;
                }
                else{
                    cout<<std::left<<setw(18)<<obj[k].sell_price;
                }
                cout<<"$";
                cout<<std::left<<setw(15)<<obj[k].total_purchase;
                cout<<"$";
                cout<<std::left<<setw(12)<<obj[k].total_sales;
                cout<<obj[k].p_l_percent<<"%"<<setw(12)<<" ";
                if (obj[k].p_l_percent>0){
                    cout<<std::left<<setw(12)<<"Profit";
                }
                else if(obj[k].p_l_percent==0){
                        
                    cout<<std::left<<setw(12)<<"Break-even";
                }
                else {
                    cout<<std::left<<setw(12)<<"Loss";
                }
                obj[k].p_l_percent=INT_MIN;
                count=count+1;
                break;
            }
        }
    }
    //code to print the net values on console
    cout<<"\n"<<string(140,'-');
    cout<<"\nNet Profit/Loss"<<setw(62)<<" ";
    cout<<"$";
    cout<<std::left<<setw(15)<<sum_purchase;
    cout<<"$";
    cout<<std::left<<setw(12)<<sum_sales;
    sum_pi_i=round_float(((sum_sales-sum_purchase)/sum_purchase)*100);
    cout<<sum_pi_i<<"%"<<setw(12)<<"  ";
    if (sum_pi_i>0){
        cout<<"Profit";
    }
    else if(sum_pi_i==0){
        cout<<"Break-even";
    }
    else{
        cout<<"Loss";
    }
    getch();
    return 0;
}
