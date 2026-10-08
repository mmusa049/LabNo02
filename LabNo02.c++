git #include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    cout << "My name is John Doe" << endl; // Replace with your real name
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    cout << "Name: John Doe" << endl;
    cout << "Roll No: CS-2026-001" << endl;
    cout << "Course: Software Construction" << endl;
    cout << "Semester: 5th" << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    cout << "*************************" << endl;
    cout << "     Hello Students      " << endl;
    cout << "*************************" << endl;
    return 0;
}





/*
 * =====================================================================
 * File Name: task5.cpp
 * Author: [Your Name]
 * Roll Number: [Your Roll Number]
 * Course: Software Construction
 * Lab: Lab 2 - Introduction to C++ Programming & Git
 * Description: Demonstrates proper indentation, single-line/multi-line 
 *              comments, and interactive I/O using cin and cout.
 * =====================================================================
 */

#include <iostream>
using namespace std;

int main() {
    // Variable declarations for user input
    int num1 = 0;
    int num2 = 0;
    int totalSum = 0;

    /*
     * Multi-line comment block:
     * Prompt the user to enter two integer values via the console.
     * Store the inputs into num1 and num2 using cin.
     */
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum of the user-provided inputs
    totalSum = num1 + num2;

    // Display the formatted results back to the user
    cout << "\n--------------------------" << endl;
    cout << " First Number entered: " << num1 << endl;
    cout << " Second Number entered: " << num2 << endl;
    cout << " Total Sum: " << totalSum << endl;
    cout << "--------------------------" << endl;

    // Return 0 signals successful program termination to the OS
    return 0;
}