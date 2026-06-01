 // fictorial of number
   
 #include<iostream>
 using namespace std ;

  int main (){
    cout<< " enter the  number" ;
    int n ;
    cin>> n ;
     int i =1 , fic =1;
     while (i<=n){
        fic = fic * i ;
        i++ ;
     }
     cout<< " Fictorial of number is  "   << fic ;
     return 0;

  }