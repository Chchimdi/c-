#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;
    int result;

    cout << "Input the first number: " ;
    cin >> num1;
    cout << "Input the operator: " ;
    cin >> op;
    cout << "Input the second number: " ;
    cin >> num2;

    if ( op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else if (op == '%')
    {
        result = num1 % num2;
    }
    else 
    {
        cout << "You entered an invalid operator.";
    }
    
    cout << "Your operation is: " << endl;
    cout << num1 << " " << op << " "  << num2 << endl;
    cout << "Result = " << result;


    return 0;
}