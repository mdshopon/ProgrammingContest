#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    long getal;

    cin>>getal;
    double kopie=getal;
    long hoi=pow(2,kopie);

    cout<<hoi<<endl;
    bool tabel[getal][hoi];
    for(int n=0;n<=hoi;n++)
    {
        for(int t=0;t<=getal;t++)
        {
            tabel[t][n]=false;
        }
    }

    for(int n=0;n<=(hoi);n++)
    {
        if (n==0)
        {n++;}
        for(int t=0;t<=getal;t++)
        {
            tabel[t][n]=tabel[t][n-1];
        }
        for(int ok=0, h=0;ok==0;)
        {
            if (tabel[h][n]==false)
            {tabel[h][n]=true;ok=1;}
            else
            {
                tabel[h][n]=false;
                h++;
            }
        }
    }

    for(int n=0;n<=hoi;n++)
    {
        for(int t=0;t<=(getal-1);t++)
        {
            if(tabel[t][n]==true)
            {cout<<1;}
            else
            {cout<<0;}
        }
        cout<<endl;
    }
    char stop;
    cin>>stop;
    return(0);
}
