#include <iostream>
#include <vector>
#include "name.h"
int main(int argc, char const *argv[]) {




  std::vector<Library> libs{ Library(11), Library(42), Library(400) };


  std::cout << "initial capacity of Library Vector is " <<libs.capacity()<<std::endl;
  std::cout << "initial size of Library Vector is " <<libs.size()<<std::endl;
  libs.push_back((Library(143)));
  std::cout << "initial capacity of Library Vector is " <<libs.capacity()<<std::endl;
  std::cout << "initial size of Library Vector is " <<libs.size()<<std::endl;

  int name = (long) &(libs[4]) - (long) &(libs[0]);
  std :: cout << "Difference is " << name << std :: endl;

  /*int books[10] = {12, 2, 4, 6, 8, 9, 4, 6, 3, 5};
  std::cout<<"Size of integer is "<<sizeof(int);
  int offset = (long)&(books[8]) - (long)&(books[2]);
  std::cout << "There is differrenc of " << offset<< std :: endl;
  /* code */
  Library target = Library(42);
  for (unsigned i = 0; i < libs.size(); i++) {
    if (target == libs[i]) {
      std::cout <<"Target found at "<<i<<std::endl;
    }
  }

  return 0;
}
