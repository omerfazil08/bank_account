#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    int money;

public:
    // Member function to set details
    void setDetails(string n, int a, string addr , int mone  ) {
        name = n;
        age = a;
        address = addr;
        money = mone;
        
    }
    void setMoney( int a) {
        cout << " Enter the amount you want to add: ";
        cin >> a;
        money = money + a;
    }
    // Member function to display details
    void displayDetails() {
        cout << "Person Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "money: " << money << endl;
    }
};

int main() {
    // Create an instance of the Person class
    Person johnDoe;

    // Set and display details including address
    johnDoe.setDetails("John Doe", 25, "123 Main Street ", 1500);
    johnDoe.setMoney(0);
    johnDoe.displayDetails();

    return 0;
}
