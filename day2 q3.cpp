   // 

   #include<iostream>
   using namespace std ;

   int main (){
    cout << " enter the number " ;
    int n ;
    cin>> n ;
     int p =1 ;
     while (n>0){
        int c = n%10 ;
        p = p*c ;
        n = n/10 ;
     }
     cout<< p ;
     return 0 ;
   }