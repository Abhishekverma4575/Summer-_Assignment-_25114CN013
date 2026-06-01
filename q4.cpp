// coumt digit in number 

#include<iostream>
using namespace std ;
  
int main () {
    cout<< " enter the digit " ;
    int n ; 
    cin>> n ;
     int count =0 ;
     while (n>0){
        n=n/10 ;
        count++;
     }
     cout<< count ;
     return 0;
     
}