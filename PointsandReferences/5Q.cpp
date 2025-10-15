// Count vowels in a string using pointers.

#include <iostream>
#include <string>
using namespace std;

int Noof_vowel(string *x)
{
    string *s = new string("aeiouAEIOU");
    int i = 0;
    int count = 0;
    while((*x)[i])
    {
        for(int j=0; j<s->size(); j++)
        {
            if((*x)[i] == (*s)[j])
                count++;
        }
        i++;
    }
    delete s;
    return count;
}

int main()
{
    string x;
    cout<<"Enter any string to know its vowels count: ";
    cin>>x;
    cout<<"Vowels count in string = "<<Noof_vowel(&x);
    return 0;
}