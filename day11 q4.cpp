  /// function of factorial 

  #include<iostream>
  using namespace std ;

  int factorial (int a){
      int  fac = 1 ;
      for (int i = 1 ; i<=a ; i++){
        fac = fac * i ;
    
      }
      return fac ;
  }
    int main () {
         cout<< "Enter the number" ;
         int n ;
         cin>> n ;
          factorial(n) ;
          cout<< factorial(n) ;
    }