#include <bits/stdc++.h>

using namespace std;
class English{
private:
      float Inches;
      int Feet;
public:

     friend istream& operator>>(istream& s,English& d);
     friend ostream& operator<<(ostream& s,const English& d);
};
istream& operator>>(istream& s,English& d)
{
      cout<<"\n input Feet";        s>>d.Feet;
      cout<<"\n input Inches";      s>>d.Inches;
      return s;
}
ostream& operator<<(ostream& s,const English& d)
{
      s<<d.Feet<<"-"<<d.Inches<<endl;
}
int main()
{
      English dist1,dist2;
      cout<<"\n Nhap vao hai gia tri cua English: ";        cin>>dist1>>dist2;
      cout<<"\n dist1="<<dist1<<"\n dist2="<<dist2;
    return 0;
}
