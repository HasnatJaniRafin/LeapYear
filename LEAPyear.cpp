//Leap year programming

#include <iostream>
using namespace std ;
int main ()
{
    int y ;
    cout << " enter any year : " ;
    cin>>y ;

    if ( y%4 ==0 && y%100!=0){
        cout <<" Leap Year " ;
    }
    else if ( y%400 ==0 ) {
        cout << " Leap Year " ;
    
    }
    else {
        cout << " Not Leap Year " ;
    }
    cout <<endl ;
    

 

    return 0 ;

}
