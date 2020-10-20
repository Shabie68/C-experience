#include<iostream>
#include<string>
#include "name.h"
void name(){
  std::cout<<"Hello Shabie";

}

Library::Library(int mnumber){
  number = mnumber;

  std::cout<<mnumber;
}
Library::~Library(){
  std::cout<<"Obj destroyed";
}
bool Library::operator==(const Library & other) {
  return (number == other.number) ;
}
char Library ::getLetter(){
  na = 'A';

  return na;
}
