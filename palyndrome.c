bool isPalindrome(int x){

long long int n=x;
long long int rev=0;
long long int r;

if(x<0)
{
    return false;
}
while(x)
{
    r=x%10;
    rev=(rev*10)+r;
    x=x/10;
}

if(rev==n)
{
    return true;
}
return false;
}
