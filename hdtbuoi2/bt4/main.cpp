#include <bits/stdc++.h>

using namespace std;
class Pt2{
private:
      float a,b,c;
public:
      void nhap();
      float result();
};
void Pt2::nhap(){
      cout<<"Pt Ax^2+Bx+C=0"<<endl;
      cout<<"nhap a = ";      cin>>a;
      cout<<"nhap b = ";      cin>>b;
      cout<<"nhap c = ";      cin>>c;
}
float Pt2::result(){
      float x1,x2;
      if(a==0){
            x1=(-c)/2;
            cout<<"phuong trinh co ng duy nhat la x = "<<x1<<endl;
      }else if(a>0&&b>=0&&c>=0){
            cout<<"phuong trinh vo nghiem"<<endl;
      }else{
            x1=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
            x2=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
            cout<<"phuong trinh co ng la x1 = "<<x1<<endl;
            cout<<"phuong trinh co ng la x2 = "<<x2<<endl;
      }
      return 0;
}
int main()
{
    Pt2 pt;
    pt.nhap();
    pt.result();
    return 0;
}
