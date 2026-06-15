#include <iostream>
using namespace std;

void sum(int a,int b){
cout << "the sum of a and b is : " << a+b << endl;
}


int main() {
int a,b;
cout << "enter the value of a and b : " << endl;
cin >> a >> b;
sum(a,b);
}