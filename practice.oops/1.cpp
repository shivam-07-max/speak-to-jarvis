#include<iostream>
using namespace std;

class fruit{
public:    
    string name;
    string color;
    string taste;
};

int main(){
    fruit mango;
    mango.name= "mango";
    mango.color="yellow";
    mango.taste="very good";
    cout<<mango.name<<"-"<<mango.color<<"-"<<mango.taste<<endl;

    return 0;

}
