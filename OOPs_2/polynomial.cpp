class Polynomial{

public:

  int *degCoeff;
  int capacity;

  // constructor
  Polynomial(){
      degCoeff = new int[10];
      capacity = 10;
      for (int i = 0; i < 10; i++){
        degCoeff[i] = 0;
      }
  }

  // Copy constructor
  Polynomial(Polynomial const &p){
    capacity = p.capacity;
    // deep Copy
    degCoeff = new int[capacity];
    for (int i = 0; i < capacity; i++){
      degCoeff[i] = p.degCoeff[i];
    }
  }

  // setter
  void setCoefficient(int deg, int coeff){
    if (deg >= capacity){
      int size = 2 * capacity;
      while(size <= deg){
        size *= 2;
      }
      int *newDegCoeff = new int[size];
      for (int i = 0; i < size; i++){
        newDegCoeff[i] = 0;
      }
      for (int i = 0; i < capacity; i++){
        newDegCoeff[i] = degCoeff[i];
      }
      capacity = size;
      delete [] degCoeff;
      degCoeff = newDegCoeff;
    }
    degCoeff[deg] = coeff;
  }

  // + overloading
  Polynomial operator+(Polynomial const &p){
    Polynomial pNew;
    int i = 0, j = 0;
    while (i < this->capacity && j < p.capacity){
      int deg = i;
      int coeff = this->degCoeff[i] + p.degCoeff[j];
      pNew.setCoefficient(deg, coeff);
      i++;
      j++;
    }
    while (i < capacity){
      pNew.setCoefficient(i, this->degCoeff[i]);
      i++;
    }
    while (j < p.capacity){
      pNew.setCoefficient(j, p.degCoeff[j]);
      j++;
    }
    return pNew;
  }

  // - overloading
  Polynomial operator-(Polynomial const &p){
    Polynomial pNew;
    int i = 0, j = 0;
    while (i < this->capacity && j < p.capacity){
      int deg = i;
      int coeff = this->degCoeff[i] - p.degCoeff[j];
      pNew.setCoefficient(deg, coeff);
      i++;
      j++;
    }
    while (i < capacity){
      pNew.setCoefficient(i, this->degCoeff[i]);
      i++;
    }
    while (j < p.capacity){
      pNew.setCoefficient(j, (-1*p.degCoeff[j]));
      j++;
    }
    return pNew;
  }

  // getter
  int getCoeff(int degree){
    if (degree >= capacity){
      return 0;
    }
    return degCoeff[degree];
  }

  // * overloading
  Polynomial operator*(Polynomial const &p){
    Polynomial pNew;
    for(int i = 0; i < capacity; i++){
      for(int j = 0; j < p.capacity; j++){
        int degree = i+j;
        int coefficient = pNew.getCoeff(degree) + (this->degCoeff[i] * p.degCoeff[j]);
        pNew.setCoefficient(degree, coefficient);
      }
    }
    return pNew;
  }

  // print
  void print(){
    for (int i = 0; i < capacity; i++){
      if (degCoeff[i] != 0){
        cout << degCoeff[i] << "x" << i << " ";
      }
    }
    cout << endl;
  }
};
