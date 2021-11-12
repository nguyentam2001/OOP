#include <bits/stdc++.h>

using namespace std;
class Person;
class Date
{
protected:
      int D,M,Y;
};
class Person
{
protected:
      string Hoten;
      string Quequan;
};
class Kisu:public Person,public Date
{
      string Nganh;
      int Namtl;
public:
      void nhap();
      void xuat();
};
void Kisu::nhap(){
      cout<<"nhap ho ten ";          fflush(stdin);      getline(cin,Hoten);
      cout<<"ngay thanh lap ";                           cin>>D>>M>>Y;
      cout<<"que quan ";             fflush(stdin);      getline(cin,Quequan);
      cout<<"Nganh ";                fflush(stdin);      getline(cin,Nganh);
      cout<<"Namtl ";                                    cin>>Namtl;
}
void Kisu::xuat(){
      cout<<setw(10)<<Hoten;
      cout<<setw(10)<<D<<"/"<<M<<"/"<<Y;
      cout<<setw(10)<<Quequan;
      cout<<setw(10)<<Nganh;
      cout<<setw(10)<<Namtl<<endl;
}
int main()
{
      Kisu s1;
      s1.nhap();
      s1.xuat();
    cout << "Hello world!" << endl;
    return 0;
}
