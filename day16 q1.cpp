  // missing number  in array 

  #include<iostream>
  using namespace std ;

  int main (){
     int arr [] ={1,2,3,4,5} ;
     int n= 5;
     int  sum = n *( n+1)/2 ;
     int arrsum = 0 ;
     for(int i= 0; i<n-1 ; i++)
         arrsum+=arr[i] ;
         cout<< " misssing number is =" << sum - arrsum ;
         return 0 ;
  }