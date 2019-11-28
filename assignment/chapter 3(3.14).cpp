#include <iostream>
#include <string>
using namespace std;
class Accounts{
  unsigned int account_number;
    string FirstName,LastName;
    double balance;
public:
    Accounts(unsigned int a,string p,string q ,double r ){
        
        account_number=a;
        FirstName=p;
        LastName=q;
        balance=r;
    }
    void getpart(){
        cout<<"Account Number:"<<account_number<<"\nFirst Name:"<<FirstName
		<<"\nLast Name:"<<LastName<<"\nBalance:"<<balance<<endl;
        }
    void setpart(unsigned int a){
        account_number=a;
        }};
int main()
{
    Accounts list(0024,"fiza","Akhter",85000);
    list.getpart();
    
    
    return 0;
}
