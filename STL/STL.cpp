#include<iostream>
#include"Customized_STL.h"
using namespace std;

int main()
{
   SinglyLL <int> * obj1 = new SinglyLL<int>();
 
   obj1->InsertFirst(20);
   obj1->InsertFirst(30);
   obj1->InsertFirst(40);
   obj1->InsertFirst(50);
   
   obj1->InsertLast(10);  
   obj1->Display();
   
   return 0;
}

