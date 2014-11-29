/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file constains the stack class that inherits its functionality from list.h.
*/

#include "stack.h"

Stack::Stack(){               //constructs instance of stack

   n = 0;
   p.resize(n);

}

bool Stack::empty(){          //returns true if the stack is empty

   if(n==0) return true;
   else return false;

}
bool Stack::full(){           //returns true if the stack is full

   if (n==100) return true;
   else return false;

}
void Stack::store(int value){ //pushes value to the back of the stack

   p.push_back(value);
   n++;

}
int Stack::retrieve(){        //pops values from the back of the stack and returns it

   int a = p.back();
   p.pop_back();
   n--;
   return a;

}
