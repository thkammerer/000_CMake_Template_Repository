#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

class Triangle {
  public:
    Triangle( double a, double b, double c );
    
    
    double get_a() const;
    double get_b() const;
    double get_c() const;

    double get_alpha() const;
    double get_beta() const;
    double get_gamma() const;

  private:
    double a_;
    double b_;
    double c_;
};

#endif // __TRIANGLE_H__