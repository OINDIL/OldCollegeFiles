#include<stdio.h>
#include<math.h>
float bisectFunc(float x){ 
    return (pow(x,x) + (2*x) - 2);
}
float regulaFunc(float x){
    return (x*x*x) + 2*x - 2;
}
// for newtonRaphson
float f(float x){
    return (x*x*x) - (2*x) - 5;
}
float df(float x){
    return 3*(x*x) - 2;
}
// end of newtonRaphson

float trapeFunc(float x){
    return x+(1/x);
}

float oneFunc(float x){
    return 1/(1+(x*x));
}
float threeFunc(float x){
    return exp(x);
}

float weddleFunc(float x){
    return 1/(1+(x*x));
}
float eulerFunc(float x,float y){
    return (x*x*x) + y;
}

float modFunc(float x,float y){
    return x+y;
}

void bisection(){
    float x,a,b,acc;
    int i;

    printf("Enter the accuracy: ");
    scanf("%f", &acc);
    do{
        printf("Enter the values of a and b: ");
        scanf("%f %f", &a,&b);
    }while(bisectFunc(a) * bisectFunc(b) > 0);
    do{
        x = (a+b)/2;
        if(bisectFunc(x) * bisectFunc(a) > 0) a = x;
        else b = x;
        i++;
    }while(fabs(bisectFunc(x)) > acc);
    printf("The result using Bisection Method is: %.5f and the iterations are: %d", x,i);
}
void regulaFalsi(){
    float x,a,b,acc;
    int i = 0;
    printf("Enter the accuracy: ");
    scanf("%f", &acc);
    do{
        printf("Enter the values of a and b: ");
        scanf("%f %f", &a,&b);
    }while(regulaFunc(a) * regulaFunc(b) > 0);
    do{
        x = b - (regulaFunc(b)/(regulaFunc(b)-regulaFunc(a)))*(b-a); // formula
        if(regulaFunc(x)*regulaFunc(a) > 0) a = x;
        else b = x;
        i++;
    }while(fabs(regulaFunc(x)) > acc);
    printf("The result using Regula-Falsi Method is: %.4f and iterations are: %d", x,i);
}
void newtonRaphson(){
    float a,b,acc,arb;
    int i = 0;
    do{
        printf("Enter the values of a and b: ");
        scanf("%f %f", &a,&b);
    }while(f(a)*f(b) > 0);
    // printf("\n%f %f", a,b); //checking
    arb = (a+b)/2;
    // printf("\n%f", arb); //checking
    printf("\nEnter the accuracy: ");
    scanf("%f", &acc);
    do{
        arb = arb - (f(arb) / df(arb));
        i++;
    }while(fabs(f(arb)) > acc);
    printf("The result using Newton-Raphson is: %f and the iterations are: %d", arb,i);
}
void trapezoidalRule(){
    int n;
    char ch;
    float traps,a,b,h;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice [n/h]: ");
    scanf(" %c", &ch);
    traps = trapeFunc(a) + trapeFunc(b);
    if(ch == 'H' || ch == 'h'){
        printf("Enter the value of h:");
        scanf("%f", &h);
        n = (b-a)/h;
        for (int i = 1; i < n; i++)
        {
            traps += 2*(trapeFunc(a+(i*h)));
        }
        traps *= (h/2); 
    }
    if(ch == 'n' || ch == 'N'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        for (int i = 1; i < n; i++)
        {
            traps += 2*(trapeFunc(a+(i*h)));
        }
        traps *= (h/2);
    }
    printf("The result using Trapezoidal Rule is: %f", traps);
}
void oneThird(){
    char ch;
    int n;
    float h,onethird,a,b;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice [n/h]: ");
    scanf(" %c", &ch);
    if(ch == 'h' || ch == 'H'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/h;
        onethird = oneFunc(a) + oneFunc(b);
        for(int i = 1;i < n;i++){
            if(i % 2 == 0) onethird += 2*(oneFunc(a+(i*h))); // 2*(even)
            else onethird += 4*(oneFunc(a+(i*h))); // 4*(odd)
        }
    }
    if(ch == 'n' || ch == 'N'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        onethird = oneFunc(a)+oneFunc(b);
        for(int i = 1;i < n;i++){
            if(i % 2 == 0) onethird += 2*(oneFunc(a+(i*h)));
            else onethird += 4*(oneFunc(a+(i*h)));
        }
    }
    onethird *= (h/3);
    printf("The result using Simpson-OneThird rule is: %f", onethird);
}
void threeByEight(){
    char ch;
    float h,a,b,threeBy;
    int n;
    printf("Enter the valaus of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice:");
    scanf(" %c", &ch);
    threeBy = threeFunc(a) + threeFunc(b);
    if(ch == 'n' || ch == 'N'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        threeBy = threeFunc(a) + threeFunc(b);
        for(int i = 1;i < n;i++){
            if(i % 3 == 0) threeBy += 2*(threeFunc(a+(i*h))); // 2*(div by 3)
            else threeBy += 3*(threeFunc(a+(i*h)));
        }
    }
    if(ch == 'h' || ch == 'H'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/n;
        threeBy = threeFunc(a) + threeFunc(b);
        for(int i = 1;i < n;i++){
            if(i%3==0) threeBy += 2*(threeFunc(a+(i*h)));
            else threeBy += 3*(threeFunc(a+(i*h)));
        }
    }
    threeBy *= (3*h)/8;
    printf("The result with Three by eight rule is: %f", threeBy);
}
void weddle(){
    int n;
    char ch;
    float wed,a,b,h;
    printf("Enter the values of a and b:");
    scanf("%f %f", &a,&b);
    printf("Enter the choice[n/h]: ");
    scanf(" %c", &ch);
    if(ch == 'n' || ch == 'N'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (a+b)/n;
        for(int i = 1;i < n/6;i++){
            wed = (weddleFunc(a) + 5*(weddleFunc(a+h)) + weddleFunc(a+(2*h)) + 6*(weddleFunc(a+(3*h))) + weddleFunc(a+(4*h)) + 5*(weddleFunc(a+(5*h))) + weddleFunc(a+(6*h)));
            a += (h*6);
        }
        wed *= ((3*h)/10);
    }
    if(ch == 'h' || ch == 'H'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (a+b)/h;
        for(int i = 1;i < n/6;i++){
            wed = (weddleFunc(a) + 5*(weddleFunc(a+h)) + weddleFunc(a+(2*h)) + 6*(weddleFunc(a+(3*h))) + weddleFunc(a+(4*h)) + 5*(weddleFunc(a+(5*h))) + weddleFunc(a+(6*h)));
            a += (h*6);
        }
        wed *= ((3*h)/10);
    }
    printf("The result using Weddle rule: %f", wed);
}

void newtonForward(){
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    float delta,res,x,xarr[n],yarr[n],u,h;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the values of x and y arrays: ");
    for(int i = 0;i < n;i++){
        scanf("%f", &xarr[i]);
        scanf("%f", &yarr[i]);
    }
    h = (xarr[1] - xarr[0]);
    u = (x - xarr[0]);
    res += yarr[0];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            yarr[j] = yarr[j+1] - yarr[j];
        }
    delta *= (u-i)/(i+1);
    res += delta * yarr[0];
    }
    printf("The result using Newton Forward Interpolation is: %.4f", res);
    
}
void newtonBackward(){
    int n;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);
    float xarr[n],yarr[n],x,h,u,res,nebla=1;
    printf("Enter the values of x and f(x):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &xarr[i]);
        scanf("%f", &yarr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%f", &x);
    h = xarr[1]-xarr[0];
    u = (x - xarr[n-1])/h;
    res = yarr[n-1];
    for (int i = 0;i < n;i++)
    {
        for (int j = n-1; j > i; j--)
        {
            yarr[j] = yarr[j] - yarr[j-1];
        }
        nebla *= ((u+i)/(i+1));
        res += nebla * yarr[n-1];
    }
    printf("The result using Newton Backward Interpolation is: %f", res);
}
void lagrange(){
    int n;
    printf("Enter the size of the x and y array: ");
    scanf("%d", &n);
    float xarr[n],yarr[n],xp,result,yp = 0;
    printf("Enter the values of x and y:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%f %f", &xarr[i],&yarr[i]);
    }
    printf("Enter the Interpolation point: ");
    scanf("%f", &xp);
    for (int i = 1; i <= n; i++)
    {
        result = 1;
        for (int j = 1; j <= n; j++)
        {
            if(i!=j) result *= (xp-xarr[j])/(xarr[i] - xarr[j]);
        }
        yp += result * yarr[i];
    }
    printf("The result using Lagrange interpolation is: %.3f", yp);
}
void euler(){
    float x,y,xn,h,yn;
    int n;
    printf("Enter the value of x0 and y0:");
    scanf("%f %f", &x,&y);
    printf("Enter the boundary value of x: ");
    scanf("%f", &xn);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    n = (xn-x)/h;
    for (int i = 0; i < n; i++)
    {
        yn = y + (h*eulerFunc(x,y));
        y = yn;
        x += h;
    }
    printf("The result using Euler's Method is: %.3f", yn);
}
void modEuler(){
    float x,y,xn,h,yn;
    int n;
    printf("Enter the value of x and y:");
    scanf("%f %f", &x,&y);
    printf("Enter the boundary value of x: ");
    scanf("%f", &xn);
    printf("Enter the value of h:");
    scanf("%f", &h);
    n = (xn-x)/h;
    for (int i = 0; i < n; i++)
    {
    }
    
}
int main(){
    int input;
    char ch = 'y';
     do{
        printf("Enter your choice\nPress 1 for Bisection\nPress 2 for Regula Falsi\nPress 3 for Newton Raphson\nPress 4 for Trapezoidal\nPress 5 for One third\nPress 6 for Three by Eight\nPress 7 for Weddle\nPress 8 for Newton Forward Interpolation\nPress 9 for Newton Backwards Interpolation\nPress 10 for Lagrange Interpolation\nPress 11 for Euler's Method\n[INPUT]:  "); 
        scanf("%d", &input);
   
    switch(input){
        case 1:
            bisection();
            break;
        case 2:
            regulaFalsi();
            break;
        case 3:
            newtonRaphson();
            break;
        case 4:
            trapezoidalRule();
            break;
        case 5:
            oneThird();
            break;
        case 6:
            threeByEight();
            break;
        case 7:
            weddle();
            break;
        case 8:
            newtonForward();
            break;
        case 9:
            newtonBackward();
            break;
        case 10:
            lagrange();
            break;
        case 11:
            euler();
            break;
        case 12:
            modEuler();
            break;
        default:
            printf("!!!INVALID INPUT!!!");
            break;
    }
    printf("\nDo you want to continue? [y/n]: ");
    scanf(" %c", &ch);
}while(ch == 'y');

return 0;
}