// fibonacci series 

 #include<iostream>
 using namespace std ;

 int main (){
    cout<< " Enter the number " ;
    int n ;
    cin>> n ;
    int count ;
    int a = 0 ;
    int b = 1 ;
    if(n ==1){
        cout<< a ;
    } 
    else if( n == 2){
        cout<< b ;
    }
   for (int i = 3 ; i<=n ; i++){
        count = a + b ;
        if ( i == n){
            cout<< count ;
        }
     a =b ;
      b = count ;
   }
   return 0 ;
 }
