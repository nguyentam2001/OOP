#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class STUDENT;
class PERSON
{
protected:
      string name;
      string birth;
      string address;
public:
      void input();
      void output();
      PERSON(){
            name="nguyen van tam";
            birth="22 10 2001";
            address="bac giang";
      }
};
class SCHOOL{
      private:
      string name;
      string Date;
      friend class FACULTY;
};
class FACULTY{
private:
      string Name;
      string Date;
      SCHOOL x;
public:
      void input();
      void output();
      friend class STUDENT;

};
class STUDENT:public PERSON
{
private:
      FACULTY x;
      string clas;
      int score;
public:
      void nhap();
      void xuat();
      STUDENT():PERSON(){
            x.Name="nguyen";
            x.Date="06 06 2001";
            clas="CNTT";
            score=9;

      }
};

void PERSON::input(){
      cout<<"Name: ";         fflush(stdin);          getline(cin,name);
      cout<<"Birth: ";        fflush(stdin);          getline(cin,birth);
      cout<<"Address: ";      fflush(stdin);          getline(cin,address);
}
void PERSON::output(){
      cout<<setw(15)<<"Name: "<<name;
      cout<<setw(15)<<"Birth: "<<birth;
      cout<<setw(15)<<"Address: "<<address<<endl;

}
void FACULTY::input(){
      cout<<"Name: ";         fflush(stdin);           getline(cin,Name);
      cout<<"Date: ";         fflush(stdin);           getline(cin,Date);
      cout<<"Name school: ";  fflush(stdin);           getline(cin,x.name);
      cout<<"Date school: ";  fflush(stdin);           getline(cin,x.Date);
}
void FACULTY::output(){
      cout<<setw(15)<<Name;
      cout<<setw(15)<<Date;
      cout<<setw(15)<<x.name;
      cout<<setw(15)<<x.Date<<endl;

}
void STUDENT::nhap()
{
      PERSON::input();
      cout<<"Class: ";             fflush(stdin);           getline(cin,clas);
      cout<<"Score: ";              cin>>score;
}
void STUDENT::xuat()
{
      PERSON::output();
      cout<<setw(15)<<clas;
      cout<<setw(15)<<score<<endl;
}
int main(){
      STUDENT x;
      x.nhap();
      x.xuat();

}
