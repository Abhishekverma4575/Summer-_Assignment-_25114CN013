    // alphabets pattern 

    #include<iostream>
    using namespace std ;

    int main (){
        cout<< " enter the row" ;
        int  n ;
        cin>> n ;

        for (int i = 0; i <=n; i++)
        {
            char ch = 65 ;
            for(int j=1 ; j<=i ; j++){
                cout<< ch ;
                ch++ ;
            }
            cout << endl;
        }
        return 0;
    }