/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file contains the definition of the stack class.
*/

#ifndef STACK_H
#define STACK_H

#include "list.h"

class Stack:public list{
   public:
   Stack();

   bool empty();
   bool full();
   void store(int);
   int retrieve();

};


#endif
