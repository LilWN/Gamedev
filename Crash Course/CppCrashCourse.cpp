#include <iostream>
using namespace std;

void celebrateBirthday(int* age);

int main()
{
    int myAge = 25;
    cout << "Before function, age: " << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "After function, age: " << myAge << endl;

    return 0;
}

void celebrateBirthday(int* age) 
{
    (*age)++;
    cout << "YAAAY, celebrated " << *age << " birthday" << endl;
}