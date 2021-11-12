#include<bits/stdc++.h>

using namespace std;
class Array{
private:
      int *Value;
      int n;
public:
      Array();
      Array(int m);
      ~Array();
      void Xuat();
      void Nhap();
};
Array::Array(){
      n=3;
      Value=new int[3];
}
Array::Array(int m){
      n=m;
      Value=new int[n];
      for(int i=0;i<n;i++){
            Value[i]=0;
      }
}
Array::~Array() {
    delete[] Value;
}
void Array::Xuat(){
      for(int i=0;i<n;i++){
            cout<<Value[i]<<" ";
      }
}
int main(){
      Array a,b(6);
      b.Xuat();

}
