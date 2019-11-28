#include<iostream>
#include<string>
using namespace std;

class invoice{
  
public:
    string part,description_part;
    int quantity,price;
    double VAT,Discount;
    
public:

    
    invoice(string l,string m,int n,int o,double p,double q){
        
        part=l;
        description_part=m;
        quantity=n;
        price=o;
        VAT=p;
        Discount=q;
        
        cout<<"Part no\t"<<"Parts Description\t"<<"Quantity of item\t"<<"Price\t"<<"VAT\t"<<"Discount\t"<<endl;
    }
    public:
    void getpart ()
    {
        cout<<"\t"<<part<<l<< "\t\t" <<description_part<<m<< "\t\t" <<quantity<<n<<"\t\t"<< price<<o<<"\t\t"<<VAT<<p<<"\t\t"<<Discount<<q<<"\t\t"<<endl;
    }
    void setpart(string a){
        
        part = a;
    }
    };

int main()
{
  
    invoice a("dalda","cooking oil",100,375,0,0);

    //a.getparts();
    return 0;
}
