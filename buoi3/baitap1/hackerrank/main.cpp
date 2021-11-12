using namespace std;
#include <iostream>
class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
       age=initialAge;
        if(age<0){
            cout<<"you are young vailui"<<endl;
            age=0;
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if(age<=3){
            cout<<"You are young."<<endl;
            cout<<age;
        }
        if(age>=13&&age<18){
            cout<<"You are a teenager."<<endl;
        }
        if(age>=18){
            cout<<"You are old."<<endl;
        }
    }

    void Person::yearPasses(){
        age++;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
