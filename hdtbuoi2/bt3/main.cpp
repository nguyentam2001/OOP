#include <bits/stdc++.h>

using namespace std;
class PT1{
private:
      float a,b;
public:
      void nhap();
      float KetQua();
};
void PT1::nhap(){
      cout<<"pt Ax+B=0"<<endl;
      cout<<"nhap he so A =";       cin>>a;
      cout<<"nhap he co B=";        cin>>b;
}
float PT1::KetQua(){
      float x;
      x=(-b)/a;
      return x;
}
int main()
{
      PT1 p1;
      p1.nhap();
      cout<<"ket qua X= "<<p1.KetQua()<<endl;
}
