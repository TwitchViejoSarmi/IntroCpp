#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    VARIABLE SIZED ARRAYS CHALLENGE:
    
    Task:
        Consider an n-element array, a, where each index i in the array contains a reference to an array of k[i] integers (where the value of k[i] varies from array to array).
        
        Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.

    Input Format:

        The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
        
        Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
        
        Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array referenced by a[i]) for a query.

    Constraints:
        1 <= n <= 10^5
        1 <= q <= 10^5
        1 <= k <= 3*10^5
        n <= sumatory of k <= 3*10^5
        0 <= i < n
        0 <= j < k

    Output Format:

        For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.
*/

//On this time, i'll solve it using vectors.
int main() {
    int n, q, k; //Declare the variables that recieves the values given by the user.
    cin >> n >> q; //Read the first line of the input format.

    vector<vector<int>> rows(n); //Declare a vector of type vector of type integer with the size given, whichs means that the vector will contain "sub-vectors".

    //Use a loop to add the new vectors.
    for (int a = 0; a < n; a++) {
        cin >> k; //Read the size of the rows[a] sub-vector.
        vector<int> columns(k); //Declare the sub-vector to add.

        //Use a loop to modify the values on the columns vector.
        for (int b = 0; b < k; b++) {
            cin >> columns[b]; //Read and modify the columns[b] integer.
        }
        rows[a] = columns; //Add the columns vector to the rows[a].
    }

    //Declare the arrays which contains the "coordinates i and j" of the integers to search.
    int i[q];
    int j[q];

    //Use a loop to modify the arrays.
    for (int a = 0; a < q; a++) {
        cin >> i[a] >> j[a]; //Read and modify each coordinate's array.
    }

    //Use a loop to print the integers found separated by an enter.
    for (int a = 0; a < q; a++) {
        cout << rows.at(i[a]).at(j[a]) << endl;
    }
    return 0;
}
