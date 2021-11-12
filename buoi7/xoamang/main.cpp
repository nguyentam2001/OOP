#include <iostream>

using namespace std;
class Array{
private:
      int m,n;
      int **a;
public:
      friend istream&operator>>(istream&is,Array&ar);
      friend ostream&operator<<(ostream&os,Array ar);
      Array operator+(Array&obj);
      Array operator-(Array&obj);
      Array operator-();
};
istream&operator>>(istream&is,Array&ar){
      cout<<"enter amount: ";       is>>ar.m;
      cout<<"enter column: ";       is>>ar.n;
      ar.a=new int*[ar.m];
      for(int i=0;i<ar.m;i++){
            ar.a[i]=new int[ar.n];
      }
      for(int i=0;i<ar.m;i++){
            for(int j=0;j<ar.n;j++){
                  cout<<"a["<<i<<"]["<<j<<"]=";
                  is>>ar.a[i][j];

            }
      }
      return is;
}
ostream&operator<<(ostream&os,Array ar){
      for(int i=0;i<ar.m;i++){
            for(int j=0;j<ar.n;j++){
                  os<<ar.a[i][j]<<" ";
            }
            cout<<endl;
      }
      return os;
}
Array Array::operator-(){
      for(int i=0;i<this->m;i++){
            for(int j=0;j<this->n;j++){
                  this->a[i][j]=-this->a[i][j];
            }
      }
      return *this;
}
Array Array::operator+(Array&obj){
      Array sum;
      if(this->m!=obj.m&&this->n!=obj.n){
            return *this;
      }
      sum.m=obj.m;
      sum.n=obj.n;
      sum.a=new int*[sum.m];
      for(int i=0;i<sum.m;i++){
            sum.a[i]=new int[sum.n];
      }
      for(int i=0;i<sum.m;i++){
            for(int j=0;j<sum.n;j++){
                  sum.a[i][j]=this->a[i][j]+obj.a[i][j];
            }
            cout<<endl;
      }
      return sum;

}
int main(){
      Array a,b,m,n;
      cin>>a;
      cout<<a;
      cin>>b;
      cout<<b;
      m=a+b;
      cout<<m;
      n=-a;
      cout<<n;
      return 0;
}
