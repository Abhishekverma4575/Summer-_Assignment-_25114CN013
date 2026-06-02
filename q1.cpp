// sum of first N natural number 

 #include <iostream>
 using namespace std ;
  
int main () {
    cout<< " enter the number upto to sum" ;
    int n;
    cin>> n;
    int sum =0 ;
    int i=1;
    while( i<=n){
        sum=sum +i ;
        i++;
    }
    cout<< " sum is " << sum ;
    return 0;
}