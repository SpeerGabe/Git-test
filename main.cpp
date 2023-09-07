
#include <iostream>

using namespace std;

int sum(int num);

int main() {
  cout<<"Enter a whole number: "<<endl;
  int num=0;
  cin>>num;
  cout<<sum(num)<<endl;
  return 0;
}


int sum(int num){
  int count=0;
  int value=0;
  while(count<=num){
    value+=count;
    count++;
  }
  return value;
}
