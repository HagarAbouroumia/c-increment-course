// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class super{
    private:
    int p = 5;
};

class sub : public super {
    public:
    void print_p(){
        cout << p << endl;
    }
};

int main() {
    sub s;
    s.print_p();
}
