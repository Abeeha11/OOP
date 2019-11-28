
#include <iostream>
#include<string>
using namespace std;


    class Vehicle{
    private:
        string vehicle,color;
        int yearOfManuFacture,engineCapacity;

    public:
        Vehicle(string s,string t){
            vehicle=s;
            
            color=t;
            }
        
        void getpart(){
            cout<<" Vehicle:"<<vehicle<<endl<<"Color:"<<color<<endl<<"Year of Manufacture:"<<"2019"<<endl<<"Engine Capacity:"<<"1800"<<endl;
            }
        void setpart(string a){
            vehicle=a;
            }
        void displaycardetail(){
            getpart();
        }
            };
    
int main()
{
    Vehicle a("Honda","greyphite gray");
    a.displaycardetail();
    //a.getpart();
    return 0;
}
