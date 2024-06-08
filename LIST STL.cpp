#include <iostream>
#include <list>
using  namespace  std;

// Created by harsh on 08-06-2024.

//* This File Contains the code for Linked   list Implimentation Uisng STL


list <int> list1(10); ///? THis will create a linked list of size = 10

int main (){

    list1.push_back(33);
     list1.push_back(34);
      list1.push_back(35);
       list1.push_back(36);
        list1.push_back(37);
        list <int> ::iterator it =list1.begin();
        for ( it ; it!=list1.end();it++){
            cout<<*it<<endl; //? This is how you display Linked list using an iterator
        }  //? This is how you define a for loop using an iterator

};