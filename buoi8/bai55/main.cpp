#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Thucpham
{
protected:
      string ten;
      int giaca;
public:
      Thucpham(string a,int b){ten=a;giaca=b;}
};
class Tphop:public Thucpham
{
private:
      int sohop;
public:
      Tphop(int c,string a,int b):Thucpham(a,b){sohop=c;}
      void xuat();
};
class Tpkhop:public Thucpham
{
private:
      int khoiluong;
public:
      Tpkhop(int d,string a,int b):Thucpham(a,b){khoiluong=d;}
      void xuat();
};
void Tphop::xuat(){
      cout<<"======================Thuc Pham Hop========================="<<endl;
      cout<<setw(15)<<"ten: "<<ten<<endl;
      cout<<setw(15)<<"giaca: "<<giaca<<setw(15)<<"so hop: "<<sohop<<endl;
      cout<<"==========================================================="<<endl;
}
void Tpkhop::xuat(){
      cout<<"====================Thuc Pham khong Hop======================="<<endl;
       cout<<setw(15)<<"ten: "<<ten<<endl;
       cout<<setw(15)<<"giaca: "<<giaca<<setw(15)<<"khoi luong: "<<khoiluong<<endl;
       cout<<"============================================================"<<endl;
}
int main()
{
      Tphop a(200,"ca kho",300);
      a.xuat();
      Tpkhop b(200,"ca tuoi",200);
      b.xuat();
    return 0;
}
