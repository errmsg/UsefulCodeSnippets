// Calculates the size of a C-style array
int a[5];
std::cout << "Size: " << sizeof(a)/sizeof(*a) << std::endl;

// Fast sigmoid f(x) = x / (1 + abs(x))
double fastSigmoid(double in){
  return in / (1.0 + (in < 0.0 ? -in : in));
}
