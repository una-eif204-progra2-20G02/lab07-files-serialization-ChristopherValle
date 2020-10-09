//
// Created by chris on 10/8/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISTOPHERVALLE_PERSON_H
#define LAB07_FILES_SERIALIZATION_CHRISTOPHERVALLE_PERSON_H
#include <string>

class Person {
public:
    Person();

    Person(const std::string &name, int age, int id);

    virtual ~Person();

    int getId() const;
    void setId(int id);

    int getAge() const;
    void setAge(int age);

    const std::string &getName() const;
    void setName(const std::string &name);

private:
    int Id;
    int Age;
    std::string Name;
};


#endif //LAB07_FILES_SERIALIZATION_CHRISTOPHERVALLE_PERSON_H
