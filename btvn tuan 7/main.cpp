#include <iostream>
using namespace std;

//bài 1
typedef int MT[20][20];

void nhapmt(MT a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "nhap phan tu " << i << " " << j << ": ";
            cin >> a[i][j];
        }
    }
}

void inmt (MT a, int m, int n)
{
    cout << "ma tran chu nhat: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == n)
            {
                cout << "\n";
                break;
            }
            cout << a[i][j] << " ";
        }
    }
}

void nhapmt(MT a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "nhap phan tu " << i << " " << j << ": ";
            cin >> a[i][j];
        }
    }
}

void inmt (MT a, int n)
{
    cout << "ma tran vuong: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == n)
            {
                cout << "\n";
                break;
            }
            cout << a[i][j] << " ";
        }
    }
}

void nhanmt (MT a, MT b, MT c, int m, int n, int p)
{
    int d = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                d = d + a[i][k] * b[k][j];
                c[i][j] = d;
            }
            d = 0;
        }
    }
}

void nhanmt (MT a, MT b, MT c, int n)
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                d = d + a[i][k] * b[k][j];
                c[i][j] = d;
            }
            d = 0;
        }
    }
}

int main()
{
    int m, n; cout << "nhap so hang va cot cua mtcn thu 1: "; cin >> m >> n;
    int p; cout << "nhap cot cua mtcn thu 2: "; cin >> p;
    //int x; cout << "nhap so hang va cot cua mtv: "; cin >> x;
    MT A, B, C, D, E, F;
    nhapmt(A, m, n);
    inmt(A, m, n);
    nhapmt(B, n, p);
    inmt(B, n, p);
    nhanmt(A, B, E, m, n, p);
    inmt(E, m, p);
    int q; cout << "nhap so hang va cot cua mtv thu 1 va 2: "; cin >> q;
    nhapmt(C, q);
    inmt(C, q);
    nhapmt(D, q);
    inmt(D, q);
    nhanmt(C, D, F, q);
    inmt(F, q);
}*/

//bài 2
/*typedef struct
{
    int a, b;
}PS;

ostream& operator << (ostream& os, PS& p)
{
    os << p.a << "/" << p.b;
    return os;
}

istream& operator >> (istream& is, PS& p)
{
    cout<<"Tu va Mau: ";
    is >> p.a >> p.b;
    return is;
}

int uscln(int x, int y)
{
    x = abs(x); y = abs(y);
    int n; int uscln = 1;
    if (x > y)
    {
        n = y;
    }else
    {
        n = x;
    }
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            uscln = i;
        }
    }
    return uscln;
}

PS operator * (PS p1, PS p2)
{
    PS ps1;
    ps1.a = p1.a * p2.a;
    ps1.b = p1.b * p2.b;
    return ps1;
}

PS operator + (PS p1, PS p2)
{
    PS ps1, p1m, p2m;
    if (p1.b == p2.b)
    {
        ps1.a = p1.a + p2.a;
        ps1.b = p1.b;
    }else if (p1.b != p2.b)
    {
        p1m.a = p1.a * p2.b;
        p2m.a = p2.a * p1.b;
        p1m.b = p1.b * p2.b;
        p2m.b = p1.b * p2.b;
        ps1.a = p1m.a + p2m.a;
        ps1.b = p1m.b;
    }
    return ps1;
}

PS operator - (PS p1, PS p2)
{
    PS ps1, p1m, p2m;
    if (p1.b == p2.b)
    {
        ps1.a = p1.a - p2.a;
        ps1.b = p1.b;
    }else if (p1.b != p2.b)
    {
        p1m.a = p1.a * p2.b;
        p2m.a = p2.a * p1.b;
        p1m.b = p1.b * p2.b;
        p2m.b = p1.b * p2.b;
        ps1.a = p1m.a - p2m.a;
        ps1.b = p1m.b;
    }
    return ps1;
}

PS operator / (PS p1, PS p2)
{
    PS ps1;
    ps1.a = p1.a * p2.b;
    ps1.b = p1.b * p2.a;
    return ps1;
}

PS rutgon (PS p)
{
    int sc = uscln(p.a, p.b);
    p.a = (p.a) / sc;
    p.b = (p.b) / sc;
    return p;
}

int main()
{
    PS p, q, z, u, v;
    PS s;
    cout << "Nhap cac phan so p, q, z, u, v\n";
    cin >> p >> q >> z >> u >> v;
    p = rutgon(p); q = rutgon(q); z = rutgon(z); u = rutgon(u); v = rutgon(v);
    s =  (p - q * z) / (u + v);
    s = rutgon(s);
    cout << "Phan so s = " << s << endl;
}*/

