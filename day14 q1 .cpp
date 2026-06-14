  // linear search

  #include<iostream>
  using namespace std ;

  int main () {
    int n , key ;
    cout<< " enter size" ;
    cin>> n ;

    int arr [n] ;
    cout<< " enter the elements " ;
    for(int i = 0 ; i<n ; i++){
        cin>> arr[i] ;
    }
    cout<< "Enter the element to search " ;
     cin>> key ;
     for(int i = 0 ; i<n ; i++){
    if(arr[i] == key) {
        cout<< " Element found at position " << i+1 ;
    }
     }
     cout<< "element not found" ;
     return 0 ;
  }