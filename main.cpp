#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
animal::animal();
    animal(string n , int a , bool i ){
    
    name = name ;
    age = age ;
    isHungry = i ;
    
    
    
    
    }
  animal::  ~animal();
   animal:: void display(){
   cout << name <<'(' << ""<< age << ',' << getisHungry() << endl ; 
   
   
   
   };
   animal:: void feed();
   animal:: void setname ();
   animal:: string getname();
   animal:: void setage ();
    animal::int getage();
    animal::void setishungry ();
    animal::bool getisHungry();
    
    
    
    
    
    
    
    
      visitor :: void displayinfo(){
      
      cout << "visitor info :" <<endl ;
      cout << "name : "<<  getvisitorname();
      
      
      }


// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
