// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class super{
int storage1; // what is the access specifier?
    private:
    int storage2;
    public:
    super(int storage2){
        this->storage2 = storage2;
    }
    int get(){
        return storage2;
    }
};

int main() {
    super s(5);
    cout << s.get() << endl;
    

    return 0;
}
