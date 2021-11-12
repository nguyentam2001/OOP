#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class SINHVIEN{
private:
      string MaSV;
      string TenSV;
public:
      friend class PHIEU;

};
class CLASS{
private:
      string Cl;
      string Khoa;
public:
      friend class PHIEU;

};
class MON{
private:
      string TenM;
      int Sotrinh;
      double Diem;
public:
      friend class PHIEU;
      friend double DiemTrungBinh(MON a[],int n);
      friend double Min_diem(MON a[],int n);
};
class PHIEU{
private:
      SINHVIEN x;
      CLASS y;
      MON *z;
      int n;
public:
      void nhap();
      void xuat();
};
double DiemTrungBinh(MON a[],int n){
      double avg=0,sum=0,dem=0;
      for(int i=0;i<n;i++){
                  dem+=a[i].Sotrinh;
                  sum+=a[i].Diem*a[i].Sotrinh;
      }
      avg=sum/dem;
      return avg;
}
double Min_diem(MON a[],int n){
      double Min=-1;
      for(int i=0;i<n;i++){
          if(Min>a[i].Diem){
            Min=a[i].Diem;
          }
      }
      return Min;
}
void PHIEU::nhap(){
      cout<<"Ma Sinh Vien: ";       fflush(stdin);          getline(cin,x.MaSV);
      cout<<"Ten Sinh Vien: ";       fflush(stdin);          getline(cin,x.TenSV);
      cout<<"lop: ";                fflush(stdin);          getline(cin,y.Cl);
      cout<<"Khoa: ";               fflush(stdin);          getline(cin,y.Khoa);
      cout<<"Nhap So mon hoc: ";          cin>>n;
      z=new MON[n];
      for(int i=0;i<n;i++){
            cout<<"Nhap Ten Mon: ";       fflush(stdin);          getline(cin,z[i].TenM);
            cout<<"Nhap so trinh: ";      cin>>z[i].Sotrinh;
            cout<<"Nhap diem: ";          cin>>z[i].Diem;
      }
}
void PHIEU::xuat()
{
      cout<<setw(5)<<"Ma Sinh Vien: "<<x.MaSV;
      cout<<setw(25)<<"Ten Sinh Vien: "<<x.TenSV<<endl;
      cout<<setw(5)<<"Lop: "<<y.Cl;
      cout<<setw(25)<<"Khoa: "<<y.Khoa;
      cout<<"Bang diem: "<<endl;
      cout<<setw(5)<<"Ten Mon"<<setw(25)<<"So Trinh"<<setw(25)<<"Diem"<<endl;
      cout<<"-----------------------------------------------------------------------"<<endl;
      for(int i=0;i<n;i++){
            cout<<setw(5)<<z[i].TenM<<setw(25)<<z[i].Sotrinh<<setw(25)<<z[i].Diem<<endl;
      }
      cout<<setw(75)<<"Diem trung binh: "<<DiemTrungBinh(z,n)<<endl;
      for(int i=0;i<n;i++){
           if(z[i].Diem==Min_diem(z,n)){
                  cout<<setw(5)<<z[i].TenM<<setw(25)<<z[i].Sotrinh<<setw(25)<<z[i].Diem<<endl;
           }
      }
}
int main(){
      PHIEU x;
      x.nhap();
      x.xuat();
      return 0;
}
