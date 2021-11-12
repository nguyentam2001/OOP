#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Person{
protected:
      string Hoten;
      string Ngaysinh;
      string que;
};
class Kysu:public Person
{
private:
      string nganh;
      int namtl;
public:
      void Nhap();
      void Xuat();
      friend void search_ks(Kysu x[],int n);
};
void Kysu::Nhap()
{
      cout<<"Ho ten: ";       fflush(stdin);    getline(cin,Hoten);
      cout<<"Ngay sinh: ";    fflush(stdin);    getline(cin,Ngaysinh);
      cout<<"que: ";          fflush(stdin);    getline(cin,que);
      cout<<"Nganh: ";        fflush(stdin);    getline(cin,nganh);
      cout<<"namtl: ";                          cin>>namtl;
}
void Kysu::Xuat(){
      cout<<setw(15)<<Hoten;
      cout<<setw(15)<<Ngaysinh;
      cout<<setw(15)<<que;
      cout<<setw(15)<<nganh;
      cout<<setw(15)<<namtl<<endl;
}
void Tieu_de(){
      cout<<setw(15)<<"Hoten";
      cout<<setw(15)<<"Ngaysinh";
      cout<<setw(15)<<"que";
      cout<<setw(15)<<"nganh";
      cout<<setw(15)<<"namtl"<<endl;
}
void Nhap_N(Kysu x[],int n)
{
      for(int i=0;i<n;i++){x[i].Nhap();}
}
void Xuat_N(Kysu x[],int n)
{
      for(int i=0;i<n;i++){x[i].Xuat();}
}
void search_ks(Kysu x[],int n)
{
      int Max=0;
      for(int i=0;i<n;i++)
      {
            if(x[i].namtl>Max) Max=x[i].namtl;
      }
      for(int i=0;i<n;i++)
      {
            if(x[i].namtl==Max) x[i].Xuat();
      }
}
int main()
{
    Kysu *x;
    int n; cout<<"nhap n ki su: ";        cin>>n;
    x=new Kysu[n];
    Nhap_N(x,n);
    Tieu_de();
    Xuat_N(x,n);
    search_ks(x,n);
    return 0;
}
