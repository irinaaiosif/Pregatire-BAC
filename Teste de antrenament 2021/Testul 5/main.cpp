#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

namespace cerinta1
{
    int identice (long n)
    {
        int c=n%10;
        while (n>0)
        {
            if(n%10!=c)
                return 0;
            n=n/10;
        }
        return 1;
    }
}

namespace cerinta2
{
    int main()
    {
        int a[101][101], m, n;
        cin >> m >> n;
        for (int i=1; i<=m; i++)
            for (int j=1; j<=n; j++)
                a[i][j]=(i*j)%10;
        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        return 0;
    }
}

namespace cerinta3
{
    int main()
    {
        int n, x, maxim;
        fin >> n;
        fin >> x;
        maxim=x;
        cout << x << " ";
        for (int i=2; i<=n; i++)
        {
            fin >> x;
            if(x>maxim)
                maxim=x;
            cout << maxim << " ";
        }
        fin.close();
        return 0;
    }
}

int main()
{
    ///cerinta2::main();
    cerinta3::main();

    return 0;
}
