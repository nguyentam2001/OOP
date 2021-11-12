#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Date
{
private:
      int D,M,Y;
public:
      void nhap();
      void xuat();
};
class NhanSu
{
private:
      string Hoten;
      Date ns;
      string SCM;
public:
      void input();
      void output();
      friend void Sap_XepHT(NhanSu x[],int n);
};
void Date::nhap()
{
      cout<<"ngay Thang nam: ";           cin>>D>>M>>Y;
}
void Date::xuat()
{
      cout<<setw(15)<<D<<"/"<<M<<"/"<<Y;
}
void NhanSu::input(){
      cout<<"Ho Ten: ";         fflush(stdin);          getline(cin,Hoten);
      ns.nhap();
      cout<<"SCM: ";          fflush(stdin);          getline(cin,SCM);
}
void NhanSu::output()
{
      cout<<setw(15)<<Hoten;
      ns.xuat();
      cout<<setw(15)<<SCM<<endl;
}
void Tieude(){
      cout<<setw(15)<<"Ho Ten";
      cout<<setw(15)<<"Ngay Thang Nam";
      cout<<setw(15)<<"So Chung Minh"<<endl;
}
void Nhap_Nns(NhanSu x[],int n){
      for(int i=0;i<n;i++)
      {
            cout<<"Nhan Su thu: "<<i+1<<endl;
            x[i].input();
      }
}
void Xuat_Nns(NhanSu x[],int n)
{
      for(int i=0;i<n;i++)
      {
            x[i].output();
      }

}
void Sap_XepHT(NhanSu x[],int n)
{
      for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                        if(x[i].Hoten>x[j].Hoten)
                        {
                              NhanSu tmp;
                              tmp=x[i];
                              x[i]=x[j];
                              x[j]=tmp;

                        }

            }
      }
      Xuat_Nns(x,n);

}
int main()
{
      int n;
      cout<<"Nhap So Nhan su: ";                cin>>n;
      NhanSu *x=new NhanSu[n];
      Nhap_Nns(x,n);
      Tieude();
      Xuat_Nns(x,n);
      Sap_XepHT(x,n);
      return 0;
}
