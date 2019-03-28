#include <iostream>
#include <math.h>

using namespace std;

class Lingkaran
{
  private:
    double r=0;

  public:
    void setR(double a)
    {
        if (a < 0)
        {
            cout << "Jari2 tdk boleh negatif";
        }
        else
        {
            r = a;
        }
    }
    double getKeliling(){
        return 2 * M_PI * r;
    }
    double getLuas(){
        return M_PI * r *r;
    }
};

int main()
{
    Lingkaran l1;
    l1.setR(10);
    cout<<l1.getKeliling()<<endl;
    cout<<l1.getLuas()<<endl;
    return 0;
}