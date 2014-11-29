/*
Author: Tyler Arseneault
Date: December 8, 2014
Lab Assignment 6
Purpose: This file contains the definition of the list class that the stack and queue classes are derived from.
*/

#ifndef LIST_H
#define LIST_H

#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

class list {

protected:      

     vector <int> p;
     int n;   

public :

     list( ) 

     { 
       n = 100;
       p.resize(n);   

     }

     virtual bool empty() = 0;

     virtual bool full() = 0;

     virtual void store(int val) = 0;

     virtual  int retrieve() = 0;

};

#endif
