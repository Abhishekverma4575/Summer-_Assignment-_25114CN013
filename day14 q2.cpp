   // frequency of an element 
   #include<iostream>
   using namespace std ;

   int main (){
     int n ,  key , count =0 ;
 int arr[n] ;
   for(int i =0 ; i<n ; i++)
   cin>> arr[i] ;

   for(int i=0 ; i<n ; i++){
    if(arr[i] == key)
    count++ ;
   }
   cout<< "frequency =" << count ;
   }