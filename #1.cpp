/*
#1 CODING CHALLANGE 

[ Write A Program Which Will Take One String As Input And
  Every Unique Character With Incremented Number And
  Display These Serial Numbers ]


```Length Of The String Should Be Less Than 10 OR The Non Repeated Alpha Should Be Less Than 10```

# Test Cases
INPUT           OUTPUT
"ABABCABD"      12123124
"NEXTGEN"       1234521 
"AAAAAAAA"      11111111
"HmmM"          1223
"ABCD"          1234
"no5"           Error
-
-
-down#to#code
- 
- 
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-Try It Before Seeing Code..
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
#did u tried....
-
-
-
-
-
-
-
-
-
-
-
-

-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
-
*/
#include <iostream>
#define SIZE 10
using namespace std;
int main() 
{
  int t;
  cin >> t ; // test cases 
  while(t)
  {
    string str;
    int char_search[SIZE];
    int count = 0;
    int length = 0;
    int k = 0;
    cin >> str;
    for(;k<str.length();k++) // Check for Error
    {
      int ascii = int(str[k]);
      if(ascii >= 65 && ascii <= 122)
      {
        length ++;
      }
      else
      {
        cout << "Error";
        break;
      }
    }
    if(length == str.length()) // check for No error 
    {
      for(int i=0; i<str.length(); i++)
      {
        int ascii = int(str[i]);
          int j = 0;
          for(; j < count; j++)
          {
            if(char_search[j] == ascii) // finding repeated alpha
            {
              cout << j+1;
              break;
            }
          }
          if(j == count) // adding non repeated alpha
          {
            char_search[count] = ascii;
            count ++;
            cout << count;
          }
      }
    }
    cout << endl;
    t--;
  }
  return 0;  
}