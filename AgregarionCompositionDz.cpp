#include <iostream>

using namespace std;

// Basic class "Human"
class Person {
public:
	// Virtual method "DailyRoutine"
    virtual void DailyRoutine() const {
        cout << "Human do his daily routine\n";
    }

	// Virtual destructor
    virtual ~Person() {}
};

// Class Student
class Student : public Person {
public:
    void DailyRoutine() const override {
        cout << "Student: wake up, go on lessons, do hw, chill.\n";
    }
};

// class Teacher
class Teacher : public Person {
public:
    void DailyRoutine() const override {
        cout << "Teacher: prepare for lessons, check hw, learning smth new.\n";
    }
};

int main() {
	// Example of using
    Person* person1 = new Student();
    Person* person2 = new Teacher();

    cout << "Daily routine for students:\n";
    person1->DailyRoutine();

    cout << "\nDaily routine for teacher:\n";
    person2->DailyRoutine();

	// Clearing memory
    delete person1;
    delete person2;
}
