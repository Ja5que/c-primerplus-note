#include<iostream>
using namespace std;

const int SLEN=30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of an array
// of student structures and an int representing the number of elements of
// the array. The function solicits and stores data about students. It
// terminates input upon filling the array or upon encountering a blank line
// for the student name. The function returns the actual number of array
// elements filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an argument
// and displays the structure's contents
void display2(const student * ps);

// display3() takes the address of the first element of an array of
// student structures and the number of array elements as arguments
// and displays the contents of the structures
void display3(const student pa[], int n);

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    int i = 0;
    for (i = 0; i < n; i++){
        cout << "Enter student name: ";
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
            break;
        cout << "Enter student hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter student ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student now){
    cout << "Student name: " << now.fullname << endl;
    cout << "Student hobby: " << now.hobby << endl;
    cout << "Student ooplevel: " << now.ooplevel << endl;
}

void display2(const student * ps){
    cout << "Student name: " << ps->fullname << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n){
    for (int i = 0; i < n; i++){
        cout << "Student name: " << pa[i].fullname << endl;
        cout << "Student hobby: " << pa[i].hobby << endl;
        cout << "Student ooplevel: " << pa[i].ooplevel << endl;
    }
}