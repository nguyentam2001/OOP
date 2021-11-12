#include <bits/stdc++.h>

using namespace std;
class HinhThang{
private:
      float Daylon,Daynho,Chieucao;
public:
      void Nhap();
      void NhapN();
      float Dientich();
};
void HinhThang::Nhap(){
      cout<<"day lon hinh thang la"<<endl;      cin>>Daylon;
      cout<<"day nho hinh thang la"<<endl;      cin>>Daynho;
      cout<<"chieu cao hinh thang"<<endl;       cin>>Chieucao;
}
float HinhThang::Dientich(){
      float s;
      s=((Daylon+Daynho)*Chieucao);
      s=s/2;
      return s;
}
int main()
{
    int n;
    cout<<"nhap so hinh thang"<<endl;
    cin>>n;
    HinhThang*a=new HinhThang[n];
    for(int i=0;i<n;i++){
      cout<<"nhap hinh thang thu"<<(1+i)<<endl;
      a[i].Nhap();
      cout<<"dien tich hinh thang thu"<<(1+i)<<": "<<a[i].Dientich()<<endl;
    }
    return 0;
}
