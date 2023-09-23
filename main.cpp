#include <iostream>
using namespace std;
bool splitnumber(int n)
{
    int i,j;
    int sum;
    bool result=false;
    for(i=1;i<=n/2;i++){
        sum=0;
          for(j=i;j<=n/2+1;j++)
          {
               sum=sum+j;
               if(sum>=n)
                   break;
         }
          if(sum==n)
          {
              result=true;
              cout << n << "=";
              for (j=i; sum >j; j++) {

                  cout <<j << "+";
                  sum = sum - j;
              }
              cout <<j<< endl;

          }

    }return result;
}
int main()
{
    splitnumber(15);
        return 0;
}