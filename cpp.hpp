// Calculates the size of a C-style array
int a[5];
std::cout << "Size: " << sizeof(a)/sizeof(*a) << std::endl;

// Fast sigmoid f(x) = x / (1 + abs(x))
double fastSigmoid(double in){
  return in / (1.0 + (in < 0.0 ? -in : in));
}

// istringstream tokenizing example
// (must include <sstream>)
// String of 4 integers and a string
std::istringstream strObj("1 1 5 2 something");
int firstToken, secondToken, thirdToken, forthToken;
std::string fifthToken;

// Loop count should be equal to token count
// In this case it is 5
for (int i = 0; i < 5; i++) {
    if (i==0) {
        strObj >> firstToken;
    } else if (i == 1) {
        strObj >> secondToken;
    } else if (i == 2) {
        strObj >> thirdToken;
    } else if (i == 3) {
        strObj >> forthToken;
    } else if (i == 4) {
        strObj >> fifthToken;
    }
}

// Print out the tokens
std::cout << "First token: " << firstToken << std::endl;
std::cout << "Second token: " << secondToken << std::endl;
std::cout << "Third token: " << thirdToken << std::endl;
std::cout << "Forth token: " << forthToken << std::endl;
std::cout << "Fifth token: " << fifthToken << std::endl;
