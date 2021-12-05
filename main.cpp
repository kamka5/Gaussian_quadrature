#include <iostream>
#include <math.h>
using namespace std;
double GaussLegendre()
{
    int n = 4;
    double tablicaX[] = {-0.90618, -0.538469, 0, 0.538469, 0.90618};
    double tablicaH[] = {0.236927, 0.478629, 0.568889, 0.478629, 0.236927};

    double suma = 0;

    for(int i=0; i <= n; i++) suma += tablicaH[i]*1/sqrt(1 + tablicaX[i]*tablicaX[i]);

    return suma;
}

double GaussHermit()
{
    int n = 4;
    double tablicaX[] = {-2.020183, -0.958572, 0, 0.958572, 2.020183};
    double tablicaH[] = {0.019953, 0.393619, 0.945309, 0.393619, 0.019953};

    double suma = 0;

    for(int i=0; i <= n; i++) suma += tablicaH[i]*cos(tablicaX[i]);

    return suma;
}

double GaussChebyshev(){

    int n = 3;
    double tablicaX[n+1];
    double tablicaH[n+1];

    for(int j = 0; j <= n; j++) tablicaX[j] = cos((M_PI*(2*j)+1)/(2*(n+1)));
    for(int j = 0; j <= n; j++) tablicaH[j] = (M_PI/(n+1));

    double suma = 0;

    for(int i=0; i <= n ; i++) suma += (tablicaH[i]*(tablicaX[i]*tablicaX[i]));

    return suma;
}

double GaussLaguerre()
{
    int n = 3;

    double tablicaX[] = {0.322548, 1.745761, 4.536620, 9.395071};
    double tablicaH[] = {0.603154, 0.357419, 0.038888, 0.000539};

    double suma = 0;

    for(int i=0; i <= n ; i++) suma += tablicaH[i]*exp(-tablicaX[i])*sin(tablicaX[i])/tablicaX[i];

    return suma;
}

//double
int main()
{
    double wynikGaussChebyshev = GaussChebyshev();
    cout << "Wynik funkcji Gauss-Chebyshev: " << wynikGaussChebyshev << endl;
    double wynikGaussLegendre = GaussLegendre();
    cout << "Wynik funkcji Gauss-Legendre: " << wynikGaussLegendre << endl;
    double wynikGaussHermit = GaussHermit();
    cout << "Wynik funkcji Gauss-Hermit: " << wynikGaussHermit << endl;
    double wynikGaussLaguerre = GaussLaguerre();
    cout << "Wynik funkcji Gauss-Laguerre: " << wynikGaussLaguerre << endl;
    return 0;
}
