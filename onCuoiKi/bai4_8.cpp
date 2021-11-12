#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Date{
private:
      int d,m,y;
public:
      friend class NhanVien;
};
class PhongBan{
private:
      int maPB;
      char tenPb[30];
      char truongPhong[10];
      int soNv;
public:
      friend class NhanVien;

};
class NhanVien{
private:
      int maNv;
      char ten[10];
      Date ns;
      PhongBan pb;
public:
      void nhap();
      void xuat();
      friend void SapXep(NhanVien a[],int n);
      friend void xoaNV(NhanVien a[],int n);

};
void NhanVien::nhap(){
      cout<<"nhap ma nhan vien: ";                          cin>>maNv;
      cout<<"nhap Ten nv: ";              fflush(stdin);    gets(ten);
      cout<<"nhap ngay thang nam: ";                        cin>>ns.d>>ns.m>>ns.y;
      cout<<"nhap phong ban: ";                             cin>>pb.maPB;
      cout<<"nhap ten phong: ";            fflush(stdin);   gets(pb.tenPb);
      cout<<"nhap truong phong: ";         fflush(stdin);   gets(pb.truongPhong);
      cout<<"nhap so nhan vien: ";                          cin>>pb.soNv;
}
void TieuDe(){
      cout<<"Ma NV"<<setw(10)<<"Ten"<<setw(10)<<"ngay/thang/nam"<<setw(10)<<"Ma pb"<<setw(10)<<"tenPhong"<<setw(10)<<"truong"<<setw(10)<<"so nv"<<endl;
}
void NhanVien::xuat(){
      cout<<maNv<<setw(10)<<ten<<setw(10)<<ns.d<<"/"<<ns.m<<"/"<<ns.y<<setw(10)
      <<pb.maPB<<setw(10)<<pb.tenPb<<setw(10)<<pb.truongPhong<<setw(10)<<pb.soNv<<endl;
}
void Nhap_N(NhanVien a[],int n){
      for(int i=0;i<n;i++){
            cout<<"Nhap nhan vien thu: "<<i+1<<endl;
            a[i].nhap();
      }
}
void Xuat_N(NhanVien a[],int n){
      TieuDe();
      for(int i=0;i<n;i++){
            cout<<"Nhan vien thu: "<<i+1<<endl;
            a[i].xuat();
      }
}
void SapXep(NhanVien a[],int n){
      for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                  if(strcmp(a[i].ten,a[j].ten)>0){
                        NhanVien tmp;
                        tmp=a[i];
                        a[i]=a[j];
                        a[j]=tmp;
                  }
            }
      }
      Xuat_N(a,n);
}
void ThemNV(NhanVien a[],int &n){
      NhanVien x; int k;
      x.nhap();
      cout<<"Nhap vi tri can chen: ";     cin>>k;
      n++;
      int i;
      for(int i=n-1;i>=k-1;i--){
            a[i]=a[i-1];
      }
      a[k-1]=x;
      Xuat_N(a,n);

}
void xoaNV(NhanVien a[],int n){
      for(int i=0;i<n;i++){
           if(a[i].maNv==123){
            for(int j=i;j<n;j++){
                  a[j]=a[j+1];
            }
            n--;
           }
      }
      Xuat_N(a,n);
}
int main(){
      NhanVien *a;
      int n;
      cout<<"Nhap so nhan vien: ";        cin>>n;
      a=new NhanVien[n];
      Nhap_N(a,n);
      Xuat_N(a,n);
      SapXep(a,n);
      ThemNV(a,n);
      xoaNV(a,n);
}
