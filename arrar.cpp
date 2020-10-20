#include<iostream>

int main(int argc, char const *argv[]) {
  int arr[8] = {3,5,8,9,10,56, 67,54};
  int target = 9;
  for(int i=0;i<8;++i){
    int total = 8;

    if(target == arr[i]){
      std::cout<<"Target founf"<<i;
    }

  }
//  std::cout<<mid;
  return 0;
}
