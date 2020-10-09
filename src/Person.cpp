//
// Created by chris on 10/8/2020.
//

#include "Person.h"

Person::Person() {}
Person::Person(const std::string &name, int age, int id) : Name(name), Age(age), Id(id) {}
Person::~Person() {

}

int Person::getId() const {
    return Id;
}

void Person::setId(int id) {
    Id = id;
}

int Person::getAge() const {
    return Age;
}

void Person::setAge(int age) {
    Age = age;
}

const std::string &Person::getName() const {
    return Name;
}

void Person::setName(const std::string &name) {
    Name = name;
}


