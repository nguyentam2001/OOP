#include <bits/stdc++.h>

using namespace std;
class NhanVien;
class Date{
private:
      int D,M,Y;
      friend class NhanVien;
};
class PhongBan{
private:
      int MaPb;
      string TenPb;
      string Tp;
      int SoNv;
      friend class NhanVien;
      friend void Phong_tc(NhanVien a[],int n);
};
class NhanVien{
private:
      int MaNV;
      string HoD;
      string Ten;
      Date ns;
      PhongBan pb;
public:
      void nhap();
      void xuat();
      void Nhap_N(NhanVien a[],int n);
      void Xuat_N(NhanVien a[],int n);
      friend void Phong_tc(NhanVien a[],int n);
      friend void sort_NV(NhanVien a[],int n);
};
void NhanVien::nhap(){
      cout<<" ma nhan vien: ";                        cin>>MaNV;
      cout<<" ho dem: ";            fflush(stdin);    getline(cin,HoD);
      cout<<" Ten: ";               fflush(stdin);    getline(cin,Ten);
      cout<<" ngay sinh: ";                           cin>>ns.D>>ns.M>>ns.Y;
      cout<<" Ma phong ban: ";                        cin>>pb.MaPb;
      cout<<" Ten phong ban: ";     fflush(stdin);    getline(cin,pb.TenPb);
      cout<<" Truong phong: ";      fflush(stdin);    getline(cin,pb.Tp);
      cout<<" So nhan vien: ";      fflush(stdin);    cin>>pb.SoNv;
}
void NhanVien::xuat(){
      cout<<setw(10)<<MaNV;
      cout<<setw(10)<<HoD<<" "<<Ten;
      cout<<setw(10)<<ns.D<<"/"<<ns.M<<"/"<<ns.Y;
      cout<<setw(10)<<pb.MaPb;
      cout<<setw(10)<<pb.TenPb;
      cout<<setw(10)<<pb.Tp;
      cout<<setw(10)<<pb.SoNv<<endl;

}

void Nhap_N(NhanVien a[],int n){
      for(int i=0;i<n;i++){
            cout<<"nhap nhan vien thu: "<<i+1<<endl;
            a[i].nhap();
      }
}
void Xuat_N(NhanVien a[],int n){
      for(int i=0;i<n;i++){
            a[i].xuat();
      }
}
void Phong_tc(NhanVien &a,int n){
      for(int i=0;i<n;i++){
            if(a[i].pb.TenPb=="Tai Chinh"){
                  a[i]->xuat();
            }
      }
}
void sort_NV(NhanVien a[],int n){
      for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                  if(a[i].Ten>a[j].Ten){
                        swap(a[i],a[j]);
                  }
            }
      }
      Xuat_N(a,n);
}
int main()
{
      int n;
      cout<<"nhap danh sach n: "<<endl;
      cin>>n;
      NhanVien*a=new NhanVien[n];
      Nhap_N(a,n);
      Xuat_N(a,n);
      Phong_tc(a,n);
      sort_NV(a,n);
}
