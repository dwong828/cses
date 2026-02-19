#include <bits/stdc++.h>
using namespace std;
 /*
 Consider an algorithm that takes as input a positive integer n. 
 If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three 
 and adds one. The algorithm repeats this, until n is one. 
 
 Your task is to simulate the execution of the algorithm for a given value of n.
*/
int main() {
	long num;
    cin >> num;
    
    cout << num << " ";
    while (num != 1){
        if (num%2 == 0){
            num /= 2;
        }
        else {
            num = num * 3 + 1;
        }
        cout << num << " ";
    }
    
}

