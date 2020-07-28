#include <iostream>
using namespace std;
//#include "ComplexNumbers.h"

class ComplexNumbers{
    private:
      int real, img;
    public:
      ComplexNumbers(int real, int img){
        this->real = real;
        this->img  = img;
      }
      void plus(ComplexNumbers const &c2){
          this->real += c2.real;
          this->img += c2.img;
      }
      void multiply(ComplexNumbers const &c2){
        int r = (this->real * c2.real) - (this->img * c2.img);
        int i = (this->real * c2.img) + (this->img * c2.real);
        this->real = r;
        this->img = i;
      }
      void print(){
        if (img >= 0)
          cout << real << " + " << "i"<< img << endl;
        else
          cout << real << " - " << "i"<< img*-1<< endl;
      }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
}
