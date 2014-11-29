/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file constains the queue class that inherits its functionality from list.h.
*/

#include "queue.h"

Queue::Queue(){  //construct instance of Queue

   n = 0;
   p.resize(n);

}

bool Queue::empty(){          //returns true if the queue is empty

   if(n==0) 
      return true;

   else return false;

}
bool Queue::full(){           //returns true if the queue is full

   if (n==100) 
      return true;

   else return false;

}
void Queue::store(int value){ //stores an integer at the front of the queue

   p.push_back(value);
   n++;

}
int Queue::retrieve(){        //retrieves the integer that is first in the queue and returns it
   
   int a = p.front();

   for(int i = 0; i < p.size() - 1; i++)
      p[i] = p[i+1];          //shift the queue to the front
   n--;

   return a;

}
