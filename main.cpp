#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    string result = score < 60 ? "Fail"
                 : score < 70 ? "Pass"
                 : score < 90 ? "Good"
                 : "Excellent";

    cout << "Grade: " << result << endl;
    return 0;
};

