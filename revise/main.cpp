#include <iostream>
#9include<string.h>

using namespace std;

int main()
{
    /*string a,b;
    string c;
    cin>>a>>b;
    c=a+b;
    cout<<c;*/
    //you should do it in another way for any less no of characters.
    char a[100],b[100],c[200];
    cin>>a>>b;//input strings a and b as character arrays.
    c=strcat(a,b);//concatenate these strings
    cout<<c;
    
    
    
    return 0;
}
