#include <string>
#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        int age {};

    Person(const string& newName, const int& newAge) {
        name = newName;
        age = newAge;
    }

    ~Person()
    {
        cout << "Destroying " << name << endl;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }
};

int main ()
{
    const Person person("David", 24);

    cout << person.getName() << " - " << person.getAge() << endl;

    return 0;
}