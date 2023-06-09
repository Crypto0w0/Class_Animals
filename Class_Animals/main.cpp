#include<iostream>
using namespace std;

class Animal{
protected:
    string name;
    int kg;
public:
    Animal() = default;
    Animal(string n, int k){
        name = n;
        kg = k;
    }
    virtual void Print() = 0;
};

struct IAnimal{ // интерфейс в стиле С++
    virtual void Eat() = 0;
    virtual void Move() = 0;
};

struct IBird{
    virtual void Fly() = 0;
};

struct ISwim{
    virtual void Swim() = 0;
};

class Cat : public Animal, public IAnimal{
    string color;
public:
    Cat(string n, int k, string c) : Animal(n, k){
        color = c;
    }
    
    void Print(){
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Color: " << color << endl;
    }
    
    // реализация интерфейса
    void Eat(){
        cout << "Cat eats\n";
    }
    
    void Move(){
        cout << "Cat moves\n";
    }
};

class Parrot : public Animal, public IAnimal, public IBird{
public:
    Parrot(string n, int k) : Animal(n, k) {}
    
    void Print(){
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    
    // реализация интерфейса IAnimal
    void Eat(){
        cout << "Parrot eats\n";
    }
    
    void Move(){
        cout << "Parrot moves\n";
    }
    
    // реализация интерфейса IBird
    void Fly(){
        cout << "Parrot flies\n";
    }
};

class Elefant : public Animal, public IAnimal, public ISwim{
public:
    Elefant(string n, int k) : Animal(n, k){}
    
    void Print(){
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    
    void Eat(){
        cout << "Elefant eats\n";
    }
    
    void Move(){
        cout << "Elefant moves\n";
    }
    
    void Swim(){
        cout << "Elefant swims\n";
    }
};

class Penguin : public Animal, public IAnimal, public ISwim{
public:
    Penguin(string n, int k) : Animal(n, k){}
    
    void Print(){
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    
    void Eat(){
        cout << "Penguin eats\n";
    }
    
    void Move(){
        cout << "Penguin moves\n";
    }
    
    void Swim(){
        cout << "Penguin swims\n";
    }
};

class Duck : public Animal, public IAnimal, public ISwim, public IBird{
public:
    Duck(string n, int k) : Animal(n, k){}
    
    void Print(){
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    
    void Eat(){
        cout << "Duck eats\n";
    }
    
    void Move(){
        cout << "Duck moves\n";
    }
    
    void Swim(){
        cout << "Duck swims\n";
    }
    
    void Fly(){
        cout << "Duck flies\n";
    }
};


int main(){
    /*
    IAnimal* ref = new Cat("Cat", 3, "white");
    ref->Eat();
    ref->Move();

    ref = new Parrot("Ara", 2);
    ref->Eat();
    ref->Move();

    IBird* f = new Parrot("Ara", 3);
    f->Fly();
     */
    
    IAnimal* a = new Elefant("Pedro", 2000);
    a->Move();
    IAnimal* b = new Penguin("Skipper", 5);
    b->Eat();
    IAnimal* c = new Duck("Duck", 2);
    c->Move();
}
