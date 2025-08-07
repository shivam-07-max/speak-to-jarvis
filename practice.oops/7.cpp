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

    rectangle(int x,int y){
        l=x;
        b=y;
    }


    ~rectangle(){
        cout<<"Destructor is called";
    }
};

int main(){
    rectangle *r1= new rectangle;
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    rectangle r2(7,8);
    cout<<r2.l<<" "<<r2.b<<endl;

    return 0;
}
