#include<iostream>
#include<cmath>
using namespace std;

void power(double x,double y,double z){
    if(x&&y&&z == 2){
        cout << pow(x,pow(y,z));
    }else cout << pow(x,y);
}
