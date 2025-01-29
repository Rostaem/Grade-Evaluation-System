#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    string result = (score < 60) ? "Fail" :
                    (score >= 60 && score <= 69) ? "Pass" :
                    (score >= 70 && score <= 89) ? "Good" : "Excellent";

    cout << "Grade evaluation : " << result << endl;

    return 0;
}
