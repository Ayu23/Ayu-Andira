#include<iostream>
using namespace std;
 int main()
 {
     int a,b,c,d, *e;
     cout<<"Masukkan A =";
     cin>>a;
     cout<<"Masukkan B =";
     cin>>b;
     cout<<"Masukkan C =";
     cin>>c;
     cout<<"Masukkan D =";
     cin>>d;
     e=&a;
     cout<<*e<<"=";
     e=&b;
     cout<<*e<<"=";
     e=&c;
     cout<<*e<<"=";
     e=&d;
     cout<<*e;
     return 0;
 }
