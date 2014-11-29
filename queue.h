/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file contains the definition of the queue class.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

class Queue:public list{
   public:
   Queue();

   bool empty();
   bool full();
   void store(int);
   int retrieve();

};


#endif
