#include <cmath>
#include <iostream>
using namespace std;

double add(double, double);
double subtract(double, double);
double multiplication(double, double);
double division(double, double);
double squareRoot(double);
double square(double);
double cubeRoot(double);
double cube(double);
double power(double, double);
void showMenu();

int main()
{
    showMenu();
    return 0;
}

double add(double num1, double num2)
{
  return num1 + num2;
}

double subtract(double num1, double num2)
{
  return num1 - num2;
}

double multiplication(double num1, double num2)
{
  return num1 * num2;
}

double division(double num1, double num2)
{
  if (num2 == 0)
  {
    cout << "Cannot divide by 0 or a negative number." << endl;
    return 0;
  }
  return num1 / num2;
}

double squareRoot(double num)
{
  return sqrt(num);
}

double square(double num)
{
  return num * num;
}

double cubeRoot(double num)
{
  return cbrt(num);
}

double cube(double num)
{
  return num * num * num;
}

double power(double num1, double num2)
{
  return pow(num1, num2);
}

void showMenu()
{
  double num1 = 0;
  double num2 = 0;
  double result;
  int choice;

  cout << "Enter your choice(Pick 1-9)" << endl;
  cout << "1. Addition " << endl;
  cout << "2. Subtraction " << endl;
  cout << "3. Multiplication " << endl;
  cout << "4. Division " << endl;
  cout << "5. Square Root " << endl;
  cout << "6. Square " << endl;
  cout << "7. Cube Root " << endl;
  cout << "8. Cube " << endl;
  cout << "9. Power " << endl;

  cin >> choice;

  cout << "Enter your number" << endl;
  cin >> num1;

  if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 9)
  {
    cout << "Enter your second number" << endl;
    cin >> num2;
  }


  switch(choice)
  {
  case 1:
          cout << "Result is: " << add(num1,num2) << endl;
          break;
  case 2:
          cout << "Result is: " << subtract(num1,num2) << endl;
          break;
  case 3:
          cout << "Result is: " << multiplication(num1,num2) << endl;
          break;
  case 4:
          cout << "Result is: " << division(num1,num2) << endl;
          break;
   case 5:
          cout << "Result is: " << squareRoot(num1) << endl;
          break;
  case 6:
          cout << "Result is: " << square(num1) << endl;
          break;
  case 7:
          cout << "Result is: " << cubeRoot(num1) << endl;
          break;
  case 8:
          cout << "Result is: " << cube(num1) << endl;
          break;
  case 9:
          cout << "Result is: " << power(num1,num2) << endl;
          break;
  default:
          cout << "Invalid input.";
  }
}
