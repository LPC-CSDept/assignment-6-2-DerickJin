//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        double num = 1;
        for (int i = 0; i < n; i++)
        {
               num *= 2;
        }
        return num;        
}

double nthpowern(int n)
{
        n = -n;
        double num = 1;
        for (int i = 0; i < n; i++)
        {
                num *= 2;
        }
        num = 1/num;
        return num;    
}

void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}

int main()
{
        using namespace std;
        int nthpower;
        double result; 

        cout << "Enter number: ";
        cin >> nthpower;
        if(nthpower > 0)
        {
                result = nthpowerp(nthpower);
        }
        else if (nthpower < 0)
        {
              result = nthpowern(nthpower);  
        }

        printout(result);
        return 0;
}