// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//inheritance

class Animal{
    public:
    void eats(){
        cout<<"The dog eats"<<endl;
    }
};

class Dog:public Animal{
    public:
    void barks(){
        cout<<"the dog barks";
    }
};

int main() {
    Dog doggy;
    doggy.barks();
    

    return 0;
}
