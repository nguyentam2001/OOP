#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Oto{
private:
      string Maoto;
      long Gia;
      int Sonam;
      int TiLe;
public:
      void nhap();
      void xuat();
};
void Oto::nhap()
{
      cout<<"Ma Oto: ";       fflush(stdin);    getline(cin,Maoto);
      cout<<"Gia: ";                            cin>>Gia;
      cout<<"So nam: ";                         cin>>Sonam;
      cout<<"Ti Le: ";                          cin>>TiLe;
}
void TieuDe()
{
      cout<<setw(15)<<"Ma Oto";
      cout<<setw(15)<<"Gia";
      cout<<setw(15)<<"So nam";
      cout<<setw(15)<<"Ti Le"<<endl;
}
void Oto::xuat()
{
      cout<<setw(15)<<Maoto;
      cout<<setw(15)<<Gia;
      cout<<setw(15)<<Sonam;
      cout<<setw(15)<<TiLe<<endl;
}

int main()
{
      Oto *ns;
      int n;
      cout<<"nhap so o to: ";       cin>>n;
      ns=new Oto[n];
      for(int i=0;i<n;i++)
      {
            cout<<"Nhap oto thu: "<<i+1<<endl;
            ns[i].nhap();
      }
      TieuDe();
      for(int i=0;i<n;i++){
            ns[i].xuat();
      }
    return 0;
}
