// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class super{
    private:
    int x;
    protected:
    int y = 5;
    public:
    int z = 10;
};

class sub : private super {
    public:
    void print(){
    cout << "This is private variable = "<<y << endl;
    cout << "This is private variable = "<<z << endl;
    }
};

int main() {
    sub s;
    s.print();
}
