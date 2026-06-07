 // recursive sum of digits 

 #include<iostream>
 using namespace std ;

 int sum (  int digit) {
    int plus = 0 ;
    while (digit >0){
        int r = digit %10 ;
        
        plus = plus + r ;
        digit = digit /10 ;
    }
    return plus ;
}


 int main (){
    cout<< " Enter the digits " ;
    int digit ;
    cin>> digit ;
     cout<< sum( digit) ;
     return 0;
     
 }