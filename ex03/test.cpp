#include <iostream>

class ParentClass {
protected:
    int value;

public:
    ParentClass(int value) : value(value) {}

    // Getter for the value
    int getValue() const {
        return value;
    }

    // Setter for the value
    void setValue(int newValue) {
        value = newValue;
    }
};

class ChildClass : public ParentClass {
public:
    // Constructor for ChildClass that explicitly calls the ParentClass constructor
    ChildClass(int value) : ParentClass(value) {}

    // Override the setter to provide custom behavior if needed
    void setValue(int newValue) {
        // Add custom logic here if needed
        ParentClass::setValue(newValue); // Call the parent class's setter
    }
};

int main() {
    ChildClass child(42);

    int parentValue = child.getValue(); // Get value (42)

    child.setValue(100); // Set value through the child class

    parentValue = child.getValue(); // Get updated value (100)

    std::cout << "ParentValue: " << parentValue << std::endl;

    return 0;
}
