#include <iostream>
#include<math.h>
using namespace std;

int main() {
  int n;
  cout << "Nhap v�o so nguy�n duong n: ";
  cin >> n;
  bool isPrime = true;
  if (n <= 1) {
    isPrime = false;
  } else {
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  if (isPrime) {
    cout << n << " la so nguyen to." << endl;
  } else {
    cout << n << " khong phai la so nguyen to." << endl;
  }

  return 0;
}

