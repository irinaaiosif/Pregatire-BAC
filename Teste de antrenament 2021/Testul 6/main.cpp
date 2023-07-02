#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("bac.txt");

namespace cerinta1
{
   void numar (long n, int c, long &m)
   {
        long nr=0, p=1;

        while (n!=0)
        {
            if(n%10!=c)
            {
                nr=n%10*p+nr;
                p=p*10; 
            }
            n=n/10;
        }

        if(nr==0)
            m=-1;
        else
            m=nr;
   } 
}
int main ()
{
    long m;
    cerinta1::numar(55, 5, m);
    cout << m;
    return 0;
}