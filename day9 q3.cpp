  // print pattern 

  #include<iostream>
  using namespace std ;

  int main (){
    cout<< " enter the n " ;
    int n;
    cin>> n ;
     for (int i = 1 ; i<=n ; i++){
        char ch = 65 ;
        for(int j= 1 ; j<=i ; j++){
            cout<< ch ;
            ch++ ;
        }
        cout<< endl;
     }
  }
   