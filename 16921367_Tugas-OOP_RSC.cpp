 #include <iostream>
using namespace std;

//Class declaration
class circle {
    public:

        //Attributes
        int radius;

        //Methods
        void setRadius() {
            cin >> radius;
        }
        void getRadius() {
            cout << radius << "\n";
        }
        void getArea() {
            cout << radius * 3.14 << "\n";
        }
        void getCircumference() {
            cout << 2 * 3.14 * radius << "\n";
        }
};


//Instances declaration
int main() {

    //Object 1
    circle cr1;

    cout << "Input R1: ";
    cr1.setRadius();
    cr1.getRadius();
    cr1.getArea();
    cr1.getCircumference();

    //Object 2
    circle cr2;

    cout << "Input R2: ";
    cr2.setRadius();
    cr2.getRadius();
    cr2.getArea();
    cr2.getCircumference();


    //Object 3
    circle cr3;

    cout << "Input R3: ";
    cr3.setRadius();
    cr3.getRadius();
    cr3.getArea();
    cr3.getCircumference();


    return 0;
}
