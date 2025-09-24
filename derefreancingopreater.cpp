#include<iostream>
using namespace std;
int x;
int main(){
    int y=25;
    int *p=&x ;
    int *p1=new int;
    delete p1;
    cout<<*p1;
    cout<<"end";
} 