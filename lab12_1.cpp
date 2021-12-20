// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char grade;
string randGrade(){
    grade = rand()%9;
    switch (grade){
    case 0:
        return "A";
        break;
    case 1:
        return "B+";
        break;
    case 2:
        return "B";
        break;
    case 3:
        return "C+";
        break;
    case 4:
        return "C";
        break;
    case 5:
        return "D+";
        break;
    case 6:
        return "D";
        break;
    case 7:
        return "F";
        break;
    case 8:
        return "W";
        break;
    }
    return 0;
}
int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << randGrade() << " in this 261102.";
    return 0;
}
