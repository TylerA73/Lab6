/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file tests out the queue and stack classes written in their respective cpp files.
*/

#include "queue.h"
#include "stack.h"

int main(void){

   Stack s;
   Queue q;
  
   /*-------------------*/
   /* Testing the stack */
   /*-------------------*/

   for(int i = 0; i < 100; i++)
      s.store(i);                   //loads the stack with values from 0 - 99

   if(s.full())                     //test to see if the stack is full
      cout << "The Stack is full" << endl << endl;
   else 
      cout << "The Stack is not full" << endl << endl;

   for (int i = 0; i < 10; i++)
      cout << s.retrieve() << " "; //retrieve and display the last 10 values in the stack

   cout << endl << endl;

   if(s.full())                    //test to see if the stack is full
      cout << "The Stack is full" << endl << endl;
   else 
      cout << "The Stack is not full" << endl << endl;

   if(s.empty())                   //test to see if the stack is empty
      cout << "The Stack is empty" << endl << endl;
   else
      cout << "The Stack is not empty" << endl << endl;

   for(int i = 0; i < 90; i++)
      s.retrieve();                //empties the stack

   if(s.empty())                   //test to see if the stack is empty
      cout << "The Stack is empty" << endl << endl;
   else
      cout << "The Stack is not empty" << endl << endl;

   /*-------------------*/
   /* Testing the Queue */
   /*-------------------*/

   for(int i = 0; i < 100; i++)
      q.store(i);                  //loads the queue with values from 0 - 99

   if(q.full())                    //test to see if the queue is full
      cout << "The Queue is full" << endl << endl;
   else 
      cout << "The Queue is not full" << endl << endl;

   for (int i = 0; i < 10; i++)
      cout << q.retrieve() << " "; //retrieve and display the first 10 values in the queue

   cout << endl << endl;

   if(q.full())                    //test to see if the queue is full
      cout << "The Queue is full" << endl << endl;
   else 
      cout << "The Queue is not full" << endl << endl;

   if(q.empty())                   //test to see if the queue is empty
      cout << "The Queue is empty" << endl << endl;
   else
      cout << "The Queue is not empty" << endl << endl;

   for(int i = 0; i < 90; i++)
      q.retrieve();               //empties the queue

   if(q.empty())                  //test to see if the queue is empty
      cout << "The Queue is empty" << endl << endl;
   else
      cout << "The Queue is not empty" << endl << endl;

   return 0;
}
