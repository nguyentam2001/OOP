#include <bits/stdc++.h>

using namespace std;
/*class Ps{
private:
      int ts,ms;
public:
      void nhap_phanso(Ps &ps);
      void xuat_phanso(Ps &ps);
      friend Ps operator+(Ps &ps1,Ps &ps2);
      friend istream& operator>>(istream &is,Ps &ps);
      friend ostream& operator>>(ostream &is,const Ps &ps);
};
istream& operator>>(istream &is,Ps &ps){
      cout<<"\n nhap tu so: ";
      is>>ps.ts;
      cout<<"\n nhap mau so:";
      is>>ps.ms;
      return is;
}
ostream& operator>>(ostream &is,Ps &ps)
{
      os<<ps.ts<<"/"<<ps.ms;
      return os;
}*
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/
int main(){
      int m;
      cout<<"nhap m dong"<<endl;
      cin>>m;
      for(int i=0;i<m;i++){
      int a,b,n;
      cin>>a>>b>>n;
      int sum=0;
      int x=0;
            for(int j=0;j<n;j++){
                  if(j==0){
                        sum=a+b;
                  }
                  cout<<sum<<" ";
                  x=2*b;
                  sum+=x;
                  b=x;

            }
            cout<<endl;
      }
}
