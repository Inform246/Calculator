//Uriel Hernandez
//Calculator V1
//8-31-2023
//UIUC UNDERGRAD
#include <iostream>
using namespace std;

//creates a variable for a do while loop
char cont = 'Y';

//creates a variable where user input is stored 
char user_choice;


//creates a variable that store numeric inputs from the user
float num1;
float num2;

//variables for numeric inputs for the exponents
int num1ex;
int num2ex;
int resultex;

//creates a variable that store the result 
float result;
int main()
{

    cout << "************************************************************";
    cout << endl;

    cout << "BEFORE YOU BEGIN THE USE OF THIS PROJECT PLEASE READ THE FOLLOWING";
    cout << endl;

    cout << "Hello, this will be a small project.";
    cout << endl;

    cout << "This project will let you (the user) calculate some math problems. ";
    cout << endl;

    cout << "Such as, any multiplication/addition/subtraction/division problems and more.";
    cout << endl;

    do
    {
    cout << endl;
    cout << "Before we begin this please enter one of these choices when prompted.";
    cout << endl;
    cout << endl;

    cout << "** A = Addition **";
    cout << "** S = Subtraction **";
    cout << "** M = Multiplication **";
    cout << "** D = Division **";
    cout << "** Q = Square Root **";
    cout << "** E = Exponent **";
    cout << endl;
    cout << endl;

    cout << "Please enter one of the choices: ";
    cin >> user_choice;



    switch (user_choice)
    {
    case 'A':
    case 'a':
        cout << endl;
        cout << "Thank you for choosing the addition aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter two numbers: ";
        cin >> num1;
        cin >> num2;

        result = num1 + num2;

        cout << endl;
        cout << "Thank you, here is you result:  (" << num1 << "  +  " << num2 << "  =  " << result << ")";
        break;

    case 'S':
    case 's':

        cout << endl;
        cout << "Thank you for choosing the subtraction aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter two numbers: ";
        cin >> num1;
        cin >> num2;

        result = num1 - num2;

        cout << endl;
        cout << "Thank you, here is you result:  (" << num1 << "  -  " << num2 << "  =  " << result << ")";

        break;

    case 'M':
    case 'm':

        cout << endl;
        cout << "Thank you for choosing the multiplication aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter two numbers: ";
        cin >> num1;
        cin >> num2;

        result = num1 * num2;

        cout << endl;
        cout << "Thank you, here is you result:  (" << num1 << "  *  " << num2 << "  =  " << result << ")";

        break;

    case 'D':
    case 'd':

        cout << endl;
        cout << "Thank you for choosing the division aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter two numbers: ";
        cin >> num1;
        cin >> num2;

        result = num1 / num2;

        cout << endl;
        cout << "Thank you, here is you result:  (" << num1 << "  /  " << num2 << "  =  " << result << ")";
    case 'Q':
    case 'q':

        cout << endl;
        cout << "Thank you for choosing the square root aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter one number: ";
        cin >> num1;
        
        if (num1 >= 0) {
            result = sqrt(num1);
            cout << endl;
            cout << "Thank you, here is you result." << endl;
            cout << endl;
            cout << "The square root of " << num1 << " = " << result;
        }

        else {
            cout << "Sorry but the square root of " << num1 << " is undefined.";
        }
        break;

    case 'E':
    case 'e':

        cout << endl;
        cout << "Thank you for choosing the exponent aspect of this calculator.";
        cout << endl;
        cout << endl;

        cout << "Please enter your base number: ";
        cin >> num1ex;

        cout << "Please enter your exponent number: ";
        cin >> num2ex;

        if (num2ex > 0) {
            resultex = pow(num1ex, num2ex);
            cout << endl;
            cout << "Thank you, here is you result." << endl;
            cout << endl;
            cout << num1ex << " To the power of  " << num2ex << " = " << resultex;
        }

        else if (num2ex == 0) {
            resultex = 1;
            cout << endl;
            cout << "Thanks you, here is your result" << endl;
            cout << endl;
            cout << num1ex << " To the power of  " << num2ex << " = " << resultex;
        }

        else {
            resultex = pow(num1ex, abs(num2ex));
            cout << endl;
            cout << "Thank you, here is your result" << endl;
            cout << endl;
            cout << num1ex << " To the power of  " << num2ex << " = 1/" << resultex;
            }

        
        

        break;
    default:
        cout << "INVALID INPUT" << endl;

    }// end of the switch statement


    cout << endl;
    cout << endl;
    cout << "Do you want to try again? (Y/N):  ";
    cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
}// end of main


