#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class TRUONG;
class KHOA
{
private:
      string Makhoa;
      string Tenkhoa;
      string Truongkhoa;
      friend class TRUONGDH;
};
class BAN
{
private:
      string Maban;
      string Tenban;
      int NgayTl;
      friend class TRUONGDH;
};
class TRUONG
{
protected:
      string Matruong;
      string Tentruong;
      string Diachi;
public:
      void Nhap();
      void Xuat();
};
class TRUONGDH:public TRUONG
{
private:
      KHOA *x;
      int n;
      BAN *y;
      int m;
public:
      void Nhap();
      void Xuat();
};
void TRUONG::Nhap()
{
      cout<<"Ma truong: ";            fflush(stdin);          getline(cin,Matruong);
      cout<<"Ten truong: ";           fflush(stdin);          getline(cin,Tentruong);
      cout<<"Dia chi: ";              fflush(stdin);          getline(cin,Diachi);
}
void TRUONG::Xuat()
{
      cout<<setw(10)<<"Ma truong: "<<Matruong;
      cout<<setw(10)<<"Ten truong: "<<Tentruong;
      cout<<setw(10)<<"Dia chi: "<<Diachi;
}
void TRUONGDH::Nhap()
{
      TRUONG::Nhap();
      cout<<"Nhap so khoa: ";       cin>>n;
      x=new KHOA[n];
      for(int i=0;i<n;i++){
            cout<<"nhap khoa thu: "<<i+1<<endl;
            cout<<"Ma khoa: ";       fflush(stdin);          getline(cin,x[i].Makhoa);
            cout<<"Ten khoa: ";      fflush(stdin);          getline(cin,x[i].Tenkhoa);
            cout<<"Truong khoa: ";   fflush(stdin);          getline(cin,x[i].Truongkhoa);
      }
      y=new BAN[m];
       cout<<"Nhap so ban: ";       cin>>n;
      for(int i=0;i<m;i++)
      {
            cout<<"nhap ban thu: "<<i+1<<endl;
            cout<<"Ma Ban: ";       fflush(stdin);          getline(cin,y[i].Maban);
            cout<<"Ten Ban: ";      fflush(stdin);          getline(cin,y[i].Tenban);
            cout<<"Ngay tl: ";                              cin>>y[i].NgayTl;
      }
}
void TRUONGDH::Xuat()
{
      TRUONG::Xuat();
      for(int i=0;i<n;i++){
           cout<<setw(10)<<"Ma khoa: "<<x[i].Makhoa;
           cout<<setw(10)<<"Ten khoa: "<<x[i].Tenkhoa;
           cout<<setw(10)<<"Truong Khoa: "<<x[i].Truongkhoa<<endl;
           cout<<setw(10)<<"Ma ban: "<<y[i].Maban;
           cout<<setw(10)<<"Ten ban: "<<y[i].Tenban;
           cout<<setw(10)<<"Ngay tl: "<<y[i].NgayTl;
      }
}
int main()
{
      TRUONGDH ns;
      ns.Nhap();
      ns.Xuat();
    return 0;
}
