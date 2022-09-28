// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class super{
    private:
    int p = 5;
};

class sub : public super {

};

int main() {
    sub s;
    s.p = 5;
    return 0;
}
