#include<iostream>
using namespace std;

class rectangle{
public:    
    int l;
    int b;
     rectangle(){
        l=0;
        b=0;
     }

     ~rectangle(){
        cout<<"Destructor is called";
     }
};

int main(){

    rectangle r;
    cout<<r.l<<" "<<r.b<<endl;
    
    return 0;
}