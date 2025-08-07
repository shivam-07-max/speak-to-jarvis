#include<iostream>
using namespace std;

class rectangle{
public:    
    int l;
    int b;
    int h;

    rectangle(int x,int y){
        l=x;
        b=y;
    }

    rectangle(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }



};

int main(){
    rectangle r1(3,4);
    cout<<r1.l<<" "<<r1.b<<endl;

    rectangle r2(3,6,8);
    cout<<r2.l<<" "<<r2.b<<" "<<r2.h<<endl;
    
    return 0;
}