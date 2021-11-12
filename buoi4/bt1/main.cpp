#include <iostream>

using namespace std;
class HCN{
private:
      int dai,rong;
public:
      void nhap();
      void ve();
      int dientich();
      int chuvi();
};
void HCN::nhap(){
      cout<<"nhap chieu dai: ";       cin>>dai;
      cout<<"nhap chieu rong: ";      cin>>rong;
}
void HCN::ve(){
      for(int i=0;i<rong;i++){
            for(int j=0;j<dai;j++){
                  cout<<"*"<<" ";
            }
            cout<<endl;
      }
}
int HCN::dientich(){
      int s=dai*rong;
      return s;
}
void HCN::chuvi(){
      int c=(dai+rong)*2;
      return c;
}
int main()
{
    HCN a;
    a.nhap();
    a.ve();
    cout<<"dien tich hinh chu nhat la: "<<a.dientich()<<endl;
    cout<<"chu vi hinh chu nhat la: "<<a.chuvi()<<endl;
}
