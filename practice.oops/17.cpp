#include <iostream>
using namespace std;

class Counter {
public:
    int id;                 // Normal data member
    static int count;       // Static data member

    void setID(int i) {
        id = i;
        count++;            // Increase static count for each object
    }

    void show() {
        cout << "ID: " << id << ", Total Objects: " << count << endl;
    }
};

// Define static member outside the class
int Counter::count = 0;

int main() {
    Counter a, b, c;

    a.setID(101);
    b.setID(102);
    c.setID(103);

    a.show();
    b.show();
    c.show();

    return 0;
}
