#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    ARRAYS CHALLENGE:
    
    Task:
        Given and array of N integers, the challenge is print the integers in the reverse order.

    Input Format:

        The first line of the input contains N,where N is the number of integers.The next line contains N space-separated integers.

    Constraints:
        1 <= N <= 1000
        1 <= A[i] <= 10000, where A[i] is the i th integer in the array.

    Output Format:

        Print the N integers of the array in the reverse order, space-separated on a single line.
*/

int main() {
    int N, num; //Declare N for the size of the array and num to read each number that will be added to the array.

    cin >> N; //Read the size of the array given by the user.

    int arr[N]; //Declare the array once the program knows the size of it.

    //Use a loop to add the integers to the array.
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; //Read each integer typed by the user.
    }

    //Use a loop to traverse the array backwards.
    for (int i = N - 1; i > -1; i--) {
        cout << arr[i] << " "; //Print each integer of the array space-separated.
    }

    return 0;
}