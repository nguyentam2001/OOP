/*#include<bits/stdc++.h>
using namespace std;

void gt(string s){
      vector<char>s1;
      vector<char>s2;
      for(int i=0;i<s.length();i++){
            if(i%2==0){
                  s1.push_back(s[i]);
            }else{
                  s2.push_back(s[i]);
            }
      }
      for(int i=0;i<s1.size();i++){
            cout<<s1[i];
      }
      cout<<" ";
     for(int i=0;i<s2.size();i++){
            cout<<s2[i];
      }
}
int main() {
    int n;
    cin>>n;
    string str;
    string str1;
    fflush(stdin); getline(cin,str);
    fflush(stdin); getline(cin,str1);
      gt(str);
      cout<<endl;
      gt(str1);
    */
 /*   #include <bits/stdc++.h>//tham tri
using namespace std;

int congMot(int a) {
	a++;
	return a;
}

int congHai(int a) {
	a += 2;
	return a;
}

int main() {

	int a = 1;
	cin >> a;
	cout << a << endl;
	cout << congMot(a) << " " << congHai(a);

	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void congMot(int& a) {
	a++;
}

int main() {

	int a = 1;
	cout << a << endl;
	congMot(a);
	cout << a << endl;

	return 0;
}
