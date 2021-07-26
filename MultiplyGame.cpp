#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_intro()
{
    cout << "Welcome to the Arithmetic Operator Practice Program" << endl;
    cout << "It is joyous that you are keen on improving your skills in mathematical computation "
            "today!"
         << endl;
    cout << "The program currently suports the integer operations for addition, subtraction,  and "
            "multiplication"
         << endl;
}

void print_options()
{
    std::cout
        << "Please pick one of the following choices. Note for input please just enter a 1, 2, or 3"
        << std::endl;
    std::cout << "1. Addition" << endl;
    std::cout << "2. Subtraction" << endl;
    std::cout << "3. Multiplication" << endl;
}

//test git
//test 2

int get_choice()
{
    int choice;
    cin >> choice;
    return (choice - 1);
}

int main()
{

    // This is awesome

    print_intro();
    print_options();
    int c = get_choice();
    int counter = 0;
    int result, a, b, r11, r12, r21,
        r22; // r r11, r12 : ranges for first number r21, r22 : ranges for the second number
    srand(time(0));

    cout << "Enter the range for the first number you'd like to improve your skills "
            "in: "
         << endl;
    cin >> r11 >> r12;
    cout << "Enter the range for the second you'd like to improve your skills in: " << endl;
    cin >> r21 >> r22;

    switch (c)
    {
    case (0):
        do
        {
            a = std::rand() % (r12 - r11) + r11;
            b = std::rand() % (r22 - r21) + r21;
            cout << a << " + " << b << " = ?" << endl;
            cin >> result;
            if (a + b == result)
            {
                cout << endl;
                cout << endl;
                cout << "Great Job!" << endl;
                cout << endl;
                cout << endl;
            }
        } while (result == a + b);
        break;

    case (1):
        do
        {
            a = std::rand() % (r12 - r11) + r11;
            b = std::rand() % (r22 - r21) + r21;
            cout << a << " - " << b << " = ?" << endl;
            cin >> result;
            if (a - b == result)
            {
                cout << endl;
                cout << endl;
                cout << "Great Job!" << endl;
                cout << endl;
                cout << endl;
            }
        } while (a - b == result);

    case (2):
        do
        {
            a = std::rand() % (r12 - r11) + r11;
            b = std::rand() % (r22 - r21) + r21;
            cout << a << " * " << b << " = ?" << endl;
            cin >> result;
            if (a * b == result)
            {
                counter++;
                cout << counter;
                cout << endl;
                cout << endl;
                cout << "Great Job!" << endl;
                cout << endl;
                cout << endl;
            }
        } while (a * b == result);
        break;
    }
}
