#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//method overloading

class Sum{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};

int main() {
    Sum sum1;
    cout<<sum1.add(2,3,10);
    

    return 0;
}
