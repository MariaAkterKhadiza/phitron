#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{   int x;
    cin >> x;
    switch(x)
    {
        case 'a':
           cout << "vowel";
           break;
          case 'e':
            cout << " vowel";
            break;
            case 'i' :
            cout << "vowel";
            break;
            case 'o' :
            cout << "vowel";
            break;
            case 'u' :
            cout << "vowel";
            break ;
           
           default:
           cout<< "consonant";
    }

    return 0;
}