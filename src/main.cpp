#include <stdio.h>
#include <iostream>
#include <PythonUltils.h>

using namespace std;

int main(int argc, char* argv[]) {
    // Example usage of Singleton

    TestFunction();
    PyExecString("print('Hello from Python!')");
    PyExecFile("C:/Users/thang/Documents/GitHub/LeetdvnUltils/PythonLibrary/scripts/test.py");
    cout << "leetdvn : Hello, World!" << endl;
    return 0;
}

