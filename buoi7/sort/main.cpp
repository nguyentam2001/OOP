#include <iostream>

using namespace std;

int main()
{
      int a,b,c,d;
      cout<<"nhap a b c d";         cin>>a>>b>>c>>d;
      int Max;/*
      Max=(a>b)?a:b;
      Max=(Max>c)?Max:c;
      Max=(Max>d)?Max:d;
    cout << Max<< endl;*/
    if(a>b)
      Max=a;
    else
      Max=b;
      if(Max>c)
      Max=Max;
    else
      Max=c;
      if(Max>d)
      Max=Max;
    else
      Max=d;
 cout << Max<< endl;
    return 0;
}
