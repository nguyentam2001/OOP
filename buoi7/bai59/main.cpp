#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class HDSP;
class CSSP{
protected:
      string tenSP;
      int namSX;
      int giathanh;
public:
      void nhap();
      void xuat();

};
class HDSP:public CSSP{
private:
      int sol;
      int giaban;
public:
      void nhap();
      void xuat();
      int tinhtien(){
            return sol*giaban;
      }
      int lai(){
            return (giaban-giathanh)*sol;
      }
      friend void Xoa_hd(HDSP a[],int n);
};
void CSSP::nhap(){
      cout<<"Ten sp: ";       fflush(stdin);    getline(cin,tenSP);
      cout<<"nam SX: ";                         cin>>namSX;
      cout<<"Gia thanh: ";                      cin>>giathanh;
}
void CSSP::xuat(){
      cout<<setw(15)<<tenSP;
      cout<<setw(15)<<namSX;
      cout<<setw(15)<<giathanh;
}
void HDSP::nhap(){
      CSSP::nhap();
      cout<<"so luong: ";                 cin>>sol;
      cout<<"gia ban: ";                  cin>>giaban;
}
void HDSP::xuat(){
      CSSP::xuat();
      cout<<setw(15)<<sol;
      cout<<setw(15)<<giaban<<endl;
}
void Nhap_n(HDSP a[],int n){
      for(int i=0;i<n;i++){
            a[i].nhap();
      }
}
void Xuat_n(HDSP a[],int n){
      for(int i=0;i<n;i++){
            a[i].xuat();
      }

}
void Sort_tien(HDSP a[],int n)
{
      for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                        if(a[i].lai()<a[j].lai()){
                              HDSP temp;
                              temp=a[i];
                              a[i]=a[j];
                              a[j]=temp;
                        }
            }
      }
      Xuat_n(a,n);
}
void Sum_tien(HDSP a[],int n){
      int sum=0;
      for(int i=0;i<n;i++){
            sum+=a[i].tinhtien();
      }
      cout<<"tong tien: "<<sum<<endl;
}
void Thongtin(HDSP a[],int n){
      int Max=0;
      for(int i=0;i<n;i++){
            if(Max<(0.1*a[i].tinhtien()))
                  Max=(0.1*a[i].tinhtien());
      }
      for(int i=0;i<n;i++){
            if(Max==(0.1*a[i].tinhtien()))
            {
                  a[i].xuat();
            }
      }
}
void Xoa_hd(HDSP a[],int n){
     int k;
     cout<<"nhap vi tri can xoa: ";             cin>>k;
     int i;
     for(i=k-1;i<n;i++){
            a[i]=a[i+1];
     }
     n--;
}
int main()
{
     int n;
     cout<<"nhap n hoa don: "<<endl;            cin>>n;
    HDSP *a=new HDSP[n];
    Nhap_n(a,n);
    cout<<"Xuat hoa don: "<<endl;
    Xuat_n(a,n);
    cout<<"Sap xep tien: "<<endl;
    Sort_tien(a,n);
    cout<<"Tong tien: "<<endl;
    Sum_tien(a,n);
    cout<<"Max hoa don: "<<endl;
    Thongtin(a,n);
    cout<<"xoa thong tin: "<<endl;
      Xoa_hd(a,n);
      Xuat_n(a,n);
    return 0;
}
