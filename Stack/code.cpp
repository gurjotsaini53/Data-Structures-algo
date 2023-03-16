#include <iostream>
using namespace std ; 

#define N 100 ; 
class stack{
     public : 
     int *arr   ; 
     int top ; 

     stack(){
     
     int arr[100] ; 
         top  = -1  ;

     }

     void push(int val){
         if (top == (100 - 1))
         {
             cout<<"overflow"<<endl;
             return ; 
         }

         top++;
         arr[top] = val ; 
     }

     void pop(){
         if (top==-1){
cout<<"underflow -> no element present in the stack"<<endl;
return  ; 
         }

         top-- ; 

     }

     int Top(){
         if (top==-1){
             cout<<"underflow -> no element present in the stack "<<endl ; 
             return -1  ; 
         }

         return arr[top] ; 
     }

     bool empty(){
         if(top==-1)
         return true; 
    
    else
    return false; }
};  
int main(){


stack s1 ; 

char ch[100] ; 
      
          cin.getline(ch,100) ; 
          int i = 0  ;  
          while(ch[i]!='\0') {  
              if (ch[i]=='('){
                  s1.push('(')  ; 
              }




              else if (ch[i]==')'){
                  if(s1.top==-1){
                      cout<<"Unbalanced "<<endl;
                      
                      return 0 ;
                  }
                  else{
                      s1.pop();  
                  }
              }

              i++ ; 
          }

          if (s1.top==-1){
              cout<<"balanced"<<endl;
          }
          else if (s1.top!=-1){
              cout<<"unbalanced"<<endl;
          }
     
        


          

}