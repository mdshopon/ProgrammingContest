#include <iostream>
#define ull unsigned long long
using namespace std;

template <typename T>
T mmul(T a, T b, T m) {
    a %= m;
    T result = 0;
    while (b) {
        if (b % 2) result = (result + a) % m;
        a = (a + a) % m;
        b /= 2;
    }
    return result;
}

template <typename T>
T mpow(T a, T b, T m) {
    a %= m;
    T result = 1;
    while (b) {
        if (b % 2) result = mmul(result, a, m);
        a = mmul(a, a, m);
        b /= 2;
    }
    return result;
}


int main() {
    lld cases,cas=0;
    sc164(cases);
    while(cases--)
    {
        lld modulo=1000000000000000007;
        lld n,x,ans;
        scanf("%lld %lld",&n,&x);
        cout <<Case <<++cas<<": "<< mpow(n, x, modulo) << endl;
    }

}
