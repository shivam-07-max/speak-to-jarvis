#include<iostream>
using namespace std;

class fruit{
public:    
    string name;
    string color;
};

int main(){
    fruit orange;
    orange.name="orange";
    orange.color="orange";
    cout<<orange.color<<"-"<<orange.name<<endl;

    return 0;
}