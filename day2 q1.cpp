   // summ of digits of number

   #include<iostream>
   using namespace std ;

   int main (){
    cout<< " enter the number  " ;
    int n;
    cin>> n ;
    int sum = 0 ;
    while(n>0){
        int c ;
        c  = n % 10 ;
        sum = sum +c ;
        n = n/10 ;
    }
    cout<< sum ;
    return 0 ;
     
   }