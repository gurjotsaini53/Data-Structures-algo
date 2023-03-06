#include <iostream>
using namespace std;

struct Student{
int roll;
char name[50];
char dept[50];
char address[100];
// 4+50+50+100
};
int main(){
  struct Student Gurjot;
cout<<sizeof(Gurjot)<<endl;
}