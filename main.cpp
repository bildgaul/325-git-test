#include <iostream>
using namespace std;

int sum(int n){
  int s = 0;
  for (int i = 1; i <= n; i++)
    s += i;
  if (s == 0)
    s = 1;
  return s;
}

int product(int n){
  int p = 1;
  for (int i = 1; i <= n; i++)
      p *= i;
  return p;
}

int main(){
  cout << "Enter a number: ";
  int n;
  cin >> n;
  cout << "The sum from the number 1 to your number is: " << sum(n) << endl;
  cout << "The product from the number 1 to your number is: " << product(n) << endl;
  return 0;
}
