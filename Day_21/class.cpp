#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

class Person {
    // Complete the class
    int age;
    string name;
    public:
        void setNameAndAge(string name, int age){
            this->name = name;
            this->age = age;
        }
        void getNameAndAge(){
            cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";
        }
};

int main() {
    //Write your code here
    Person p;
    string name;
    int age;
    cin>>name>>age;
    p.setNameAndAge(name, age);
    p.getNameAndAge();
    return 0;
}