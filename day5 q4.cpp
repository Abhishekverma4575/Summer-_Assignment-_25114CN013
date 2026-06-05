// find greatest prime factor

#include<iostream>
using namespace std ;

int main (){
    cout<< " Enter the number"  ;
    int n ;
    cin>> n ;
     int prime  = 0;
    for(int i =1 ; i<=n ; i++){
        int count = 0 ;
        int d = 1;
        for(int d =1; d<= i ;d++) {
            if (i%d ==0){
            count++ ;
            }
            if(count>2){
                break ;
            }
        }
        if(count ==2){
            if(n%i ==0){
                prime = i;
            }
        }
    }
    cout<< prime ;
    return 0 ;
}