#include <iostream>
#include<iomanip> //to use setprecision  
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    /*setprecision used to print long double bcz
    of including the iomainip header file*/
    /*some test cases get failed so add setprecision to float to */
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<setprecision(15)<<d<<"\n"<<setprecision(15)<<e<<endl;
    return 0;
}
