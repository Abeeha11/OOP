#include <iostream>
#include<string>
using namespace std;

class healthprofile{
private:
    string FN,LN,Gen;
    int D,M,Y;
    float height,weight;
    int yy=2019,age,hr,thr,we,he,wee;
public:
    healthprofile(string p,string q,string r,int s,int t,int u,float v,float w){
        FN=p;
        LN=q;
        Gen=r;
        D=s;
        M=t;
        Y=u;
        height=v;
        weight=w;
        }
    void getName(){
        cout<<"Name:"<<FN<<LN;
        }
    void setName(string a){
        a=FN;
        }
    void memfunc(){
            age=2019-Y;
            hr=220-age;
            thr=hr-70;
            he=6.2*12;
            we=(weight)*(1000/450);
        }
    void output(){
        cout<<"==> Health Records\n";
        memfunc();
        cout<<"Name"<<FN<<LN<<endl;
        cout<<"Date of Birth:"<<age<<endl;
        cout<<"Your Heart rate:"<<hr<<endl;
        cout<<"Target Heart rate:"<<thr<<endl;
        cout<<"Your Heigth in Foot:6.2"<<"Height in Inches:"<<he<<"inches"<<endl;
        cout<<"Your Weight in KG:85  "<<"Weight in LB:"<<we<<"LB"<<endl;
        }
};
int main()
{
    healthprofile a("aqsa","irfan","female",14,8,2000,4.8,80);
    a.output();
    return 0;
}
