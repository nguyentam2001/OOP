#include <iostream>

using namespace std;
class HinhTron{
private:
      float radius;
public:
      void nhap();
      float erea();
      float Chuvi();


};
void HinhTron::nhap(){
      cout<<"nhap ban kinh"<<endl;  cin>>radius;
}
float HinhTron::erea(){
      float s;
      s=radius*radius*3.14;
      return s;
}
float HinhTron::Chuvi(){
      float c;
      c=2*radius*3.14;
      return c;
}
int main()
{
      int n;
      cout<<"nhap so hinh tron"<<endl;
      cin>>n;
      HinhTron *a=new HinhTron[n];
      for(int i=0;i<n;i++){
            cout<<"nhap hinh tron"<<(i+1)<<endl;
            a[i].nhap();
            cout<<"dien tich hinh tron"<<(i+1)<<endl;
            a[i].erea();
            cout<<"chu vi hinh tron"<<(i+1)<<endl;
            a[i].Chuvi();
      }
      return 0;
}
