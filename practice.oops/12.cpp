#include<iostream>
using namespace std;

class parent1{
public:
    parent1(){
        cout<<"Parent 1 class"<<endl;
    }
};

class parent2{
public:
    parent2(){
        cout<<"Parent 2 class"<<endl;
    }
};

class child:public parent1,parent2{
public:
    child(){
        cout<<"child class"<<endl;
    }
};

int main(){

    child c;

    return 0;
}