#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child:public parent{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild:public child{
    public:
    grandchild(){
        cout<<"grandchild"<<endl;
    }
};
int main(){
    grandchild gc;
    return 0;
}