#include<iostream>
#include<string>
using namespace std;
int main ()
{
    char str[100], temp;
    int i, j;
    cout << "Enter a string which is to be reversed: ";
    gets(str); 
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\n\n Reversed string is = :"<< str;
    return 0;
}
