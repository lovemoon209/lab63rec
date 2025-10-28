#include <iostream>
using namespace std;

void Input(int* a, const int size, int i)
{
cout << "a[" << i << "] = ";
cin >> a[i];
if (i<size-1)
Input(a, size, i+1);
else
cout << endl;
}


int negative(int *a, const int size, int i) {
  if (i == size)
    return 0;
  else
if (a[i] < 0)
  return 1 + negative(a, size, i + 1);
else
return negative(a, size,  i + 1);
}



int main(){
const int n = 5;
int a[n];
Input(a, n, 0);
int num = negative(a, n, 0);
cout << "кількість відʼємних чилел масиву:  " << num << endl;
return 0;
}