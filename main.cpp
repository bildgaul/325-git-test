#include <iostream>
using namespace std;

int sum(int n){
  int s = 0;
  for (int i = 1; i <= n; i++)
    s += i;
  return s;
}

int main(){
  cout << "Enter a number: ";
  int n;
  cin >> n;
  cout << "The sum from the number 1 to your number is: " << sum(n) << endl;
  
  return 0;
}
