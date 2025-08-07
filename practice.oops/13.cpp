#include<iostream>
using namespace std;

class parent{
    public:

    parent(){
        cout<<"parent class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"child 1 class"<<endl;
    }
};

class child2:public parent{
    public:
    child2(){
        cout<<"child 2 class"<<endl;
    }
};

int main(){

   child1 c;
   child2 c1;
    return 0;
}
