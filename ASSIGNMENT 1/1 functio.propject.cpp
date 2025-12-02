#include <iostream>
using namespace std;


void question1() {
    cout << "This is Question 1" << endl;
   
    int a = 14;
    float b = 13.0778;
    char c = 'i';
    cout<<"Value of a = "<< a <<endl;
    cout<<"Value of b =" << b << endl;
    cout<<"value of c =" << c <<endl;
    
}

void question2() {
    cout << "This is Question 2" << endl;
    
    cout<<"C++ language is a powerful programing language."<< endl;
    

}

void question3() {
    cout << "This is Question 3" << endl;
   
    int a = 5;      
    int b = 10;    

    cout << "Before interchange:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "After interchange:" ;
    cout << "a = " << a ;
    cout<< ", b = " << b << endl;

    
}

void question4() {
    cout << "This is Question 4" << endl;
  
    int year;
    int months;
    year = 2;        

    months = year * 12;

    cout << "number of years = " << year << endl;
    cout << "number of months = " << months << endl;

    
}
void question5() {
     int a, b, sum, product;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    sum = a + b;
    product = a * b;

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;


}
void question6(){
    float years , months;
    cout<<"Enter your age :";
    cin>>years;
    months = years * 12;
    cout<<"your age in months ="<< months <<endl;
}
void question7(){
    int rollNo;
    float pf, ic, cg, total, average;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks in Pf: ";
    cin >> pf;

    cout << "Enter marks in Ict: ";
    cin >> ic;

    cout << "Enter marks in Cg: ";
    cin >> cg;

    total = pf + ic + cg;
    average = total / 3;

    cout << "\nRoll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
}
void question8(){
    float fahrenheit, celsius;

    cout << "enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    cout << "temperature in Celsius = " << celsius << " °C" << endl;

}
void question9(){
     int num1, num2, num3, num4, max;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    cout << "Enter fourth number: ";
    cin >> num4;

    max = num1;

    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    if (num4 > max)
        max = num4;

    cout << "Maximum number is: " << max << endl;
}
void question10(){
    float miles = 2.5;
    float kilometers;

    kilometers = miles * 1.609;

    cout << "Distance in kilometers = " << kilometers << endl;
}
void question11(){
  
    int num1 = 10;
    int num2 = 20;
    float average;

    average = (num1 + num2) / 2.0;

    cout << "Average = " << average << endl;
}
void question12(){
     const float pi = 3.14159;  
    float r = 5;               
    float h = 10;              
    float volume;

    volume = pi * r * r * h;

    cout << "Volume of cylinder = " << volume << endl;

}
void question13(){
    
    int area,R;
  
    cout<<"Enter value of R :"<<endl;
    cin>>R;
    area = 3.14 * R * R;
    cout<<"Area of circle : " << area <<endl;
}
void question14(){
     float millimeters, inches;

    cout << "Enter length in millimeters: ";
    cin >> millimeters;

    inches = millimeters / 25.4;

    cout << "Length in inches = " << inches << endl;
}
void question15(){
    int a,b;
    cout<<" Enter values of a and b: ";
    cin>> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After interchange :";
    cout<<"a = "<< a ;
    cout<<",b = "<< b << endl;
}
void question16(){

}

int main() {
    int choice;

    cout << "PROJECT MENU " << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "5. Question 5" << endl;
    cout << "6. Question 6" << endl;
    cout << "7. Question 7" << endl;
    cout << "8. Question 8" << endl;
    cout << "9. Question 9" << endl;
    cout << "10. Question 10" << endl;
    cout << "11. Question 11" << endl;
    cout << "12. Question 12" << endl;
    cout << "13. Question 13" << endl;
    cout << "14. Question 14" << endl;
    cout << "15. Question 15" << endl;
   
    cout << "Enter your choice (1-15): ";
    cin >> choice;

 
    switch (choice) {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            question4();
            break;  
           
        case 5:
            question4();
            break;
        case 6:
            question4();
            break;
        case 7:
            question4();
            break;
        case 8:
            question4();
            break;
        case 9:
            question4();
            break;
        case 10:
            question4();
            break;
        case 11:
            question4();
            break;
        case 12:
            question4();
            break;
        case 13:
            question4();
            break;
        case 14:
            question4();
            break;
        case 15:
            question4();
            break;    
            
        default:
            cout << "Incorrect Please enter between 1 and 15.";
    }

    return 0;
}

