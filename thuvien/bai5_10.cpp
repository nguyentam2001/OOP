#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class CADRE{
protected:
      string Ma;
      string Madv;
      string Ns;
      float Hsl;
      float phuc;
      float baohiem;
};
class NEACTURE:public CADRE{
public:
      float Phucap(){
            return 0.25*160*Hsl;
      }
      float Phucapdh()
      {
            return 0.1*160*Hsl;
      }
      void nhap();
      void xuat();
};
void NEACTURE::nhap(){
      cout<<"Ma: ";           fflush(stdin);          getline(cin,Ma);
      cout<<"Ma dv: ";        fflush(stdin);          getline(cin,Madv);
      cout<<"Ns: ";           fflush(stdin);          getline(cin,Ns);
      cout<<"Hsl: ";                                  cin>>Hsl;
      cout<<"Phuc: ";                                 cin>>phuc;
      cout<<"Bao hiem: ";                             cin>>baohiem;
}
void NEACTURE::xuat()
{
      cout<<Ma ;
      cout<<Madv;
      cout<<Ns;
      cout<<Hsl;
      cout<<phuc;
      cout<<baohiem;
      Phucap();
      cout<<endl;
      Phucapdh();
}
void nhap_N(NEACTURE x[],int n)
{
      for(int i=0;i<n;i++){
            x[i].nhap();
      }
}
void xuat_N(NEACTURE x[],int n)
{
      for(int i=0;i<n;i++){
            x[i].xuat();
      }
}
int main(){
      int n;
      cout<<"Nhap n can bo: ";            cin>>n;
      NEACTURE *x=new NEACTURE[n];
      nhap_N(x,n);
      xuat_N(x,n);
}
