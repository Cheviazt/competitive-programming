#include <bits/stdc++.h>

using namespace std;

class Student {

    private:
        int age, standard;
        string first_name, last_name;

    public:
        void set_age(int a) {
            age = a;
        }

        int get_age() {
            return age;
        }

        void set_first_name(string fn) {
            first_name = fn;
        }

        string get_first_name() {
            return first_name;
        }

        void set_last_name(string ln) {
            last_name = ln;
        }

        string get_last_name() {
            return last_name;
        }

        void set_standard(int s) {
            standard = s;
        }

        int get_standard() {
            return standard;
        }
};

int main () {

    Student stn;

    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    stn.set_age(age);
    stn.set_first_name(first_name);
    stn.set_last_name(last_name);
    stn.set_standard(standard);

    cout << stn.get_age() << endl;
    cout << stn.get_last_name() << ", " << stn.get_first_name() << endl;
    cout << stn.get_standard() << endl;
    cout << endl;
    cout << stn.get_age() << "," << stn.get_first_name() << "," << stn.get_last_name() << "," << stn.get_standard() << endl;

}