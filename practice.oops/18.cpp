#include<iostream>
using namespace std;

class counter {
public:    
    int id;
    static int count;
19
    void set ID(int i){
        id=i;
        count++;
    }

    void show(){
        cout<<"id:"<<id<<"Total objects:"<<count<<endl;
    }
};

int counter:: count=0;

int main(){
    count a,b,c

    set.id(101);
    set.id(102);
    set.id(103);

    a.show();
    b.show();
    c.show();

    return 0;


}