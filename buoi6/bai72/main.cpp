#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class FACULTY;
class SCHOOL
{
private:
      string Name;
      int Date;
      friend class FACULTY;
};
class FACULTY
{
private:
      string name;
      int Date;
      SCHOOL x;
public:
      void input();
      void output();
};
class PERSON
{
protected:
      string name;
      int Brith;
      string Address;
public:
      void input();
      void output();
      PERSON(){ name="nguyen van tam"; Address="bac giang";};
};
class STUDENT:public PERSON
{
private:
      FACULTY y;
      string class1;
      int score;
public:
      void input();
      void output();
      STUDENT(){ class1="cntt05"; score=10;};
};
void FACULTY::input()
{
      cout<<"Name FAC: ";          fflush(stdin);    getline(cin,name);
      cout<<"Date FAC: ";                             cin>>Date;
      cout<<"Name School: ";        fflush(stdin);    getline(cin,x.Name);
      cout<<"Date School: ";                          cin>>x.Date;
}
void FACULTY::output()
{
      cout<<setw(10)<<"Name FAC: "<<name;
      cout<<setw(10)<<"Date FAC: "<<Date;
      cout<<setw(10)<<"Name School: "<<x.Name;
      cout<<setw(10)<<"Name school: "<<x.Date<<endl;
}
void PERSON::input()
{
      cout<<"Name Per: ";           fflush(stdin);    getline(cin,name);
      cout<<"Brith Per: ";                            cin>>Brith;
      cout<<"Address: ";            fflush(stdin);    getline(cin,Address);
}
void PERSON::output()
{
      cout<<setw(10)<<"Name Per"<<name;
      cout<<setw(10)<<"Brith Per: "<<Brith;
      cout<<setw(10)<<"Address: "<<Address<<endl;
}
void STUDENT::input()
{
      PERSON::input();
      y.input();
      cout<<"Name class: ";         fflush(stdin);    getline(cin,class1);
      cout<<"Score: ";                                cin>>score;
}
void STUDENT::output()
{
      PERSON::output();
      y.output();
      cout<<setw(10)<<"Name class: "<<class1;
      cout<<setw(10)<<"Score: "<<score<<endl;
}
int main()
{
    STUDENT ns;
    ns.input();
    ns.output();
    return 0;
}
