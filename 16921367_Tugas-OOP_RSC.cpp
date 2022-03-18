 #include <iostream>
using namespace std;

//Class declaration
class circle {

    //Attributes
    public:
        int radius;

        //Methods
        void setRadius(int radiusValue) {
             radius = radiusValue;
        }
        double getRadius() {
            return radius;
        }
        double getArea() {
            return radius * 3.14;
        }
        double getCircumference() {
            return 2 * 3.14 * radius;
        }
};


//Instances declaration
int main() {

    //Object 1
    circle circle1;

    circle1.setRadius(10);
    cout << "circle 1"          << "\n";
    cout << "Radius: "          << circle1.getRadius() << "\n";
    cout << "Area: "            << circle1.getArea() << "\n";
    cout << "Circumference: "   << circle1.getCircumference() << "\n\n";

    //Object 2
    circle circle2;

    circle2.setRadius(15);
    cout << "circle 2"          << "\n";
    cout << "Radius: "          << circle2.getRadius() << "\n";
    cout << "Area: "            << circle2.getArea() << "\n";
    cout << "Circumference: "   << circle2.getCircumference() << "\n\n";

    //Object 3
    circle circle3;

    circle3.setRadius(20);
    cout << "circle 3"          << "\n";
    cout << "Radius: "          << circle3.getRadius() << "\n";
    cout << "Area: "            << circle3.getArea() << "\n";
    cout << "Circumference: "   << circle3.getCircumference() << "\n\n";



    return 0;
}
