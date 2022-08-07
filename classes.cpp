#include <iostream>
#include <sstream>
using namespace std;

/*
    CLASSES CHALLENGE:
    
    Task:
        You have to create a class, named Student, representing the student's details like: age (int), first_name (string), last_name (string) and standard (int). Create setter and getter functions for each element; that is, the class should at least have following functions:

        get_age, set_age
        get_first_name, set_first_name
        get_last_name, set_last_name
        get_standard, set_standard
        
        Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

    Input Format:

        Input will consist of four lines.
        The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
        The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
        The fourth line will contain an integer, representing the standard of student.

        Note: The number of characters in first_name and last_name will not exceed 50.

    Output Format:

        The code provided by HackerRank will use your class members to set and then get the elements of the Student class (yeah, i did the exercises from HackerRank).
*/

//Declare the class to use.
class Student {
    //Private part for the properties of the class.
    private:
        int age, standard;
        string first_name, last_name;
    //Public part for the methods that Student can use (getter, setter and to_string).
    public:
        int get_age() {
            return age;
        }
        void set_age(int a) {
            age = a;
        }

        string get_first_name() {
            return first_name;
        }
        void set_first_name(string str) {
            first_name = str;
        }

        string get_last_name() {
            return last_name;
        }
        void set_last_name(string str) {
            last_name = str;
        }

        int get_standard() {
            return standard;
        }
        void set_standard(int a) {
            standard = a;
        }
        
        string to_string() {
            string str = ""; //Declare the string
            stringstream ss, sh; //Declare the stringstreams to convert age and standard values.
            
            ss << age; //Add the age to the stringstream
            string age1 = ss.str(); //Declare a string to add the string stream.

            //The same process with the standard variable.
            sh << standard;
            string standard1 = sh.str();

            str = str + age1 + "," + first_name + "," + last_name + "," + standard1; //Add all the strings to the main string declared.
            return str;
        }
};

//This part was created by HackerRank.
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}