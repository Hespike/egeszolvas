#include <iostream>

using namespace std;

int main(){
    int number;
    while ( cin >> number)
    {
        
        if( 42 == number )
        break;
        
        cout << number << endl;
    }

    return 0;
}
