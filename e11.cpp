#include <iostream>
#include <string>
using namespace std;
class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	void Run(void) { cout << Name << ": I'm running" << endl; }
};
class Dog : public Pet {
public:
	Dog(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Woof! Woof!" << endl; }
};
class Cat : public Pet {
public:
	Cat(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Meow! Meow!" << endl; }
};
int main(void) {
	Dog *a_dog = new Dog("dog");
	a_dog->Run(); // ans 1
	
// 	Pet *a_pet = new Pet("pet");
// 	a_pet->MakeSound(); // ans2
	
// 	Pet *a_pet2 = new Dog("Huckleberry");
// 	a_pet2 -> Run(); // ans 3
// 	a_pet3 -> MakeSound(); // ans 4
	
	return 0;
}
