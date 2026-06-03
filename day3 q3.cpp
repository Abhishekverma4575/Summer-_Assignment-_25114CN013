   // find the gcd 

   #include<iostream>
   using namespace std ;

   int main (){
    cout<< " Enter the numbers" ;
    int a, b ;
    cin>> a ;
    cin>> b ;

     int g = 0;
     for (int i= 1; i<=a && i<=b ; i++){
        if(a%i == 0 && b%i == 0 ){
            g = i ;
        }
     }
     cout << " GCD is  " << g ;
     return 0 ;
   }