#include <iostream>

using namespace std;

int multiply(int first_num,int second_num){
  int result=0, i=0;

  while(i<second_num){
    result+=first_num;
    i++;
  }
  return result;
}

int divide(int first_num,int second_num){
  int result=0;

  while(first_num>=second_num){
    first_num+=~second_num+1;
    result++;
  }
  return result;
}

int main(){
//Get our variables defined
    char operation;
    int first_num;
    int second_num;
    int result;
//Get user input
cout << "Possible operations: '+' is additon '-' is subtraction '*' is multiplication and '/' is division" << endl;
cout << "Enter operation:" << endl;
    cin >> operation;
cout << "Enter first number:" << endl;
    cin >> first_num;
cout << "Enter second number:" << endl;
    cin >> second_num;
//calculations
switch(operation){
  case'+':
	  result = first_num + second_num;
	  break;
  case'-':
  //squiggle 1's complments a number. Basically making it turn from a 5 for example to -6. Just add 1 and we get the negative form of the original number
	  result = first_num + ~second_num + 1;
	  break;
	case'*':
	  result = multiply(first_num,second_num);
	  break;
	case'/':
    result = divide(first_num,second_num);
	  break;
	default:
	  cout << "you broke something." << endl;
	  break;
}
cout << result << endl;

//Checking second_num due to float input issues
//cout << "Second_num is:" << second_num << endl;
}
