#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"\n\n-------------------------------- Simple Calculator --------------------------------"<<endl;
    float num1,num2;
    cout<<"\n\nEnter two numbers : ";
    cin>>num1>>num2;
    
    while(true){
        int a;
        string ans;
        cout<<"\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nEnter operation to be performed : ";
        cin>>a;
        switch(a){
            case 1:
                cout<<"\nSum of "<<num1<<" and "<<num2<<" : "<<endl;
                cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"\nDifference between "<<num1<<" and "<<num2<<" : "<<endl;
                cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"\nProduct of "<<num1<<" and "<<num2<<" : "<<endl;
                cout<<num1<<" x "<<num2<<" = "<<num1*num2<<endl;
                break;
            case 4:
                cout<<"\nDivision of "<<num1<<" and "<<num2<<" : "<<endl;
                cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
                break;
            default:
                cout<<"\n**Invalid Input**\nEnter a valid input : ";
                cin>>a;
        }
        cout<<"\nDo you want to perform another operation ?(yes/no) "<<endl;
        cin>>ans;
        if(ans=="no"||ans=="NO"||ans=="No"){
            cout<<"\n\n-----------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\tThank YOU !!\n\n"<<endl;        
            return false;
        }
       
  
    }
    return 0;
}