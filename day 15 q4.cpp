  // moves zeroes to end 

  #include<iostream>
  using namespace std ;

  int main (){
     int arr [] = {1,0, 2,0,3,4} ;
     int n = 6  ;
     int index = 0 ;
     for(int i =0 ; i<n ;  i++){
        if(arr[i] != 0) {
            arr[index] = arr[i] ;
            index ;

        }
     }
     while(index<n){
         arr[index] = 0 ;
         index++ ;
     }
     for(int i= 0 ; i<n ; i++){
        cout<< arr[i] << " " ;
     }

  }