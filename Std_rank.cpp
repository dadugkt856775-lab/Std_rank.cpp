#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks[3];
    int total;
};

int main() {
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Student s;
        s.total = 0;

        cout << "\nEnter roll number: ";
        cin >> s.roll;

        cout << "Enter name: ";
        cin >> s.name;

        for (int j = 0; j < 3; j++) {
            cout << "Enter subject " << j + 1 << " marks: ";
            cin >> s.marks[j];

            if (s.marks[j] < 0 || s.marks[j] > 100) {
                cout << "Invalid marks. Enter student again.\n";
                s.total = -1;
                break;
            }

            s.total += s.marks[j];
        }

        if (s.total == -1) {
            i--;
            continue;
        }

        students.push_back(s);
    }

    sort(students.begin(), students.end(),
         [](const Student &a, const Student &b) {
             return a.total > b.total;
         });

    cout << "\n===== STUDENT RANKING =====\n";

    for (int i = 0; i < (int)students.size(); i++) {
        cout << "\nRank: " << i + 1
             << "\nRoll: " << students[i].roll
             << "\nName: " << students[i].name
             << "\nTotal Marks: " << students[i].total
             << "/300\n";
    }

    return 0;
}
