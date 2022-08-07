#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    INPUT AND OUTPUT CHALLENGE:
    
    Task:
        Read  numbers from stdin and print their sum to stdout.

    Input Format:

        One line that contains  space-separated integers: a, b, and c.

    Constraints:
        1 <= a, b, c <= 1000

    Output Format

        Print the sum of the three numbers on a single line.
*/

int main() {
    int a, b, c; //Declare the three variables required.
    cin >> a >> b >> c; //Read each value given on console by the user for the three variables.
    cout << a + b + c << endl; //Show up on console the result of their sum.
    return 0;
}