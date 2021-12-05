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
    unsigned short x ;
    unsigned short check;

    printf("Enter x ");
    scanf("%d",&x);

    printt(x);
    int cur_count = 0, max_count = 0;
    while(true)
    {
        if(x == 0)
        {
            if(max_count == 0)
                max_count = cur_count;
            break;
        }


        check = x & 1;
        printt(check);

        if(check == 1)
            cur_count ++;
        else
        {
            if(cur_count > max_count)
                max_count = cur_count;

            cur_count = 0;
        }

        x = x >> 1;

    }
    printt(x);

    cout << "max number = " << max_count << endl;
    
}