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

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.