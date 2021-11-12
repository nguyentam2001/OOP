#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class ChiTiet{
private:
      char MaPhieu[20];
      char NgayLap[20];
      int chitiet;
public:
      friend class PHIEU;
      friend void PrintSach(PHIEU a[],int m);
};


class Hang{
private:
      char TenSach[10];
      char TacGia[10];
      char TenNXB[10];
      int soluong;
public:
      friend class PHIEU;
      friend int Max_SL(PHIEU p);
      friend void PrintSach(PHIEU a[],int m);
};


class PHIEU{
private:
      ChiTiet x;
      Hang *y;
      int n;
public:
      void nhap();
      void xuat();
      friend int Max_SL(PHIEU p);
      friend void PrintSach(PHIEU a[],int m);
};

void PHIEU::nhap(){
      cout<<setw(5)<<"nhap ma phieu: ";            fflush(stdin);    gets(x.MaPhieu);
      cout<<setw(5)<<"nhap ngay lap: ";            fflush(stdin);    gets(x.NgayLap);
      cout<<setw(5)<<"chi tiet: ";                    cin>>x.chitiet;
      cout<<"nhap n sach: ";                          cin>>n;
      y=new Hang[n];
      for(int i=0;i<n;i++) {
      cout<<setw(5)<<"Ten sach: ";                    fflush(stdin);    gets(y[i].TenSach);
      cout<<setw(5)<<"Tac gia: ";                     fflush(stdin);    gets(y[i].TacGia);
      cout<<setw(5)<<"Ten NXB: ";                     fflush(stdin);    gets(y[i].TenNXB);
      cout<<setw(5)<<"So luong: ";                    cin>>y[i].soluong;
      }
}
void PHIEU::xuat(){
      cout<<"-----------------------------------------------------"<<endl;
     cout<<"Ma phieu: "<<x.MaPhieu<<setw(20)<<"Ngay lap: "<<x.NgayLap<<endl;
     cout<<"chi Tiet: "<<x.chitiet<<endl;
     cout<<"TenSach"<<setw(15)<<"TacGia"<<setw(15)<<"TenNXB"<<setw(15)<<"soluong"<<endl;
     for(int i=0;i<n;i++){
      cout<<y[i].TenSach<<setw(15)<<y[i].TacGia<<setw(15)<<y[i].TenNXB<<setw(15)<<y[i].soluong<<endl;
     }
     cout<<"-----------------------------------------------------"<<endl;
}
void Nhap_N(PHIEU a[],int m){
      for(int i=0;i<m;i++){
            cout<<"nhap phieu thu: "<<i+1<<endl;
            cout<<setw(5); a[i].nhap();
      }
}
void Xuat_N(PHIEU a[],int m){
      for(int i=0;i<m;i++){
            cout<<"xuat phieu thu: "<<i+1<<endl;
            cout<<setw(5); a[i].xuat();
      }
}
int Max_SL(PHIEU p){
      int Max=0;
      for(int i=0;i<p.n;i++){
            if(Max<p.y[i].soluong)
                  Max=p.y[i].soluong;
      }
      return Max;
}
void PrintSach(PHIEU a[],int m){
      for(int i=0;i<m;i++){
            for(int j=0;j<a[i].n;j++){
                  if(a[i].y[j].soluong==Max_SL(a[i])){
                  cout<<"-----------------------------------------------------"<<endl;
                        cout<<"Ma phieu la"<<a[i].x.MaPhieu<<endl;
                        cout<<"TenSach"<<setw(15)<<"TacGia"<<setw(15)<<"TenNXB"<<setw(15)<<"soluong"<<endl;
                        cout<<a[i].y[j].TenSach<<setw(15)<<a[i].y[j].TacGia<<setw(15)<<a[i].y[j].TenNXB<<setw(15)<<a[i].y[j].soluong<<endl;
                   cout<<"-----------------------------------------------------"<<endl;
                  }
            }
      }
}
int main(){
      PHIEU *a;
      int m;
      cout<<"Nhap so luong phieu: ";            cin>>m;
      a=new PHIEU[m];
      Nhap_N(a,m);
      Xuat_N(a,m);
      PrintSach(a,m);
}
