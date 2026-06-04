// fibonacci series 

 #include<iostream>
 using namespace std ;

 int main (){
    cout<< " Enter the number " ;
    int n ;
    cin>> n ;
    int count ;
    int a = 0 ;
    int b = 1 ;
    cout<< " fibonacci series " << endl ;
   cout<< a << " " << b << " " ;
   for (int i = 3 ; i<=n ; i++){
        count = a + b ;
        cout << count << " " ;
     a =b ;
      b = count ;
   }
   return 0 ;
 }
