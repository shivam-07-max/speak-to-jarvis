#include<iostream>
using namespace std;

class rectangle{
public:    
    int l;
    int b;
    rectangle(){

    }

    rectangle(int x,int y){
        l=x;
        b=y;
    }

    rectangle(rectangle&r){
        l=r.l;
        b=r.b;
        
    }
};

int main(){
    rectangle *r1= new rectangle(4,5);
    cout<<r1->l<<" "<<r1->b<<endl;
        rectangle r2=*r1;
        delete r1;
        cout<<(r2.l)<<" "<<r2.b<<endl;
        return 0;
    

}