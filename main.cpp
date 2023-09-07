
#include <iostream>

using namespace std;

int sum(int num);
int product(int num);

int main() {
  cout<<"Enter a whole number: "<<endl;
  int num=0;
  cin>>num;
  cout<<sum(num)<<endl;
  cout<<product(num)<<endl;
  return 0;
}


int sum(int num){
  int count=1;
  int value=0;
  while(count<=num){
    value+=count;
    count++;
  }
  return value;
}

int product(int num){
  int count2=1;
  int value2=1;
  while(count2<=num){
    value2*=count2;
    count2++;
  }
  return value2;
}
