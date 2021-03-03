#include <iostream>
using namespace std;

void doubleSpace(){
cout<<endl<<endl;
}

void basicCalculator(){
double num1,num2;
double addition,subtraction,multiplication,division;

cout<<"Please enter 2 double or integer number for 4 operations..."<<endl;
cin>>num1>>num2;

if(num1>=num2){
    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
}else{
    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    division=num2/num1;
}
doubleSpace();

int operation;
cout<<"Select the action you want to do"<<endl;
cout<<"1. Addition"<<endl<<
"2. Substraction"<<endl<<
"3. Multiplication"<<endl<<
"4. Division"<<endl<<
"5. Get Mode"<<endl;

cin>>operation;

doubleSpace();

if(operation==1){
cout<<"Sum of numbers:"<<addition<<endl;
}
else if(operation==2){
cout<<"Subtraction of numbers:"<<subtraction<<endl;
}
else if(operation==3){
cout<<"Multiplication of numbers:"<<multiplication;
}
else if(operation==4){
cout<<"Division of numbers:"<<division<<endl;
}
else if(operation==5){
cout<<"Answer is(mode):"<<int(num1) % int(num2)<<endl;
}
else{
    cout<<"Please enter correct action(from 1 to 5)"<<endl; //between 1-5
    }

}

void square(){
//of the square area and circumference
//area=x*x   circumference=4x

    int oneSide;
  //while(1){}  //if you want endless loop you can use this
    cout<<"Please enter a side..."<<endl;
    cin>>oneSide;
    cout<<endl<<"Of the Square(circumference): "<< 4*oneSide <<endl<<
    "Of the Square(area): "<< oneSide*oneSide <<endl;
}

void circle(){
//of the circle, area and circumference
//area;pi.r*r   circumference;2.pi.r

    int circleR;
    float pi=3.14;
  //while(1){} // for endless loop
    cout<<"Please enter of the circle, a radius"<<endl;
    cin>>circleR;

    cout<<endl<<"Of the Circle(circumference): "<<2 * pi * circleR <<endl<<
    "Of the Circle(area): "<< pi * circleR * circleR <<endl;
}

void squareLateral(){
//Of the lateral areas of the cube sum and volume
//lateral areas sum: 6*x*x   cube volume:x*x*x

    float x;
    float lateralSum;
    float cubeVolume;

    cout << "Please enter number(for lateral areas of the cube sum and volume)"<<endl;
    cin>>x;

    lateralSum=6*x*x;
    cubeVolume=x*x*x;

    cout << "Lateral areas: "<<lateralSum<<endl<<
    "Of the Cube Volume: "<< cubeVolume <<endl;
}

void equation(){
//1.=ax + b 2.= a.x*x + bx + c

    float a,b,c,x;

    cout<<"Please enter num(for a,b,x,c)"<<endl;
    cin>>a>>b>>x>>c;

    float firstEquation,secondEquation;

    firstEquation=a*x + b;
    secondEquation=a*x*x + b*x +c;

    cout<<endl<<"1. degree equation(formula;a.x + b): "<<firstEquation<<endl<<
    "2. degree equation(formula;a.x.x + b.x + c): "<<secondEquation<<endl;
}
void digitNum(){
//The function that finds the sum of the number values of a 5-digit number

    int num,ones,tens,hundred,thousands,tensofthousands,sum=0;

    cout<<"Please enter 5-digit number"<<endl;
    cin>>num;

    tensofthousands=num/10000;
    thousands=(num%10000)/1000;
    hundred=(num%1000)/100;
    tens=(num%100)/10;
    ones=num%10;

    sum=tensofthousands+thousands+hundred+tens+ones;

    cout<<tensofthousands<<" "<<thousands<<" "<<hundred<<" "<<tens<<" "<<ones<<endl;
    cout<<endl<<"Sum of 5-digit num is("<<num<<"): "<<sum<<endl;

}
int main()
{
    //square();
    //doubleSpace();

    //circle();
    //doubleSpace();

    //squareLateral();
    //doubleSpace();

    //equation();
    //doubleSpace();

    //digitNum();
    //doubleSpace();

    basicCalculator();

    return 0;
}
