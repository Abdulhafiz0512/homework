#include <iostream>
using namespace std;
class Timer {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Timer(int h, int m, int s) {
        seconds = s % 60;
        m=m+s/60;
        minutes = m % 60;
        h=h+m/60;
        hours = h % 24;


    }

    // Function to print time in h:m:s format
    void printTime() {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

int main() {
    int h,m,s;
    cin>>h>>m>>s;

    Timer t1(3, 67, 12);
    t1.printTime(); // Output: 4:7:12



    return 0;
}