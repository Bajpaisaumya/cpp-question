#include<iostream>
using namespace std;
int main()
{
    int p,c,b,m,h, total ,perc;
    cout<<"enter the marks of five subject";
    cin>>p>>b>>c>>m>>h;
    total=p+b+c+b+h;
    cout<<total<<endl;
    perc=(total/500.0)*100;
    cout<<perc<<endl;
    return 0;
}
