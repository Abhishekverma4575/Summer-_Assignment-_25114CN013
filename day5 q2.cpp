   // check a number is strong or not 

   #include<iostream>
   using namespace std ;

   int main (){
cout<< " Enter the number " ;
int n ;
 cin>> n;

   int sum =0 ;
   int  temp =n ;
   while(temp>0){
    int r = temp%10 ;
    int fac =1 ;
    for (int i =1 ; i<=r; i++ ){
        fac = fac *i ;
    }
     sum = sum + fac ;
     temp= temp/10 ;
   }
   if(sum == n){
    cout << n << " is a strong number" ;
   }
   else {
    cout << n << "is not a strong number" ;
   }
   return 0 ;
   }