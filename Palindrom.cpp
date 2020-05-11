// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool is_string_palindrome(string str)
{
    // Add your code below this line. Do not modify any other code.                   
int i;
for(i=0;i < str.length()/2 ;i++)
   {
    if (str[i] != str[str.length()-i-1])
     return false;
   }
    return true;
    // Add your code above this line. Do not modify any other code.
}
