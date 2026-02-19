#include <bits/stdc++.h>
using namespace std;

/*
You are given all numbers between 1,2,\ldots,n except one. 
Your task is to find the missing number.
*/

void math_solution(){
	long num;
    cin >> num;

    int next;
    long long sum=0;
    int i;
    for (i=1; i<num; i++){
        cin >> next;
        sum += next; 
    }

     long long target_sum = num * (num + 1) / 2;
    // cout << "num: " << num << endl;
    // cout << "target sum: " << target_sum << endl;
    // cout << "sum: " << sum << endl;
    cout << (target_sum - sum) << endl;

}

void vector_solution(){
    int num;
    cin >> num;

    vector<bool> seen(num+1);
    for (int i=1; i<num; i++){
        int x;
        cin >> x;
        seen[x] = true;
    }
    for (int i=1; i<num; i++){
        if (!seen[i]){
            cout << i;
        }
    }


}


int main() {
//    math_solution();
    vector_solution();
}

