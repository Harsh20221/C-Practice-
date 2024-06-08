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
        list1.push_front(45);//? This push front pushes to the front
        list1.pop_back();
        list1.push_front(66);
        list1.pop_front();//? This function pops from front
        list <int> ::iterator it =list1.begin();
        for ( it ; it!=list1.end();it++){
            cout<<*it<<endl; //? This is how you display Linked list using an iterator
        }  //? This is how you define a for loop using an iterator

};