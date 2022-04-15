#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter Your Sweet Age:";
    cin>>age;

    if (age >= 18) {
        cout << "Offo....You are eligible for voting";
    } else {
        cout << "Oops....You are not eligible for voting";
    }

    return 0;
}
