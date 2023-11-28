#include <iostream>
#include <math.h>

using namespace std;

class CalE{
private:
    double e;
public:
    CalE(double accu=0.0000001){
        int i;
        double tmp;
        e=1.0;
        for( i=1,tmp=1.0/i;tmp>=accu;i++){
            e+=tmp;
            cout<<"e:"<<e<<endl;
            tmp=tmp/++i;
        }
    }
    double getValue(double x=1.0){
              return pow(e,x);
    }
};

int main()
{
    CalE * p= new CalE(0.0000001);
    cout <<  p->getValue(20)<< endl;
    cout <<  p->getValue(20000)<< endl;
    return 0;
}
