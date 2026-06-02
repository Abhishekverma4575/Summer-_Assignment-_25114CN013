    // check a number palindrome or not

    #include<iostream>
    using namespace std ;

    int main (){
        cout<< " Enter the number " ;
        int n ;
        cin>> n ;
        int original_n =n ;
        int sum = 0 ;

        while(n>0){
            int r = n%10 ;
            sum = (sum* 10 ) + r ;
            n=n/10 ;
        }
        if ( sum == original_n){
        cout << " number is palindrome" ;
        }
        else{
            cout<< " number is not palindrome  " ;
        }
        return 0 ;
    }