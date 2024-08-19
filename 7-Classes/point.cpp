#include <print>

class Point {
public:              // Member functions
    void set(int new_x, int new_y);
    int get_x();
    int get_y();
private:            // Data members (private)
    int x{0}, y{0};
};

int main() {
    
    Point pt1, pt2;   // Create two Point objects.

    pt1.set(10, 20);
    std::print("pt1 is {0}", pt1.get_x());
    std::print(", {0} \n", pt1.get_y());
    pt2.set(-5, -25);
    std::print("pt2 is {0}", pt2.get_x());
    std::print(", {0} \n", pt2.get_y());
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
