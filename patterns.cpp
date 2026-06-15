#include <iostream>
using namespace std;

// Pattern 1: Solid Square of Stars
void print1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 2: Right-Angled Triangle of Stars
void print2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 3: Right-Angled Triangle of Numbers
void print3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 4: Right-Angled Triangle of Repeating Row Numbers
void print4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

// Pattern 5: Inverted Right-Angled Triangle of Stars
void print5(int n) {
    for(int i = 1; i <= n; i++) {
        // n - i + 1 gives the exact decreasing count needed per row
        for(int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6: Inverted Right-Angled Triangle of Numbers
void print6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 7: Pyramid of Stars
void print7(int n) {
    for(int i=1;i<=5;i++)
    {  // space
        for(int j=1;j<=n-i;j++)
        cout << " ";
        // star
         for(int j=1;j<=2*i-1;j++)
        cout << "*";
        //space
        for(int j=1;j<=n-i;j++)
        cout << " ";
        cout << endl;
    }
}

// Pattern 8 : Inverted Pyramid Of Stars
void print8(int n) {
    for(int i=1;i<=5;i++)
    {  // space
        for(int j=0;j<i-1;j++)  // 4 space i-1 = 4 i.e i = 5
        cout << " ";
        // star
         for(int j=9;j>=2*i-1;j--) // 2i-1 odd numb 
        cout << "*";
        //space
        for(int j=0;j<i-1;j++)
        cout << " ";
        cout << endl;
    }
}

// Pattern 9 : Pyramid on inverted Pyramid



int main() {
    int t;
    cout << "Enter number of test cases (t): ";
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cout << "Enter size (n): ";
        cin >> n;
        
    
        print8(n); 
    
        cout << endl; // Blank line to separate outputs
    }
    
    return 0;
}