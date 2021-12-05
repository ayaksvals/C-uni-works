#include <iostream>
#include <bitset>
#include <climits>
using namespace std;


void printt(unsigned short n)
{
    cout << bitset < sizeof(n) * CHAR_BIT > (n) << endl;
}

int main()
{
    unsigned int n, k;
    printf("Enter n and k ");
    scanf("%d %d",&n,&k);

    printt(n);
    printt(k);

    k = 1 << k ;
    k = ~ k;
    
    n = n & k ;

    printt(n);
    printt(k);

    printf("N в 16-му вигляді = %X N в 10-му вигляді = %d",n,n);

    
   
}


