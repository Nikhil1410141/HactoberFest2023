#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
#define e 0.001
#define f(x) x*x*x -4*x +1

int main()
{   
    int i=0;
    float x1,x2,x3;
    float f1,f2,f3;

    cout<<"Enter the Value of X1";
    cin>>x1;
    cout<<"Enter the Value of X2";
    cin>>x2;

    do{
        f1=f(x1);
        f2=f(x2);
        x3=x1+x2;
        f3=f(x3);

        if(f1*f2<0){
            x1=x3;
        }
        else{
            x2=x3;
        }
        i++;
        cout<<x3<<"  ";
        cout<<i<<"  ";
        cout<<f3<<"  ";


    }while(fabs(f3)<e);


    return 0;
}
