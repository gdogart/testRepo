#include <iostream>
#include <string>
using namespace std;

int main()
{

   string s;
   cout << "Hello World" << endl;
   cout << "What is Your Name?" << endl;
   cin >> s;
   cout << "Well, " + s + " This is a Test Repo" << endl;
   cout << "GET OUT!" << endl;
   cin.get();
   cin.ignore(1000, '\n');



}
