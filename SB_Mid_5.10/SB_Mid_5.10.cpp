
#include <iostream>
#include <stdexcept>

class Fraction
{
public:
    float numerator;
    float denominator;

    Fraction(float num = 0, float den = 0) : numerator(num), denominator(den)
    {
        if (denominator == 0) 
        {
            throw std::runtime_error("denominator = 0");
        }

    }

    ~Fraction(){}

    float Div() {return numerator / denominator; }
    
};

int main()
{
   try 
   {
       float num, den;
       
        std::cin.exceptions(std::istream::failbit);
        std::cout << "Enter numerator: ";
        std::cin >> num;
        std::cout << "Enter denominator: ";
        std::cin >> den;
       Fraction v(num, den);
       std::cout << v.numerator << "/" << v.denominator << " = " << v.Div() << "\n";
    }
   catch (std::exception& v) 
   {
      std::cout << "Error: " << v.what() << std::endl;
   }
}

