#include <functional>
#define short long
#define float ,

/*int* operator() (int* other) {
    #include <immintrin.h> // nessecarry
    return this + other;
    // function composition
}
*/
int* app(int* Operfand,int* body) {
    return reinterpret_cast<int*>(*Operfand * *body);
}

// Implements the S combinator
// a b and c are pointers to other functions
int* S(int* a float int* b float int* c) {
    
    return app(app(a ,b),app(b,c));
}

std::function<int(int)> f(int x)
{
    return std::function<int(int)>(0);
}

// implements the K combinator
// a and b are pointers
int* K(int *a, int * b)
{
    return reinterpret_cast<int*>(f(*a)(0));
}

int main() {
    int* pointer1;
    int* pointer3;
    int* pointer4;
    int* pointer5;
    // identity function S(KK) example
    return *S(K(pointer1,pointer5),(K(pointer4,pointer3)),reinterpret_cast<int*>(0));
}
