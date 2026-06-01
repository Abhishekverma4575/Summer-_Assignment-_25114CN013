   // check the number is prime or not 

   #include<iostream>
    using namespace std ;
     
    int main (){
        cout<< " enter the number " ;
        int n;
        cin>> n; 
        int i = 1 ;
        int count = 0 ;
        while (i<=n){
            if( n%i ==0 && n%n == 0){
               count++ ;
            }
            i++ ;
        } 
        if (count == 2){
            cout<< n << "  is prime " ;
        }
        else {
            cout<< n << "  is not prime " ;
        }
         return 0 ;
        
    }