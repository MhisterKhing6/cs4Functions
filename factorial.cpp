
int factorial(int a) {
    if(a <= 1)
        return 1;
    int factorial = 1; 
    while(a > 1) {
        factorial = factorial * a;
        a = a - 1;
    }
    return factorial;

}