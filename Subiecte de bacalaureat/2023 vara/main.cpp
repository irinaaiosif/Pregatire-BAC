#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");
/// ofstream fout("out.txt");

/*

    BAC 2023

    SUBIECTUL I

    1. d
    2. c
    3. c
    4. b
    5. a

    SUBIECTUL II

    1. a) 9752
       b) 321, 874
       c)
    2. mare-rau, ocean-ploaie-rau
    3. struct lalea{
        char denumire[21];
        struct stoc{
            int nrFire;
            int pretFir;
        };
    }f[11];

*/

namespace cerinta1
{
    float calculraport(int n)
    {
        float raport=0;
        for (int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                raport=raport+i;
                if(i!=n/i)
                    raport=raport+n/i;       
            }
        }
        return raport/n;
    }
    int abundent (int n)
    {
        float raport=calculraport(n);
        for (int i=n-1; i>=1; i--)
            if (calculraport(i)>raport)
                return 0;
        return 1;
    }
}

namespace cerinta2
{
    int main()
    {
        int ns, np, a[1001][51];
        cin >> ns >> np;
        for (int i=1; i<=ns; i++)
            for (int j=1; j<=np; j++)
                cin >> a[i][j];
        int maxim, pozitie;
        for (int i=1; i<=ns; i++)
        {
            maxim=a[i][1];
            for (int j=1; j<=np; j++)
                if(a[i][j]>maxim)
                {
                    maxim=a[i][j];
                    pozitie=j;
                }
            cout << i << ':' << pozitie << " ";
        }

        return 0;
    }
}

namespace cerinta3
{
    int main()
    {
        int x, nr, prefixe[100]={0}, sufixe[100]={0};
        while (fin >> x)
        {
            if (x>99)
            {
                nr=x%100;
                sufixe[nr]++;
                while (x>99)
                    x=x/10;
                nr=x;
                prefixe[nr]++;
            }
        }
        
        for (int i=10; i<=99; i++)
            if (prefixe[i]==sufixe[i] && prefixe[i]!=0)
                cout << i << " ";

        fin.close();
        return 0;
    }
}

int main()
{
    /*cout << cerinta1::abundent(6);
    cout << cerinta1::abundent(7);
    cout << cerinta1::abundent(8);
    shift alt A 
    duplicat- shift alt UP
    */
    ///cerinta2::main();
    cerinta3::main();
    return 0;
}