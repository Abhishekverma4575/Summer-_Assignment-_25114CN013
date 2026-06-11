   // function to find maximum

   #include<iostream>
   using namespace std ;

int maxi (int a , int b ){
     int ans = max(a , b) ;
   return ans  ;
}

  int main (){
    cout<< "Enter the number " ;
    int x, y ;
    cin>> x >> y ;
     maxi(x,y) ;
     cout<< maxi(x,y ) ;
     return 0 ;
  }
