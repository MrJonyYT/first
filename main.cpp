#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char c = s[0];
    if(c>=97 && c<=122)
    {
        c=c-32;
        cout << c;
    }else if(c>=65 && c<=90)
    {
        c=c+32;
        cout << c;
    }else
    {
        cout<<"nizya takoe, meow";
    }
}
