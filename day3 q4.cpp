 // lcm of numbers
 #include<iostream>
 using namespace std ;

 int main (){
    cout<< "Enter the numbers " ;
    int a, b;
    cin>> a >> b ;
    int max ;
    if ( a>b){
        max = a ;
    }
     else{
    max =b ;
}
       while( true) {
        if( max %a == 0 && max % b == 0){
            cout << " LCM  is " << max ;
            break ;
        }
        max ++ ;
       }
          return 0 ;
 }