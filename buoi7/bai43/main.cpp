#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Hang;
class Date{
private:
      int D,M,Y;
      friend class Hang;
      friend void In_2017(Hang x[],int n);
      friend void Del_2017(Hang x[],int n);
};
class Hang
{
private:
      string Mahang;
      char tenhang[20];
      Date ns;
public:
      void nhap();
      void xuat();
      friend void In_2017(Hang x[],int n);
      friend void Del_2017(Hang x[],int n);
};
void Hang::nhap()
{
     cout<<"Ma hang: ";       fflush(stdin);         getline(cin,Mahang);
     cout<<"Ten hang: ";      fflush(stdin);          gets(tenhang);
     cout<<"Ngay Thang nam: ";                        cin>>ns.D>>ns.M>>ns.Y;
}
void Hang::xuat()
{
      cout<<setw(15)<<Mahang;
      cout<<setw(15)<<tenhang;
      cout<<setw(15)<<ns.D<<"/"<<ns.M<<"/"<<ns.Y<<endl;

}
void TieuDe(){
      cout<<setw(15)<<"Ma hang"
      <<setw(15)<<"Ten Hang"
      <<setw(15)<<"Ngay Thang Nam"<<endl;
}
void Nhap_N(Hang x[],int n){
      for(int i=0;i<n;i++)    x[i].nhap();
}
void Xuat_N(Hang x[],int n){
      for(int i=0;i<n;i++)    x[i].xuat();
}
void In_2017(Hang x[],int n){
      for(int i=0;i<n;i++)
            if(x[i].ns.Y==2017)     x[i].xuat();
}

int main()
{
      int n;
      cout << "nhap n hang: ";      cin>>n;
      Hang*x=new Hang[n];
      Nhap_N(x,n);
      TieuDe();
      Xuat_N(x,n);
      In_2017(x,n);

    return 0;
}
