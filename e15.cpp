#include <iostream>
using namespace std;
class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	void MakeSound(void) { cout << Name << " the Pet says: Shh! Shh!" << endl; }
};
class Cat : public Pet {
public:
	Cat(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Cat says: Meow! Meow!" << endl; } //overriding 
};
class Dog : public Pet {
public:
	Dog(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Dog says: Woof! Woof!" << endl; } //overriding 
};
int main(void) {
	Cat *a_cat;
	Dog *a_dog;
	
	a_cat = new Cat("Kitty");
	a_dog = new Dog("Doggie");
	a_cat -> MakeSound();
	static_cast<Pet *>(a_cat) -> MakeSound(); // uppercasting
	a_dog -> MakeSound();
	static_cast<Pet *>(a_dog) -> MakeSound(); // uppercasting
	return 0;
}
