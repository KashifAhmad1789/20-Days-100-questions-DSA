#include <iostream>
#include <string.h>
using namespace std;

void String_compression01(string str)
{
    int i = 0;
while(i<str.length()){
while (i < str.length() - 1 && str[i] == str[i + 1])
        {
            i++;
        }
        cout << str[i];
        i++;
  }
  cout<<endl;
}
void String_compression02(string str)
{
    int i = 0;
    while (i < str.length())
    {
        int cnt = 1;
        while (i < str.length() - 1 && str[i] == str[i + 1])
        {
            i++;
            cnt++;
        }
        cout << str[i];
        if (cnt > 1)
            cout << cnt;
        
        i++;
    }
}

int main()
{
    string str;
    getline(cin, str);
    String_compression01(str);
    String_compression02(str);
}