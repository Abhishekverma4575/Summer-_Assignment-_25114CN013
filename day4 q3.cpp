  // check a number is armstong or not 
   
  #include<iostream>
  #include<math.h>
  using namespace std ;

  int main (){
    cout<< " Enter the number " ;
    int n ;
    cin>> n ;
    int temp1 = n;
    int temp2 =n ;
    int sum = 0;
    int p = 0;
    while(temp1>0){
        temp1 =temp1/10 ;
        p++ ;
    }
    while(temp2>0){
int r = temp2%10 ;
   sum = sum + round(pow( r , p)) ;
   temp2 = temp2/10 ;
    }
    cout<< sum;
    if (sum == n)
    cout<< "  Number is Armstrong " ;
    else {
        cout<< " Number is not Armstrong" ; 
    }
    return 0 ;
}