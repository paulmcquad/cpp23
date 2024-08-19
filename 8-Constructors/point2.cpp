#include <print>

class Point {
private:            //Data members (private)
    int x{0}, y{0};
public:              //Constructors
    Point() {}
    Point(int new_x, int new_y) {set(new_x, new_y);}

// Other member functions

    void set(int new_x, int new_y);
    int get_x();
    int get_y();
};

int main() {
    
    Point pt1, pt2;
    Point pt3(5, 10);

    std::print("The value of pt1 is ");
    std::print("{0}, ", pt1.get_x());
    std::print("{0} \n", pt1.get_y());

    std::print("The value of pt3 is ");
    std::print("{0}, ", pt3.get_x());
    std::print("{0} \n", pt3.get_y());

    return 0;
}

void Point::set(int new_x, int new_y) {
    if (new_x < 0)
        new_x *= -1;
    if (new_y < 0)
        new_y *= -1;
    x = new_x;
    y = new_y;
}

int Point::get_x() {
    return x;
}

int Point::get_y() {
    return y;
}
