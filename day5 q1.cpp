  // check to a number is perfect or not 

  #include<iostream>
  using namespace std ;

   int main (){
    cout<< " Enter the number "  ;
    int n ;
    cin>> n ;
    int sum =0 ;
    for (int i =1 ; i<=n/2 ; i++){
        int temp =n ;
        if(temp%i == 0){
            sum = sum + i ;
        }
    }
    if (sum == n){
        cout<< n << " is a perfect a number" ;
    }
    else {
        cout<< n << " is not a perfect number " ;
    }
    return 0 ;

   }