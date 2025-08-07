#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog d;
    d.makeSound();  // Output: Bark!
    return 0;
}
