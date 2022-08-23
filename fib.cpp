# include <iostream> 
using namespace std;

int main() {

int num1, num2, i, number, result;
num1 = 0;
num2 = 1;

cout << "Type in number: ";
cin >> number;

for (i = 0; i < number; i++) {
result = num1 + num2;
cout << result << ", ";
num1 = num2;
num2 = result;

}

return 0;

}