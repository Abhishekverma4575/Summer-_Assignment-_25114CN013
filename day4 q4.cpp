//  check armstrong number in range


#include<iostream>
  #include<math.h>
  using namespace std ;

  int main (){
    cout<< " Enter the number " ;
    int n ;
    cin>> n ;
   // int temp1 = n;
   // int temp2 =n ;
for (int i = 1; i<=n ; i++){
        int sum = 0;
    int p = 0;
    int temp1 = i ;
    int temp2 = i ;
    while(temp1>0){
        temp1=temp1/10 ;
        p++ ;
    }
    while(temp2>0){
int r =temp2%10 ;
   sum = sum + round(pow( r , p)) ;
   temp2 = temp2/10 ;
    }
    
    if (sum == i){
    cout<< i << " " ;
    }
    }
    return 0 ;
}
