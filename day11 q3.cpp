   //function to check prime 

   #include<iostream>
   using namespace std ;

   void prime ( int a){
       int count = 0 ;
      for( int i =2 ; i<=a/2 ; i++) {
        if(a%i == 0){
            count++ ;
        }
}
        if(count == 0) { 
            cout<< " number is prime" ;
        }
        else{
            cout<< " number is not prime " ;
        }
   }
      int main (){
         cout<< " enter the number " ;
         int n ;
         cin>> n ;
          prime(n) ;

      }