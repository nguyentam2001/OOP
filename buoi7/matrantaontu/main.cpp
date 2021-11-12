#include <iostream>

using namespace std;
class Matrix{
private:
      int m,n;
      int **a;
public:
      friend istream&operator>>(istream &is,Matrix&obj);
      friend ostream&operator<<(ostream &os,Matrix&obj);
      Matrix operator-();
      Matrix operator+(Matrix &obj);
      Matrix operator-(Matrix &obj);

};
istream&operator>>(istream&is,Matrix&obj){
      cout<<"\tEnter amount of row: ";    is>>obj.m;
      cout<<"\tEnter amount of column: "; is>>obj.n;
      obj.a=new int*[obj.m];
      for(int i=0;i<obj.m;i++)
      {
            obj.a[i]=new int[obj.n];
      }
      for(int i=0;i<obj.m;i++){
            for(int j=0;j<obj.n;j++){
                  cout<<"a["<<i<<"]["<<j<<"]=";
                  is>>obj.a[i][j];
            }
      }
      return is;
}
ostream&operator<<(ostream&os,Matrix&obj){
      for(int i=0;i<obj.m;i++){
            for(int j=0;j<obj.n;j++){
                  os<<obj.a[i][j]<<" ";
            }
            os<<endl;
      }
      return os;
}
Matrix Matrix::operator-(){
      for(int i=0;i<this->m;i++){
            for(int j=0;j<this->n;j++){
                  this->a[i][j]=-this->a[i][j];
            }
      }
      return *this;
}
Matrix Matrix::operator+(Matrix &obj){
      Matrix sum;
      if(this->m!=obj.m&&this->n!=obj.n)
            return*this;
      sum.m=obj.m;
      sum.n=obj.n;
      sum.a=new int*[sum.m];
      for(int i=0;i<n;i++){
            sum.a[i]=new int[sum.n];
      }
      for(int i=0;i<sum.m;i++){
            for(int j=0;j<sum.n;j++){
                 sum.a[i][j]=this->a[i][j]+obj.a[i][j];
            }
      }
      return sum;
}
Matrix Matrix::operator-(Matrix &obj){
      Matrix sub;
      if(this->m!=obj.m&&this->n!=obj.n)
            return*this;
      sub.m=obj.m;
      sub.n=obj.n;
      sub.a=new int*[obj.m];
      for(int i=0;i<obj.n;i++){
            sub.a[i]=new int[obj.n];
      }
      for(int i=0;i<sub.m;i++){
            for(int j=0;j<sub.n;j++){
                  sub.a[i][j]=this->a[i][j]-obj.a[i][j];
            }
      }
      return sub;
}
int main()
{
      Matrix x,y,matrix01,matrix02,matrix03,matrix04;
      cout<<"enter matrix X: "<<endl;
      cin>>x;
      cout<<"enter matrix Y: "<<endl;
      cin>>y;
      matrix01=-x;
      matrix02=-y;
      cout<<"Matrix apter change: "<<endl;
      cout<<matrix01<<endl;
      cout<<"Matrix apter change: "<<endl;
      cout<<matrix02<<endl;
      /*matrix03=matrix01+matrix02;
      cout<<"sum matrix: "<<endl;
      cout<<matrix03<<endl;*/
      matrix04=matrix01-matrix02;
      cout<<"sub matrix: "<<endl;
      cout<<matrix04<<endl;
    return 0;
}
