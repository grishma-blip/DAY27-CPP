#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a)
     {
        name = n;
        age = a;
    }
    Student(const Student &s) 
    {
        name = s.name;
        age = s.age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student student1("nupur", 18);
    Student student2 = student1;
    cout << "Details of Student 1:" << endl;
    student1.display();
    cout << "Details of Student 2 (copy of Student 1):" << endl;
    student2.display();
    return 0;
}