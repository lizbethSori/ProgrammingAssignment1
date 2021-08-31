#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Intro()
{
    //this is a little intro that I made for the computer before we start with some real math The inside works!!//
    printf("Hello, I am your computer and I want to do some math.\n");
    printf("We are going to use the quadratic formula. We are going to use an example! Lets try 2x^2-8x-24\n");
}
Discriminant(double a, double b, double c)
//This for the discrimiminant//
{ 
double discriminant; 
discriminant = ((b * b) - (4 * a * c));
return (discriminant);
}
bottompart (double a)
{
    double bottom;
    bottom = (2 * a);
    return (bottom);
}
//Here is where they would used the result of the disciminant into the square root part//
ISquareRoot(double b, double discriminantresult, double bottom_full)
{
    double Square_fully_f;
    double Square_fully_r;
     double equation1;
     double equation2;
if (discriminantresult < 0)
{
    Square_fully_f = (sqrt((-discriminantresult)));
    printf("welp at the end it would have imaginary number as you can see (%lf + %lfi) / %lf\n",b, Square_fully_f,bottom_full);
    if (Square_fully_f == 0){
        printf("uh oh there is no number for you!\n");
   }
   else {
       printf("rippp I guess this number is also an imaginary number as you can see (%lf - %lfi) / %lf\n",b,Square_fully_f,bottom_full); 
   }
}

else
{
    Square_fully_r = (sqrt(discriminantresult));
    equation1 = ((-b) + Square_fully_r) / (bottom_full);
    printf("yay an easy answer! it came out as a real number as you can see the answer is %lf\n",equation1);
    if (Square_fully_r == 0){
        printf("Mwahahah no number for you!!\n");
    }
    else{
        equation2 = ((-b) - Square_fully_r) / (bottom_full);
        printf("woo!!! the other answer came out easy! As you can see the answer is %lf\n",equation2);
    } 

}

}
int main(void)
{
    //This is where I will declare some of the numbers along with some of the variables I need//
    double a;
    double b;
    double c;
    double discriminant;
    double discriminantresult;
    double bottom_full;
    a = 2.0;
    b = -8.0;
    c = -24.0;
    
    //This is where I would use the function for it to work//
    Intro();
    discriminantresult = Discriminant(a,b,c);
    bottom_full = bottompart (a);
    ISquareRoot(b,discriminantresult,bottom_full);

    return 0;
}
