#include<iostream>
using namespace std;
class Bank{
  
private:
    int a,b,c;
public:
    
    void Input_Amount(){
    cout<<"Enter the Deposite Amount:";
    cin>>a;
    }
    void Output_Amount(){
        cout<<"Enter the Withdraw Account:";
        cin>>b;
    }
   void condition(){
    if(b>a)
    {
        cout<<"====>Error";
        cout<<"Withdrawal amount is greater than Account Balance$"<<endl<<endl;
        cout<<"Your Remaining Amount is:"<<a<<endl<<endl<<endl;
    }
    else
        c=a-b;
        cout<<"\nYour Remaining Amount is "<<c<<endl<<endl;
        }
};
int main()
{
     cout<<"Welcome to our Bank!"<<endl;
    Bank a;
    a.Input_Amount();
    a.Output_Amount();
    a.condition();
    
    return 0;
}
