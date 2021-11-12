#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Electronic
{
protected:
      int p;
      int e;
public:
      Electronic(int a,int b)   {p=a;e=b;}
};
class Maygiat:public Electronic
{
private:
      int dungtich;
      string loai;
public:
      Maygiat(int d,string l,int a,int b):Electronic(a,b){dungtich=d;loai=l;}
      void xuat();
};
class Tulanh:public Electronic
{
private:
      int dungtich2;
      int songan;
public:
      Tulanh(int d,int n,int a,int b):Electronic(a,b){dungtich2=d;songan=n;}
      void xuat();
};
void Maygiat::xuat(){
      cout<<"===========================Thong tin may giat==================="<<endl;
      cout<<setw(15)<<"Cong xuat: "<<p;
      cout<<setw(15)<<"Dien ap: "<<e<<endl;
      cout<<setw(15)<<"dung tich: "<<dungtich;
      cout<<setw(15)<<"loai: "<<loai<<endl;
      cout<<"================================================================"<<endl;
}
void Tulanh::xuat()
{
      cout<<"===========================Thong tin tu lanh==================="<<endl;
      cout<<setw(15)<<"Cong xuat: "<<p;
      cout<<setw(15)<<"Dien ap: "<<e<<endl;
      cout<<setw(15)<<"dungtich2: "<<dungtich2;
      cout<<setw(15)<<"songan: "<<songan<<endl;
      cout<<"================================================================"<<endl;
}
int main()
{

    Maygiat a(200,"tosiba",400,50);
    Tulanh b(200,300,400,500);
    a.xuat();
    b.xuat();
    return 0;
}
