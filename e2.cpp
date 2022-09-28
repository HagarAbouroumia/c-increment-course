// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class super{
    public:
    int x;
};

class sub : super {
   public:
   int y;
   
};

int main() {
    sub s;
    s.x = 5;
    return 0;
}
