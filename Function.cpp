#include<iostream>
#include<cmath>
using namespace std;




void myFirstFunc(string firstName, int age);

int main()
{
    myFirstFunc("Chales", 25);
    myFirstFunc("Arthur", 21);
    myFirstFunc("Josef", 68);
  

   
    return 0;

}

void myFirstFunc(string firstName, int age){

    cout<< firstName<< " LecLerc. "<< age<< " years old\n";
}