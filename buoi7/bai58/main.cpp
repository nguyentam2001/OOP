#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class patient
{
protected:
      string name;
      string adress;
      int year;
public:
      void nhap();
      void xuat();

};
class benhan:public patient
{
protected:
      string pa_name;
      int money;
public:
      void nhap();
      void xuat();
      int tinh(){int x=2020-year; return x;}
      friend void display_money(benhan x[],int n);
};
void patient::nhap()
{
      cout<<"name: ";         fflush(stdin);          getline(cin,name);
      cout<<"adress: ";       fflush(stdin);          getline(cin,adress);
      cout<<"year: ";                                 cin>>year;
}
void patient::xuat()
{
      cout<<setw(15)<<name;
      cout<<setw(15)<<adress;
      cout<<setw(15)<<year;
}
void benhan::nhap()
{
      patient::nhap();
      cout<<"pa_name: ";            fflush(stdin);    getline(cin,pa_name);
      cout<<"money: ";                                cin>>money;
}
void benhan::xuat()
{
      patient::xuat();
      cout<<setw(15)<<pa_name;
      cout<<setw(15)<<money<<endl;
}
void nhap_n(benhan x[],int n)
{
      for(int i=0;i<n;i++)
            x[i].nhap();
}
void xuat_n(benhan x[],int n)
{
      for(int i=0;i<n;i++)
            x[i].xuat();
}
void sort_age(benhan x[],int n)
{

      for(int i=0;i<n-1;i++)
      {
            for(int j=i+1;j<n;j++){
                  if(x[i].tinh()<x[j].tinh())
                  swap(x[i],x[j]);

                  }
      }
}
void display(benhan x[],int n)
{
     for(int i=0;i<n;i++)
     {
           if(x[i].tinh()<=10)
            x[i].xuat();
     }
}
void display_money(benhan x[],int n)
{
      int Max=0;
      for(int i=0;i<n;i++){
            if(Max<x[i].money)
                  Max=x[i].money;
      }
      for(int i=0;i<n;i++)
      {
            if(Max==x[i].money)
                  x[i].xuat();
      }
}
int main()
{
      benhan *x;
      int n;
      cout<<"nhap n benh an: ";           cin>>n;
      x=new benhan [n];
      nhap_n(x,n);
      xuat_n(x,n);
      cout<<"hien thi sap xep: "<<endl;
      sort_age(x,n);
      cout<<"hien thi tuoi nho hon 10: "<<endl;
      display(x,n);
      cout<<"hien thi tien nhieu nhat: "<<endl;
      display_money(x,n);
    return 0;
}
