#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class DoanhN
{
private:
      string TenDN;
      string DiaC;
      int Sonv;
      int doanhThu;
public:
      void Nhap();
      void Xuat();

};
void DoanhN::Nhap()
{
      cout<<"Ten doanh nghiep: ";         fflush(stdin);          getline(cin,TenDN);
      cout<<"Dia chi: ";                  fflush(stdin);          getline(cin,DiaC);
      cout<<"so nhan vien: ";                                     cin>>Sonv;
      cout<<"Doanh thu: ";                                        cin>>doanhThu;
}
void tieude(){
      cout<<setw(15)<<"Ten doanh nghiep";
      cout<<setw(15)<<"Dia chi";
      cout<<setw(15)<<"So nhan vien";
      cout<<setw(15)<<"Doanh thu"<<endl;
}
void DoanhN::Xuat()
{
      cout<<setw(15)<<TenDN;
      cout<<setw(15)<<DiaC;
      cout<<setw(15)<<Sonv;
      cout<<setw(15)<<doanhThu<<endl;
}
int main()
{
      DoanhN *ns;
      int n;
      cout<<"nhap so doanh nghiep: ";           cin>>n;
      ns=new DoanhN[n];
      for(int i=0;i<n;i++){
            cout<<"nhap doanh nghiep thu: "<<i+1<<endl;
            ns[i].Nhap();
      }
      tieude();
      for(int i=0;i<n;i++){
            ns[i].Xuat();
      }
    return 0;
}
