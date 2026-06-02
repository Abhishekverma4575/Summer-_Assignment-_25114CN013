 // reverse of number 

 #include<iostream>
 using namespace std ;

 int main (){
    int n ;
    cout<< " Enter the number " ;
    cin>> n ;
    int  c;
    while (n>0){
        c = n%10 ;
        cout<< c ;
        n = n/10 ;
    }
    return 0 ;
 }