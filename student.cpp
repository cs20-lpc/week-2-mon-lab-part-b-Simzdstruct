#include "Student.hpp"
#include <iostream>
#include <string>
using namespace std;
//Constructor
Student::Student() {
    name = new string("");
    age = new int;
    cout << "Student Object Created" << endl;
}

//Destructor
Student::~Student() {
    delete name;
    delete age;
    cout << "Student Object Destroyed" << endl;
}

//setters
void Student::setName(string s) {
    *name = s;
}

void Student::setAge(int i) {
    *age = i;
}

//getters
string Student::getName() const {
    return *name;
}

int Student::getAge() const {
    return *age;
}