#include<iostream>
#include<string>
using namespace std;

class Heartbeat{
private:
    string FirstName,LastName;
    int D,M,Y;
    int m=2019,age,hb,thb;
    
public:
    Heartbeat(string p,string q,int r,int s,int t){
        FirstName=p;
        LastName=q;
        D=r;
        M=s;
        Y=t;
        }
    void getName(){
        cout<<"Name:"<<FirstName<<LastName<<endl;
        }
    void setpart(string a){
        FirstName=a;
        }
    void memfun(){
        cout<<"Enter Age:"<<age<<"/n";
        
        age=2019-Y;
        hb=220-age;
        thb=hb-70;
    }
    void output(){
        memfun();
        //cout<<"Date of Birth:"<<age<<endl;
        cout<<"Your Heart beat:"<<hb<<endl;
        cout<<"Target Heart beat:"<<thb<<endl;
        }
    };
int main()
{
    Heartbeat z("laiba","sheikh",11,9,2000);
   // z.getpart();
    z.output();
    
    return 0;
}
