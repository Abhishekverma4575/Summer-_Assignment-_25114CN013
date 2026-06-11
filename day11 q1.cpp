   // function of find sum 

#include<iostream>
using namespace std ;

    int sum( int a , int b){
         int ans = a+b ;
         return ans ;
    }
    
    int main (){

    cout<< "Enter the number " ;
    int x, y ;
    cin>> x >> y ;
      sum(x , y) ;
      cout<< sum(x,y) ;

    }