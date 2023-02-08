//Simple interest
#include<stdio.h>
int main()
{
    int p,n;
    float r,si;

    p = 1000;
    n = 3;
    r = 8.5;

    si = (p*r*n)/100;
    printf("%f\n",si);

    return 0;
}








//taking input from user for simple interest
#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    
    printf("Enter values of p,n,r\n");
    scanf("%d %d %f", &p, &n, &r);
    
    si = (p*n*r)/100;
    printf("%f\n", si);
    
    
    return 0;
}








//ramesh's basic salary
#include<stdio.h>
int main()
{
    float bs, da, hra, gs;
    
    printf("Enter basic salary!\n");
    scanf("%f", &bs);
    
    da = 0.4*bs;
    hra = 0.2*bs;
    gs = bs + da + hra;
    
    printf("%f\n", gs);
    
    
    return 0;
    
}






//conversion - km to m, cm, ft, inch
#include<stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    
    printf("Enter the distance in km\n");
    scanf("%f", &km);
    
    m = 1000*km;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    
    printf("%f\n%f\n%f\n%f\n", m, cm, inch, ft);
    
    
    return 0;
    
}







//calculating marks in percentage
#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    
    printf("Enter marks\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total/5;
    
    printf("%f\n", percentage);
    return 0;
}








//Farenheit to Centigrade
#include<stdio.h>
int main()
{
    double F, Centi;
    
    printf("Enter temperature in Farenheit\n");
    scanf("%f", &F);
    
    Centi = (F - 32)*(5.0/9.0);
    printf("%f\n", &Centi);
    
    return 0;
}









//calculate area and perimter of rectangle and area and circumference of circle
#include<stdio.h>
int main()
{
    int l,b, areaOfRect, perimeter;
    float r, areaOfCircle, circumference;
    
    printf("Enter length, breadth, and radius.\n");
    scanf("%d %d %f", &l, &b, &r);
    
    areaOfRect = l*b;
    perimeter = 2*(l+b);
    areaOfCircle = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    
    printf("%d\n%d\n%f\n%f", areaOfRect, perimeter, areaOfCircle, circumference);
    
    return 0;
}











//area of triangle
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s, area;
    
    printf("Enter  sides of triangle\n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    
    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("area = %f", area);
    
    
    return 0;
}












// Reverse a number
#include<stdio.h>
int main()
{
    int n, d5,d4, d3, d2, d1;
    long int revNum;
    
    printf("Enter a five digit number : ");
    scanf("%d", &n);
    
    d5 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;
    n = n/10;
    
    revNum = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("%ld", revNum);
    
    
    return 0;
}










//smallest number of notes
#include<stdio.h>
int main()
{
    int amount, nohun, nofifty, noten, nofive, notwo, noone, total;
    
    printf("Enter amount : ");
    scanf("%d", &amount);
    
    nohun = amount/100;
    amount = amount%100;
    nofifty = amount/50;
    amount = amount%50;
    noten = amount/10;
    amount = amount%10;
    nofive = amount/5;
    amount = amount%5;
    notwo = amount/2;
    amount = amount%2;
    noone = amount/1;
    amount = amount%1;
    
    total = nohun + nofifty + noten + nofive + notwo + noone;
    printf("Smallest number of notes = %d", total);
    
    
    return 0;
}







//sum of digits of a 5 digit number
#include<stdio.h>
int main()
{
    int n, sum, d5, d4, d3, d2, d1;
    
    printf("Enter a five digit number : ");
    scanf("%d", &n);
    
    d5 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;
    n = n/10;
    
    sum = d5 + d4 + d3 + d2 + d1;
    printf("%d", sum);
    
    
    return 0;
}












//cartesian to polar coordinates
#include<stdio.h>
#include<math.h>

int main()
{
    int x, y;
    float r, theta;
    
    printf("Enter values of x and y\n");
    scanf("%d\n%d", &x, &y);
    
    r = sqrt(pow(x,2) + pow(y,2));
    theta = atan2(y,x);
    theta = theta * 180/3.14;
    
    printf("r = %f\n theta = %f",r ,theta);
    
    
    return 0;
}










//Calculate in distance in nautical miles
#include<stdio.h>
#include<math.h>

int main()
{
    float L1, L2, G1, G2, D;
    
    printf("L1 : \nL2 : \nG1 : \nG2 : \n");
    scanf("%f\n%f\n%f\n%f", &L1, &L2, &G1, &G2);
    
    L1 = L1 * 180/3.14;
    G1 = G1 * 180/3.14;
    L2 = L2 * 180/3.14;
    G2 = G2 * 180/3.14;
    
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    printf("%f", D);
    
    
    return 0;
}










//Calculating wcf - wind chill factor
#include<stdio.h>
#include<math.h>

int main()
{
    float v, t, wcf;
    
    printf("Enter values of t and v\n");
    scanf("%f\n%f", &v, &t);
    
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v, 0.16);
    printf("%f", wcf);
    
    
    return 0;
}








// Take angle as input and convert into its trignormetric ratios
#include<stdio.h>
#include<math.h>

int main()
{
    float angle, s, c, t;
    
    printf("Enter angle : ");
    scanf("%f", &angle);
    
    s = sin(angle);
    c = cos(angle);
    t = tan(angle);
    
    printf("s = %f\nc = %f\nt = %f", s, c, t);
    
    
    return 0;
    
}












//swap
#include<stdio.h>

int main()
{
    int C, D, n;
    
    printf("Enter 2 numbers: \n");
    scanf("%d\n%d", &C, &D);
    
    n = C;
    C = D;
    D = n;
    
    printf("C = %d\nD = %d",C ,D);
    
    
    return 0;
}









//quantity and rate using if else
#include<stdio.h>

int main()
{
    int qty, dis;
    float rate, tot;
    
    printf("Enter rate and quantiy : \n");
    scanf("%f\n%d", &rate, &qty);
    
    if(qty > 1000)
        dis = 10;
    else
        dis = 0;
    
    tot = (qty * rate) - (qty * rate * dis/100);
    printf("Total : %f", tot);
    
    
    return 0;
}













//basic salary and gross salary for multiple statements within if-else
#include<stdio.h>

int main()
{
    float bs, gs, da, hra;
    
    printf("Basic salary : ");
    scanf("%f", &bs);
    
    if(bs < 1500){
        hra = 0.1 * bs;
        da = 0.9 * bs;
    }
    else{
        hra = 500;
        da = 0.98 * bs;
    }
    
    gs = bs + da + hra;
    printf("Gross salary : %f", gs);
    
    
    return 0;
}











//Calculate profit or loss
#include<stdio.h>

int main()
{
    float cp, sp, l, p;
    
    printf("Enter cost price and selling price : \n");
    scanf("%f\n%f", &cp, &sp);
    
    p = sp - cp;
    l = cp - sp;
    
    if(p > 0)
        printf("Profit = Rs. %f", l);
    if(l > 0)
        printf("Loss = Rs. %f", p);
    if(p == 0)
        printf("No profit or loss.");
        
        
    return 0;    
}











//Check a whether a number is even or odd
#include<stdio.h>

int main()
{
    int even, odd, n;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    
    if(n % 2 == 0)
        printf("Number is even.");
    else 
        printf("Number is odd.");
        
    
    return 0;    
}














//Check whether a year is a leap or not
#include<stdio.h>

int main()
{
    int yr;
    
    printf("Enter a year : ");
    scanf("%d", &yr);
    
    if(yr % 100 == 0){
        if(yr % 400 == 0)
            printf("It is a leap year.");
        else
            printf("It is not a leap year.");
    }
    else
    {
        if(yr % 4 == 0)
            printf("It is a leap year.");
        else
            printf("It is not a leap year.");
            
            
        return 0;    
    }
}












//reverse a number and check if its equal or not to the original number
    #include<stdio.h>

    int main()
    {
        int num, n, revNum = 0, d5, d4, d3, d2, d1;
        
        printf("Enter a five digit number : ");
        scanf("%d", &n);
        
        num = n;
        d5 = num%10;
        num = num/10;
        d4 = num%10;
        num = num/10;
        d3 = num%10;
        num = num/10;
        d2 = num%10;
        num = num/10;
        d1 = num%10;
        num = num/10;
        
        revNum = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
        printf("%d %d", n, revNum);
        
        if(revNum == n)
            printf("Equal!");
        else 
            printf("Not equal!");
            
            
        return 0;    
        
    }












//youngest of three friends
#include<stdio.h>

int main()
{
    int r, s, a, youngest;
    
    printf("Enter ages of Ram, Shyam and Ajay respectively :\n");
    scanf("%d\n%d\n%d", &r, &s, &a);
    
    if(r < s){
        if(r < a)
            printf("Ram is the youngest.");
        else
            printf("Ajay is the youngest.");
    }
    else{
        if(s < a)
            printf("Shyam is the youngest.");
        else
            printf("Ajay is the youngest.");
    }
    
    
    return 0;
}














//sum of angles is equal to 180 or not
#include<stdio.h>

int main()
{
    int a1, a2, a3, sum;
    
    printf("Enter the three angles : \n");
    scanf("%d\n%d\n%d", &a1, &a2, &a3);
    
    sum = a1 + a2 + a3;
    
    if(sum == 180)
        printf("It is a triangle.");
    else
        printf("It is not a triangle");
        
        
    return 0;    
}









//Find the absolute value of a number
#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter a number : \n");
    scanf("%d", &num);
    
    if(num < 0)
        num = num * -1;
    printf("The absolute value of the number is %d", num);
    
    
    return 0;
}











//comparing area and perimeter of a rectangle
#include<stdio.h>

int main()
{
    int l, b, area, perimeter;
    
    printf("Enter length and breadth of a rectangle : \n");
    scanf("%d\n%d", &l, &b);
    
    area = l * b;
    perimeter = 2 * (l + b);
    
    if(area > perimeter)
        printf("Area of the rectangle is greater than its perimeter.");
    else
        printf("Area of the rectangle is not greater than its perimeter.");
        
        
    return 0;    
}











//Check whether points are collinear or not 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, s1, s2, s3;
    
    printf("Enter coordinates of first point : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of third point : ");
    scanf("%d %d", &x3, &y3);
    
    s1 = abs(x2 - x1) / abs(y2 - y1);
    s2 = abs(x3 - x1) / abs(y3 - y1);
    s3 = abs(x3 - x2) / abs(y3 - y2);
    
    if((s1 == s2) && (s1 == s3))
        printf("Points are collinear!");
    else
        printf("Points are not collinear!");
        
        
    return 0;    
}











//check whether x and y lie inside, outside or on the circle
#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, r;
    int dis, d;
    
    printf("Enter x and y coordinates and radius of the circle respectively :\n");
    scanf("%d\n%d\n%d",&x, &y, &r);
    
    dis = pow(x, 2) + pow(y, 2);
    d = pow(r, 2);
    
    if(dis == d)
        printf("Points lie on the circle.");
    else{
        if(dis > d)
            printf("Points lie outside the circle.");  
        else
            printf("Points lie inside the circle.");
    }  
    
    
    return 0;
}












//check whether a given point lies on origin, y-axis or x-axis
#include<stdio.h>

int main()
{
    int x, y;
    
    printf("Enter x and y : \n");
    scanf("%d\n%d", &x, &y);
    
    if(x==0 && y==0)
        printf("Point lies on origin.");
    else if(x!=0 && y==0)
        printf("Point lies on x axis.");
    else if(x==0 && y!=0)
        printf("Point lies on y axis");
    else
         printf("Point does not lie on origin, nor x axis or y axis.");
        
        
    return 0;     
            
}














//Given a year, calculate the first day of that year
#include<stdio.h>

int main()
{
    int leapDays, firstDay, yr;
    long int normalDays, totalDays;
    
    printf("Enter year : ");
    scanf("%d", &yr);
    
    normalDays = (yr - 1) * 365L;
    leapDays = (yr - 1)/4 - (yr - 1)/100 + (yr - 1)/400;
    totalDays = normalDays + leapDays;
    firstDay = totalDays%7;
    
    if(firstDay == 0)
        printf("Monday\n");
    if(firstDay == 1)
        printf("Tuesday\n");
    if(firstDay == 2)
        printf("Wednesday\n");
    if(firstDay == 0)
        printf("Thursday\n");
    if(firstDay == 0)
        printf("Friday\n"); 
    if(firstDay == 0)
        printf("Saturday\n"); 
    if(firstDay == 0)
        printf("Sunday\n");
        
        
    return 0;    
         
}














//Using nested if-elses to check the division according to the percentage of marks obtained
#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, per;
    
    printf("Enter marks in 5 subjects : \n");
    scanf("%d\n%d\n%d\n%d\n%d", &m1, &m2, &m3, &m4, &m5);
    
    per = (m1 + m2 + m3 + m4 + m5) / 500 * 100;
    
    if(per > 60)
        printf("First Division!");
    else
    {
        if(per > 50)
            printf("Second Division");
        else
        {
            if(per > 40)
                printf("Third Division");
            else
                printf("Fail :(");
        }
    }
    
    return 0;
}











//Using logical operators to check the division according to the percentage of marks obtained
#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, per;
    
    printf("Enter marks in 5 subjects : \n");
    scanf("%d\n%d\n%d\n%d\n%d", &m1, &m2, &m3, &m4, &m5);
    
    per = (m1 + m2 + m3 + m4 + m5) / 500 * 100;
    
    if(per > 60)
        printf("First Division!");
    if(per < 60 && per >= 50)
        printf("Second Division");
    if(per < 50 && per >= 40)
        printf("Third Division"); 
    if(per < 40)
        printf("Fail :(");    
        
    
    return 0;
}













//Using else-if finding the division 
#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, per;
    
    printf("Enter marks in 5 subjects : \n");
    scanf("%d\n%d\n%d\n%d\n%d", &m1, &m2, &m3, &m4, &m5);
    
    per = (m1 + m2 + m3 + m4 + m5) / 500 * 100;
    
    if(per >= 60)
        printf("First Division!");
    else if(per >= 50)
        printf("Second Division");
    else if(per >= 40)
        printf("Third Division"); 
    else
        printf("Fail :(");    
        
    
    return 0;
}















//Using logical operators check whether driver is insured or not
#include<stdio.h>

int main()
{
    char sex, ms;
    int age;
    
    printf("Enter your age, sex, marital status : \n");
    scanf("%d\n%c\n%c", &age, &sex, &ms);
    
    if((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
        printf("Driver is insured!");
    else
        printf("Driver is not insured!");
        
        
    return 0;    
}










//using if-else and logical operators calculate the salary
#include<stdio.h>

int main()
{
    char g, qual;
    int yos, sal = 0;
    
    printf("Enter your qualification, gender, years of service :\n");
    scanf("%c\n%c\n%d", &qual, &g, &yos);
    
    if(g == 'M' && yos >= 10 && qual == 'P')
        sal = 15000;
    else if(g == 'M' && yos >= 10 && qual == 'G')
        sal = 10000;
    else if(g == 'M' && yos < 10 && qual == 'P') 
        sal = 10000;
    else if(g == 'M' && yos < 10 && qual == 'G')
        sal = 7000;
    else if(g == 'F' && yos >= 10 && qual == 'P')
        sal = 12000;
    else if(g == 'F' && yos >= 10 && qual == 'G')
        sal = 9000;
    else if(g == 'F' && yos < 10 && qual == 'P')
        sal = 10000;
    else if(g == 'F' && yos < 10 && qual == 'G')
        sal = 6000;
        
    printf("%d", sal);    

    return 0;    
}










//Using logical operators check whether a year is a leap year or not
#include<stdio.h>

int main()
{
    int year;
    
    printf("Enter a year : ");
    scanf("%d", &year);
    
    if((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("Leap year!");
    else
        printf("Not a leap year!");
        
        
    return 0;    
}















//Using logical operators check whether a character is uppercase, lowercase, digit, or a special symbol
#include<stdio.h>

 int main()
 {
    char c;
    
    printf("Enter a character : ");
    scanf("%c", &c);
    
    if(c >= 65 && c <= 90)
        printf("It is an uppercase letter.");
    else if(c >= 97 && c <= 122)
        printf("It is a lowercase letter.");
    else if(c >= 48 && c <= 72)
        printf("It is a digit.");
    else if((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127))
        printf("It is a special symbol.");    
 
    
    return 0; 
 }










//sum of 2 sides of triangle is greater than the largest of the three. 
//check if it's a triangle or not
#include<stdio.h>

int main()
{
    int s1, s2, s3, sum, largeSide;
    
    printf("Enter the three sides of the triangle : \n");
    scanf("%d\n%d\n%d", &s1, &s2, &s3);
    
    if(s1 > s2)
    {
        if(s1 > s3)
        {
            sum = s2 + s3;
            largeSide = s1;
        }
        else
        {
            sum = s1 + s2;
            largeSide = s3;
        }
    }
    else
    {
        if(s2 > s3)
        {
            sum = s1 + s3;
            largeSide = s2;
        }
        else
        {
            sum = s1 + s2;
            largeSide = s3;
        }
    }
    
    if(sum > largeSide)
        printf("It is a triangle!");
    else
        printf("It is not a triangle");
        
        
    return 0;    
}














//check whether a triangle is isosceles, scalene, equilateral or right angled
#include<stdio.h>

int main()
{
    int s1, s2, s3, a, b, c;
    
    printf("Enter the three sides if a triangle : \n");
    scanf("%d\n%d\n%d", &s1, &s2, &s3);
    
    if(s1 != s2 && s2 != s3 && s1 != s3)
        printf("Scalene triangle\n");
    if(s1 == s2 && s2 == s3)
        printf("Equilateral triangle");
    if((s1 == s2 && s2 != s3) || (s2 == s3 && s3 != s1) || (s1 == s3 && s3 != s2))
        printf("Isosceles triangle\n");
    
    a = s1*s1 == s2*s2 + s3*s3;
    b = s2*s2 == s1*s1 + s3*s3;
    c = s3*s3 == s1*s1 + s2*s2;
    
    if(a || b || c)
        printf("Equilateral triangle\n");
        
        
    return 0;    
}











//Converting RGB to CMYK colors
#include<stdio.h>

int main()
{
    float red, green, blue, white;
    float cyan, magenta, yellow, black;
    float max;
    
    printf("Enter red, green, blue values (0 to 255) : \n");
    scanf("%f\n%f\n%f", &red, &green, &blue);
    
    if(red == 0 && green == 0 && blue == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
    red = red/255;
    green = green/255;
    blue = blue/255;
    
    max = red;
    if(green > max)
        max = green;
    if(blue > max)
        max = blue;
    
    white = max;
    cyan = (white - red)/white;
    magenta = (white - green)/white;
    yellow = (white - blue)/white;
    black = 1 - white;
    }
    
    
    printf("%f\n%f\n%f\n%f", cyan, magenta, yellow, black);
    return 0;
}











//Check the grade of the steel based on its hardness, carbon content and tensile strength
#include<stdio.h>

int main()
{
    float hard, carbon, tensile;
    int grade;
    
    printf("Enter hardness, carbon content and tensile strength of the steel : \n");
    scanf("%f\n%f\n%f", &hard, &carbon, &tensile);
    
    if(hard > 50 && carbon > 0.7 && tensile > 5600)
        grade = 10;
    else if(hard > 50 && carbon > 0.7 && tensile <= 5600)
        grade = 9;
    else if(hard <= 50 && carbon > 0.7 && tensile > 5600)
        grade = 8;
    else if(hard > 50 && carbon <= 0.7 && tensile > 5600)
        grade = 7;
    else if(hard > 50 || carbon > 0.7 || tensile > 5600)
        grade = 6;
    else
        grade = 5; 
        
    printf("Grade : %d", grade);
    
    return 0;    
}











//Calculate the bmi category
#include<stdio.h>

int main()
{
    float h, w, bmi;
    
    printf("Enter your height and weight respectively : \n");
    scanf("%f\n%f", &h, &w);
    
    bmi = w/(h*h);
    
    if(bmi < 15)
        printf("BMI Category = Starvation.");
    if(bmi > 15 && bmi <= 17.5)
        printf("BMI Category = Anorexic.");
    if(bmi > 17.5 && bmi <= 18.5)
        printf("BMI Category = Underweight.");
    if(bmi > 18.5 && bmi <= 24.9)
        printf("BMI Category = Ideal.");
    if(bmi > 24.9 && bmi <= 25.9)
        printf("BMI Category = Overweight.");
    if(bmi > 25.9 && bmi <= 30.9)
        printf("BMI Category = Obese.");
    if(bmi >= 40)
        printf("BMI Category = Morbidly Obese.");
        
    return 0;    
        
}












//special symbol or uppercase or lower letter 
#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter a character : \n");
    scanf("%c", &ch);
    
    ch >= 97 && ch <= 122 ? printf("Lowercase letter\n") : printf("Uppecase letter\n");
    ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || ( ch >= 91 && ch <= 96) || (ch >= 123)) ?
    printf("Special symbol!") : printf("Not a Special symbol!");
    
    return 0;
}












//Using conditional operators check if its a leap year or not
#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    
    (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0) ?
    printf("Leap year!") : printf("Not a leap year.");
    
    return 0;
}










//Using conditional operator print the greatest of the three integers
#include<stdio.h>

int main()
{
    int a, b, c, max = 0;;
    
    printf("Enter 3 numbers : \n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d", max);
    
    return 0;
}








//Using conditional operators check whether the sum of squares of sine and cosine is equal to 1
#include<stdio.h>
#include<math.h>

int main()
{
    float angle, sum;
    
    printf("Enter an angle (degrees) : ");
    scanf("%f", &angle);
    
    angle = angle * 3.14/180;
    sum = pow(sin(angle), 2) + pow(cos(angle), 2) == 1 ? 
    printf("true!") : printf("False");
    
    return 0;
}












//Using conditional operators check whether its clerk, mananger, or accountant
#include<stdio.h>

int main()
{
    float sal;
    
    printf("Enter the salary : ");
    scanf("%f", &sal);
    
    sal >= 25000 && sal <= 40000 ? printf("Manager\n") : 
    (sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n"));
    
    return 0;
}








//Calculation of simple interest for 3 sets of p, n, and r
#include<stdio.h>

int main()
{
    int p, n, count = 1;
    float r, si;
    
    while(count <= 3)
    {
    printf("Enter values of p, n and r : \n");
    scanf("%d\n%d\n%f", &p, &n, &r);
    
    si = p * n * r / 100;
    printf("Simple Interest = %f\n", si);
    
    count++;
    }
    
    return 0;
}












//Find the factorial of a number 
#include<stdio.h>

int main()
{
    int fact, i, num;
    
    printf("Enter a number : \n");
    scanf("%d", &num);
    
    fact = i = 1;
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    
    printf("Factorial of %d = %d", num, fact);
    
    
    return 0;
}







//Compute value of number raised to another
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, sol;
    
    printf("Enter 2 numbers : \n");
    scanf("%f\n%f",&a, &b);
    
    sol = pow(a, b);
    printf("%f", sol);
    
    
    return 0;
}













//Print all the ACII values and their equivalent characters
#include<stdio.h>

int main()
{
    int i = 0;
    
    while(i <= 255)
    {
        printf("%d %c\n", i, i);
        i++;
    }
    
    return 0;
}













//for loop
//calculate simple interest for 3 sets of p, n, r
#include<stdio.h>

int main()
{
    int p, n;
    float r, si;
    
    for(int i = 0; i < 3; i++)
    {
        printf("Enter p, n and r : \n");
        scanf("%d\n%d\n%f", &p, &n, &r);
        
        si = p * n * r / 100;
        printf("%f\n", si);
    }
    
    return 0;
}









//Demonstration of nested loops
#include<stdio.h>

int main()
{
    int sum;
    
    for(int r = 1; r <= 3; r++)
    {
        for(int c = 1; c <= 2; c++)
        {
            sum = r + c;
            printf("r = %d c = %d sum = %d\n", r, c, sum);
        }
    }
    
    return 0;
}










//check whether a number is a prime or not
#include<stdio.h>

int main()
{
    int num, i = 2;
    
    printf("Enter a number : \n");
    scanf("%d", &num);
    
    while(i < num - 1)
    {
        if(num % i == 0)
            printf("Not a prime number!");
            break;
    }
    if(num % i != 0)
        printf("Prime number!");
        
    
    return 0;    
}









//Program to demonstrate that key BREAK only breaks the control from the WHILE in which it is used
#include<stdio.h>

int main()
{
    int i = 1, j = 1;
    while(i++ <= 100)
    {
        while(j++ <= 200)
        {
            if(j == 150)
                break;
            else
                printf("%d %d\n", i, j);
        }
    }
    
    return 0;
}










//use of continue statement
#include<stdio.h>

int main()
{
    for(int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            if(j == i)
                continue;
            printf("%d %d\n", i, j);    
        }
    }
    
    
    return 0;
}











//learning difference between while and do-while loops
#include<stdio.h>

int main()
{
    while(4 < 1)
        printf("Hello\n");
        
    do
    {
        printf("Hello\n");    
    }while(4 < 1);
    
    
    return 0;
}









//printf prime numbers between 1 and 300
#include<stdio.h>

int main()
{
    int i, n;
    for(n = 1; n <= 300; n++)
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
                break;
        }
        if(i == n)
            printf("%d\t", n);
    }
    
    return 0;
}










//Sum of first seven terms of a series : 1/1! + 2/2! + 3/3! ....
#include<stdio.h>

int main()
{
    int i = 1, j;
    float fact, sum = 0.0;
    
    for(i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for(j = 1; j <= i; j++)
            fact = fact * j;
            
        sum = sum + i/fact;    
    }
    printf("sum = %f", sum);
    
    return 0;
    
}









//write all combinations of 1, 2, and 3
#include<stdio.h>

int main()
{
    int i = 1, j = 1, k = 1;
    
    for(i = 1; i <= 3 ; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            for(k = 1; k <= 3; k++)
                printf("%d %d %d\n", i, j, k);
        }
    }
    
    return 0;
}











//using switch statement
#include<stdio.h>

int main()
{
    int i = 2;
    
    switch(i)
    {
        case 1:
            printf("I am in case 1!\n");
        case 2:
            printf("I am in case 2!\n");
        case 3:
            printf("I am in case 3!\n");
        case 4:
            printf("I am in case 4!\n");  
        default:
            printf("I am in case default!\n");    
    }
    
    
    return 0;
}












//using switch and break statements together
#include<stdio.h>

int main()
{
    int i = 2;
    
    switch(i)
    {
        case 1:
            printf("I am in case 1!\n");
            break;
        case 2:
            printf("I am in case 2!\n");
            break;
        case 3:
            printf("I am in case 3!\n");
            break;
        case 4:
            printf("I am in case 4!\n"); 
        break;
        default:
            printf("I am in case default!\n");    
    }
    
    
    return 0;
}








//alphabets in switch
#include<stdio.h>

int main()
{
    char ch;
    
    printf("Type an alphabet : ");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("a as in ashram.");
            break;
        case 'b':
        case 'B':
            printf("b as in blessings.");
            break;
        case 'c':
        case 'C':
            printf("c as in calm."); 
            break;
        default:
            printf("Wish you knew what alphabets are!");
    }
    
    return 0;
}













//learning goto statement
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int goals;
    
    printf("Enter the number of goals scored : \n");
    scanf("%d", &goals);
    
    if(goals <= 5)
        goto sos;
    else
    {
        printf("learn C!\n");
        exit(1);
    }
    sos :
        printf("To err is human\n");
    
    
    return 0;    
}










//using when there are several loops
#include<stdio.h>

int main()
{
    int i, j, k;
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            for(k = 1; k <= 3; k++)
            {
                if(i == 3 && j == 3 && k == 3)
                    goto out;
                else
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    out:
        printf("We are out of the loops!");
        
        
    return 0;    
}











//Menu driven program
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice, num, i, fact;
    while(1)
    {
        printf("1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd/Even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter a number : ");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                    fact = fact * i;
                printf("Factorial = %d\n", fact);
                break;
            case 2:
                printf("Enter a number : ");
                scanf("%d", &num);
                for(i = 2; i < num; i++)
                {
                    if(num % i == 0)
                    {
                        printf("Not a prime number!\n");
                        break;
                    }    
                }
                if(i == num)
                    printf("Prime number!\n");
                    break;
            case 3:
                printf("Enter a number : ");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("It's an even number!\n");
                else
                    printf("It's an add number!\n");
                    break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice!\a\n");
                break;
        }
    }
}











//learning to used functions in a program
#include<stdio.h>

void message();

int main()
{
    message();
    printf("I love you!");
    
    return 0;
}
void message()
{
    printf("Hey, you know what!\n");
}









//calling more than one function
#include<stdio.h>

void italy();
void tokyo();
void paris();

int main()
{
    printf("I am in main\n");
    italy();
    tokyo();
    paris();
    
    return 0;
}
void italy()
{
    printf("I am in Italy!\n");
}
void tokyo()
{
    printf("I am in Tokyo!!\n");
}
void paris()
{
    printf("I am in Paris!!!\n");
}












//sending and receiving values between functions
#include<stdio.h>

int calsum(int x, int y, int z);

int main()
{
    int sum, a, b, c;
    
    printf("Enter any three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = calsum(a, b, c);
    printf("sum is %d.", sum);
    
    return 0;
}
int calsum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return d;
}








//practising return type of a function
#include<stdio.h>

float square(float);

int main()
{
    float a, b;
    
    printf("Enter a number : ");
    scanf("%f", &a);
    
    b = square(a);
    printf("Square of %f is %f", a, b);
    
    return 0;
}
float square(float x)
{
    float y;
    y = x * x;
    
    return y;
}









//Calculate the factorial of a number using functions
#include<stdio.h>

int factorial(int);

int main()
{
    int num, fact;
    printf("Enter a number : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
    
    return 0;
}
int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}










//Write a power function
#include<stdio.h>
#include<math.h>

int power(int, int);

int main()
{
    int a, b, ans;
    
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &a, &b);
    
    ans = power(a, b);
    printf("Power of (%d,%d) is %d.", a, b, ans);
    
    
    return 0;
}

int power(int x, int y)
{
    int power;
    power = pow(x, y);
    
    return power;
}










//Cpnvert given year into its roman equivalent
#include<stdio.h>

int romanise(int, int, char);

int main()
{
    int yr;
    
    printf("Enter a year : ");
    scanf("%d", &yr);
    
    yr = romanise(yr, 1000, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 50, 'l');
    yr = romanise(yr, 10, 'x');
    yr = romanise(yr, 5, 'v');
    yr = romanise(yr, 1, 'i');
    
    return 0;
}
int romanise(int y, int k, char ch)
{
    int j;
    j = y/k;
    for(int i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }
    return(y - k * j); 
}









//pointers & - address of, * - value at
#include<stdio.h>
 
int main()
{
    int i = 3;
    printf("Address of i = %u\n", &i);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
     
    return 0;
}











//relation between & and * in pointers
#include<stdio.h>

int main()
{
    int i = 3;
    int *j;
    j = &i;
    
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of j = %u\n", &j);
    printf("Value of j = %u\n", j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    
    return 0;
}










//more on pointers
#include<stdio.h>

int main()
{
    int i = 3, *j, **k;
    j = &i;
    k = &j;
    
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of i = %u\n", *k);
    printf("Address of j = %u\n", &j);
    printf("Address of j = %u\n", k);
    printf("Address of k = %u\n", &k);
    printf("Value of j = %u\n", j);
    printf("Value of k = %u\n", k);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);
    
    return 0;
}












//call by value
#include<stdio.h>

void swap(int, int);

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
void swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    
    printf("x = %d, y = %d\n", x, y);
}









//call by reference
#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);


    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x = %d, y = %d\n", *x, *y);
}







//using call by reference returning more than one value from a function at a time
#include<stdio.h>

void areaperi(int, float*, float*);

int main()
{
    int radius;
    float area, perimeter;
    
    printf("Enter radius for a circle : ");
    scanf("%d", &radius);
    
    areaperi(radius, &area, &perimeter);
    
    printf("area = %f\n", area);
    printf("perimeter = %f\n", perimeter);
    
    return 0;
}
void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}












//Using functions find sum, avg and standard deviation if 5 numbers
#include<stdio.h>
#include<math.h>

void stats(int *, int *, double *);

int main()
{
    int sum, avg;
    double stdev;
    
    stats(&sum, &avg, &stdev);
    printf("SUM  = %d\nAVG = %d\nSTDEV = %f\n", sum, avg, stdev);
    
    return 0;
}
void stats(int *sum, int *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;
    
    printf("Enter 5 numbers : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum/5;
    *stdev = sqrt((pow((n1 - *avg), 2.0) + pow((n2 - *avg), 2.0) + pow((n3 - *avg), 2.0) + pow((n4 - *avg), 2.0) + pow((n5 - *avg), 2.0))/4);
}












//Function that returns average and percentage
#include<stdio.h>

void result(int *, int *, int *, float *, float *);

int main()
{
    int m1, m2, m3;
    float avg, per;
    
    printf("Enter marks in 3 subjects : ");
    scanf("%d %d %d", &m1, &m2, &m3);
    
    result(&m1, &m2, &m3, &avg, &per);
    printf("Average = %f\nPercentage = %f\n", avg, per);
    
    return 0;
}
void result(int *m1, int *m2, int *m3, float *a, float *p)
{
    *p = *a = (*m1 + *m2 + *m3) / 3.0;
}











//Evaluation of a series
#include<stdio.h>
#include<stdlib.h>

float numerator(float, int);
float denominator(int);

int main()
{
    float x, n, d, term, sum, oldsum;
    int i, j;
    
    printf("Enter a number : ");
    scanf("%f", &x);
    
    i = j = 1;
    sum = 0;
    
    while(1)
    {
        n = numerator(x, j);
        d = denominator(j);
        
        term = n/d;
        oldsum = sum;
        
        (i % 2 == 0) ? sum = sum - term : (sum = sum + term);
        if(abs(sum - oldsum) < 0.00001)
            break;
        i++;
        j += 2;
    }
    
    printf("sum = %f\n", sum);
    
    return 0;
}
float numerator(float y, int j)
{
    float k = 1;
    int m;
    
    for(m = 1; m <= j; m++)
        k *= y;
    return(k);    
}
float denominator(int j)
{
    int m;
    float h = 1;

    for(m = 1; m <= j; m++)
        h = h * m;
    return(h);    
}












//recursion for factorial
#include<stdio.h>

int rec(int);

int main()
{
    int a, fact;
    
    printf("Enter a number : ");
    scanf("%d", &a);
    
    fact = rec(a);
    printf("Factorial is %d.",fact);
    
    return 0;
}
int rec(int x)
{
    int f;
    
    if(x == 1)
        return(1);
    else
        f = x * rec(x - 1);
        
    return(f);    
}











//Calculte sum of digits of a 5-digit number using recursion
#include<stdio.h>

int rsum(int);

int main()
{
    int num, sum;
    int n;
    
    printf("Enter a five a digit number : ");
    scanf("%d", &num);
    
    sum = rsum(num);
    printf("Sum of its digits = %d", sum);
    
    return 0;
}
int rsum(int n)
{
    int x, s;
    x = n % 10;
    
    if(n != 0)
        s = x + rsum(n / 10);
    else   
        return 0;
        
    return s;    
}









//Find prime factors of a number recursively
#include<stdio.h>

void factorize(int, int);

int main()
{
    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Prime factors are : ");
    factorize(num, 2);
    
    return 0;
}
void factorize(int n, int i)
{
    if(i <= n)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
        else
            i++;
        factorize(n, i);    
    }
}









//Generate first 25 terms of a fibonacci sequence using recursion
#include<stdio.h>

void fibo(int ,int, int);

int main()
{
    int old = 1, current = 1;
    printf("%d\t%d\t", old, current);
    fibo(old, current, 23);
    
    return 0;
}
void fibo(int old, int current, int terms)
{
    int newTerm;
    if(terms >= 1)
    {
        newTerm = old + current;
        printf("%d\t", newTerm);
        terms--;
        
        fibo(current, newTerm, terms);
    }
}








//char - signed and unsigned values
#include<stdio.h>

int main()
{
    char ch = 128;
    char dh = -132;
    
    printf("%d %d", ch, dh);
    
    return 0;
}






//garbage values as default in automatic storage class
#include<stdio.h>

int main()
{
    auto int i, j;
    printf("%d, %d", i, j);
    
    return 0;
}







//scope and life of an automatic variable
#include<stdio.h>

int main()
{
    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("%d ", i);
        }
        printf("%d ", i);
    }
    printf("%d ", i);
}






//register storage class' storage - CPU registers
#include<stdio.h>
    
int main()
{
    register int i;
    for(i = 1; i <= 10; i++)
    printf("%d ", i);
            
    return 0;    
}







//static storage class
#include<stdio.h>

void increment();

int main()
{
    increment();
    increment();
    increment();
    
    return 0;
}
void increment()
{
    auto int i = 1;
    static int j = 1;
    
    i += 1;
    j += 1;
    
    printf("%d %d\n", i, j);
}









//scope of global variables
#include<stdio.h>

int i;

void increment();
void decrement();

int main()
{
    printf("i = %d\n", i);
    
    increment();
    increment();
    decrement();
    decrement();
    
    return 0;
}
void increment()
{
    i += 1;
    printf("on incrementing i = %d\n", i);
}
void decrement()
{
    i -= 1;
    printf("on decrementing i = %d\n", i);
}






//External storage 
#include<stdio.h>

int x = 21;

int main()
{
    extern int y;
    printf("%d %d", x, y);
    
    return 0;
}
int y = 31;








//local and global variables
#include<stdio.h>

int x = 10;
void display();

int main()
{
    int x = 20;
    printf("%d  ", x);
    display();
    
    return 0;
}
void display()
{
    printf("%d", x);
}








//macro templates and macro expansion
#include<stdio.h>
#define PI 3.1428

int main()
{
    float r = 6.25, area;
    area = PI * r * r;
    printf("Area of circle = %f", area);
    
    return 0;
}








//macros with arguments
#include<stdio.h>
#define AREA(x) (3.14 * x * x)

int main()
{
    float r1 = 6.25, r2 = 2.5, a;
    
    a = AREA(r1);
    printf("%f\n", a);
    
    a = AREA(r2);
    printf("%f\n", a);
    
    return 0;
}









//#pragma warn
#include<stdio.h>
#pragma warn +rvi  // -rvi
#pragma warn +par  // -par
#pragma warn +rch  // -rch

int f1()
{
    int a = 5;
}

void f2(int x)
{
    printf("Inside f2\n");
}

int f3()
{
    int x = 6;
    return x;
    x++;
}

int main()
{
    f1();
    f2(7);
    f3();
    
    return 0;
}








//Macros ISUPPER, ISLOWER, ISALPHA, BIG
#include<stdio.h>
#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(X) (X >= 97 && X <= 122 ? 1 : 0)
#define ISALPHA(x) (ISLOWER(x) || ISUPPER(x))
#define BIG(x,y) (x > y ? x : y)

int main()
{
    char ch;
    int d, a, b;
    
    printf("Enter any character : ");
    scanf("%c", &ch);
    
    if(ISUPPER(ch) == 1)
        printf("It is a capital letter!\n");
    if(ISLOWER(ch) == 1)
        printf("It a small-case letter!\n");
    if(ISALPHA(ch) == 1)
        printf("It is an alphabet!\n");
    
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    
    d = BIG(a, b);
    printf("Bigger number is %d.\n", d);
    
    
    return 0;
}












//avg marks of 30 students using arrays
#include<stdio.h>

int main()
{
    int avg, sum = 0, i;
    int marks[30];
    
    for(i = 0; i < 30; i++)
    {
        printf("Enter your marks : ");
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < 30; i++)
        sum = sum + marks[i];
    
    avg = sum/30;
    
    printf("Average marks of class = %d", avg);
    
    return 0;

}









//Demonstration of call by value and call by reference for arrays
#include<stdio.h>

void display1(int);
void display2(int *);

int main()
{
    int i;
    int marks[] = {10, 20, 30, 40, 50, 60 ,70};
    
    for(i = 0; i < 7; i++)
        display1(marks[i]);
        
    printf("\n");
    
    for(i = 0; i < 7; i++)
        display2(&marks[i]);
        
    return 0;    
}
void display1(int m)
{
    printf("%d ", m);
}
void display2(int *n)
{
    printf("%d ", *n);
}








//pointers and arrays
#include<stdio.h>

int main()
{
    int i = 1, *x;
    float j = 1.5, *y;
    char k = 'c', *z;
    
    printf("value of i = %d\n", i);
    printf("value of j = %f\n", j);
    printf("value of k = %c\n", k);
    
    x = &i; y = &j; k = &z;
    
    printf("original address of i = %u\n", x);
    printf("original address of j = %u\n", y);
    printf("original address of k = %u\n", z);
    
    x++; y++; z++;
    
    printf("new address of i = %u\n", x);
    printf("new address of j = %u\n", y);
    printf("new address of k = %u\n", z);
    
    return 0;
}









//operations on pointers
#include<stdio.h>

int main()
{
    int arr[] = {10, 20, 30 , 40, 50, 60, 70};
    int i = 4, *j, *k, *x, *y;
    
    j = &i;
    j += 9;  //pointer + number
    
    k = &i;
    j -= 3;  //pointer - number
    
    x = &arr[1];
    y = &arr[5];
    printf("%ld\n", y - x);  //subtraction of one pointer from another
    
    j = &arr[4];
    k = (arr + 4);
    
    if(j == k)  //comparison of 2 pointers
        printf("Both are same!\n");
    else
        printf("Not same!\n");
        
    
    return 0;    
}








//accessing array elements using pointers
#include<stdio.h>

int main()
{
    int num[] = {10, 11, 23, 56, 20, 55};
    int i, *j;
    j = &num[0];
    
    for(i = 0; i <6; i++)
    {
        printf("address = %u element = %d\n", j, *j);
        j++;
    }
    
    return 0;
}








//demonstration of passing an array to a function
#include<stdio.h>

void display1(int *, int);
void display2(int[], int);

int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    
    display1(&num[0], 6);
    display2(&num[0], 6);
    
    return 0;
}
void display1(int *j, int n)
{
    int i;
    for(i = 0; i <= n - 1; i++)
    {
        printf("element = %d\n", *j);
        j++;  //increment pointer to point to next element
    }
}
void display2(int j[], int n)
{
    int i;
    for(i = 0; i <= n - 1; i++)
        printf("element = %d\n", j[i]);
}









//num[i], i[num], *(num + i), *(i + num)
#include<stdio.h>

int main()
{
    int num[] = {10, 20, 30, 40, 50, 60};
    
    for(int i = 0; i < 6; i++)
    {
        printf("Address : %u ", &num[i]);
        printf("Element : %d %d %d %d\n",num[i], i[num], *(i + num), *(num + i));
    }
    
    return 0;
}









//malloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max, *p;
    
    printf("Enter size of the array : ");
    scanf("%d", &max);
    
    p = (int *) malloc(max *sizeof(int ));
    
    for(int i = 0; i < 6; i++)
    {
        p[i] = i * i;
        printf("%d ", p[i]);
    }
    
    return 0;
}










//interchange adjacent elements of an array
#include<stdio.h>

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, t;
    
    for(i = 0; i < 10; i += 2)
    {
        t = num[i];
        num[i] = num[i + 1];
        num[i + 1] = t;
    }
    for(int i = 0; i < 10; i++)
        printf("%d\t", num[i]);
        
    return 0;    
}









//program to copy one array into another in reverse order
#include<stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i, j;
    
    printf("Original array = ");
    
    for(i = 0; i <= 4; i++)
        scanf("%d", &arr1[i]);
        
    for(i = 0, j = 4; i <= 4; i++, j--)
        arr2[j] = arr1[i];
    
    printf("reversed array = ");
    
    for(i = 0; i <= 4; i++)
        printf("%d ", arr2[i]);
        
        
    return 0;    
}









//program to find a number and its frequency in array
#include<stdio.h>

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 6, 4, 4, 1};
    int n, i, count = 0;
    
    printf("Enter an element to search : ");
    scanf("%d", &n);
    
    for(i = 0; i < 10; i++)
    {
        if(n == num[i])
            count++;
    }
    
    printf("Number %d is found %d time(s).", n, count);
    
    return 0;
}











//2D array for representing student's roll numbers and their marks
#include<stdio.h>

int main()
{
    int stud[4][2];
    
    for(int i = 0; i <=3; i++)
    {
        printf("Enter your roll number and marks : ");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }
    
    for(int i = 0; i <= 3; i++)
    {
        printf("Roll number is %d and marks = %d\n", stud[i][0], stud[i][1]);
    }
    
    return 0;
}








//2D array is an array of arrays
#include<stdio.h>

int main()
{
    int s[4][2] = {(1234, 56), (1212, 33), (1434, 80), (1312, 78)};
    
    for(int i = 0; i <= 3; i++)
        printf("Address of %dth element is %u\n", i, s[i]);
        
    
    return 0;    
}








//pointer notation to access to 2D array elements
#include<stdio.h>

int main()
{
    int s[4][2] = {{1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}};
    
    int i, j;
    
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 1; j++)
            printf("%d ", *(*(s + i) + j));
        printf("\n");    
    }
        
    
    return 0;    
}








//usage of pointer to an array
#include<stdio.h>

int main()
{
    int s[4][2] = {{1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}};
    int (*p)[2];
    int i, j, *pint;
    
    for(int i = 0; i <= 3; i++)
    {
        p = &s[i];
        pint = (int *)p;
        
        for(int j = 0; j <= 1; j++)
            printf("%d ", *(pint + j));
        printf("\n");    
    }
    
    
    return 0;
}











//passing 2D array to a function
#include<stdio.h>

void display(int q[][4], int, int);

int main()
{
    int a[3][4] = {
                    1, 2, 3, 4,
                    5, 6, 7, 8,
                    9, 0, 1, 6
                  };
                  
    display(a, 3, 4);
    
    
    return 0;
}
void display(int q[][4], int row, int col)
{
    int i, j;
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", q[i][j]);
        printf("\n");    
    }
}







//array of pointers
#include<stdio.h>

int main()
{
    int *arr[4];  //array of integer pointers
    int i = 2, j = 3, k = 10, l = 22, m;
    
    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;
    
    for(m = 0; m < 4; m++)
        printf("%d\n", *(arr[m]));
        
        
    return 0;    
}








//pick up largest number from 5x5 matrix
#include<stdio.h>

int main()
{
    int arr[5][5] = {
                        {11, 1, 7, 9, 7},
                        {13, 54, 56, 2, 5},
                        {23, 43, 89, 22, 13},
                        {14, 15, 17, 16, 19},
                        {45, 3, 6, 8, 10}
                    };
                    
    int i, j, big;
    big = arr[0][0];
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(arr[i][j] > big)
                big = arr[i][j];
        }
    }
    
    printf("Largest element in the matrix is %d.", big);
    
    
    return 0;
}









//To obtain transpose of a 4x4 matrix
#include<stdio.h>

int main()
{
    int arr[4][4], i, j;
    
    printf("Enter elements of a 4x4 matrix :\n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);
    }
    
    printf("array is : \n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");    
    }
    
    printf("Reversed array is :\n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", arr[j][i]);
        printf("\n");    
    }

    
    return 0;
}






//to tranpose a 4x4 matrix and write the new tranposed matrix in newArr[][]
#include<stdio.h>

int main()
{
    int arr[4][4], i, j;
    
    printf("Enter elements of a 4x4 matrix :\n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);
    }
    
    printf("array is : \n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");    
    }
    
    printf("Reversed array is :\n");
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", arr[j][i]);
        printf("\n");    
    }
    
    printf("New transposed array is :\n");
    
    int newArr[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            newArr[i][j] = arr[j][i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", newArr[i][j]);
        printf("\n");    
    }

    
    return 0;
}











//program to demonstrate printing of a string
#include<stdio.h>

int main()
{
    char name[] = "Smiley";
    int i = 0;
    
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}








//using pointer to print a string
#include<stdio.h>

int main()
{
    char name[] = "Samvida";
    char *ptr;
    
    ptr = name;
    
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}






//multi-word strings
#include<stdio.h>

int main()
{
    char name[25];
    
    printf("Enter your name : ");
    gets(name);
    puts("hello!");
    puts(name);
    
    return 0;
}







//scanf accepting multi-word strings
#include<stdio.h>

int main()
{
    char name[25];
    
    printf("Enter your name : ");
    scanf("%[^\n]s", name);
    
    printf("%s", name);
    
    
    return 0;
}







//strlen()
#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "Bamboozled";
    int len1, len2;
    
    len1 = strlen(s);
    len2 = strlen("HEY");
    
    printf("string = %s and its length = %d\n", s, len1);
    printf("string = %s and its length = %d\n", "HEY", len2);
    
    return 0;
}







//a look-alike of the function strlen()
#include<stdio.h>

int xstrlen(char *);

int main()
{
    char s[] = "Bamboozled";
    int len1, len2;
    
    len1 = xstrlen(s);
    len2 = xstrlen("HEY");
    
    printf("string = %s and its length = %d\n", s, len1);
    printf("string = %s and its length = %d\n", "HEY", len2);
    
    return 0;
}
int xstrlen(char *s)
{
    int length = 0;
    
    while(*s != '\0')
    {
        length++;
        s++;
    }
    
    return(length);
}








//strcpy()
#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "hey", target[4];
    
    strcpy(target, source);
    
    printf("source string : %s\n", source);
    printf("target string : %s\n", target);
    
    return 0;
}








//a look-alike function of strcpy()
#include<stdio.h>

void xstrcpy(char *, const char *);

int main()
{
    char source[] = "hey", target[4];
    
    xstrcpy(target, source);
    
    printf("source string : %s\n", source);
    printf("target string : %s\n", target);
    
    return 0;
}
void xstrcpy(char *t, const char *s)
{
    while(*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}









//strcat()
#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "fly", target[30] = "Butter";
    
    strcat(target, source);
    
    printf("source string : %s\n", source);
    printf("target string : %s\n", target);
    
    return 0;
}







//strcmp()
#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "Jerry", string2[] = "Ferry";
    int i, j, k;
    
    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");
    
    printf("%d %d %d", i, j, k);
    
    
    return 0;
}









//to extract a substring from a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int pos, n, i;
    char *s, *t;
    char str[20], newstr[20];
    
    printf("Enter a string : ");
    scanf("%s", &str);
    
    printf("Enter position and no. of characters to extract : ");
    scanf("%d %d", &pos, &n);
    
    s = str;
    t = newstr;
    
    if(pos < 0 || pos > strlen(str))
    {
        printf("Improper value!");
        exit(1);
    }
    if(n < 0)
        n = 0;
    if(n > strlen(str))
        n = n - strlen(str) - 1;
    
    s = s + pos;
    
    for(i = 0; i < n; i++) 
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
    
    printf("%s", newstr);
    
    
    return 0;
}








//to convert a string to an integer
#include<stdio.h>

int main()
{
    int num = 0, i;
    char str[6];
    
    printf("Enter a string containing a number : ");
    scanf("%s", str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            num = num * 10 + (str[i] - 48);
        }
        else
        {
            printf("Not a valid string!");
            return 1;
        }
    }
    printf("The number is %d.", num);
    
    return 0;
}








//generate fibonacci words of order 0 through 5
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    
    for(int i = 0; i < 5; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbutoneterm);
        printf("%s\n", str);
        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }
    
    return 0;
}










//2D array of characters - valid and invalid user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[6][20] = { "Savi", "Samvida", "Angel", "Angelina", "Supreme", "Master"};
    char yourName[20];
    
    printf("Enter your name : ");
    scanf("%s", &yourName);
    
    for(int i = 0; i < 6; i++)
    {
        if(strcmp(&str[i][0], yourName) == 0)
        {
            printf("You are a valid user!");
            
        return 0;
        }
    }
    printf("You aren't allowed here!");
    
    
    return 0;
}









//exchange names using 2D array of characters
#include<stdio.h>

int main()
{
    char names[][20] = { "Savi", "Samvida", "Angel", "Angelina", "Supreme", "Master"};
    char t;
    int i;
    
    printf("Original : %s %s\n", &names[2][0], &names[3][0]);
    
    for(int i = 0; i < 20; i++)
    {
        t = names[2][i];
        names[2][i] = names[3][i];
        names[3][i] = t;
    }
    
    printf("New : %s %s", &names[2][0], &names[3][0]);
    
    
    return 0;
}











//exchange names using array pointers to strings
#include<stdio.h>

int main()
{
    char *names[20] = { "Savi", "Samvida", "Angel", "Angelina", "Supreme", "Master"};
    char *temp;
    
    printf("Original : %s %s\n", names[2], names[3]);

    temp = names[2];
    names[2] = names[3];
    names[3] = temp;
    
    printf("New : %s %s", names[2], names[3]);
    
    
    return 0;
}









//using malloc to allocate memory
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *names[6], n[50];
    int len, i;
    char *p;
    
    scanf("%s", n);
    len = strlen(n);
    
    p = (char *) malloc(len + 1);
    strcpy(p, n);
    names[0] = p;
    
    
    return 0;
}









//search a string in the array
#include<stdio.h>
#include<string.h>

int main()
{
    char *str[] = { "Sam is cool", "yay! B.Tech!!", "Studying is so much fun.", "Complete the book", "Learn C", "Only 1.5 yrs to go!"};
    int i;
    char str1[20], *p;
    
    printf("Enter the string to be searched : ");
    scanf("%s", str1);
    
    p = NULL;
    
    for(i = 0; i < 6; i++)
    {
        p = strstr(str[i], str1);
        if(p != NULL)
        {
            printf("%s found in the array!", str1);    
            return 0;
        }
    }
    printf("%s not found in the array!", str1);
    
    
    return 0;
    
}









//sort strings alphabetically
#include<stdio.h>
#include<string.h>

int main()
{
    char *str[] = { "Samvida", "Ana", "Vishesh", "Nemo", "Love"};
    char *t;
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if((strcmp(str[i], str[j])) > 0)
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    
    
    return 0;
}










//reverse strings by making your own function
#include<stdio.h>
#include<string.h>

void xstrrev(char *ss);

int main()
{
    char str[][100] = {"Hello angel", "I salute the divinity within you!", "Coding is fun."};
    int i;
    
    for(i = 0; i < 3; i++)
    {
        xstrrev(str[i]);
        printf("%s\n", str[i]);
    }
    
    
    return 0;
}
void xstrrev(char *s)
{
    int l, i;
    char *t, temp;
    
    l = strlen(s);
    t = s + l - 1;
    
    for(i = 1; i <= l/2; i++)
    {
        temp = *s;
        *s = *t;
        *t = temp;
        
        s++;
        t--;
    }
}










//usage of an array of structures
#include<stdio.h>

void linkfloat();

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
        
    };
    
    struct book b[10];
    int i; int dh;
    
    for(i = 0; i <= 9; i++)
    {
        printf("Enter name, price and pages\n");
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
        while((dh = getchar()) != '\n')
            ;
    }
    
    for(i = 0; i <= 9; i++)
    {
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);
    }
    
    
    return 0;
}
void linkfloat()
{
    float a = 0, *b;
    b = &a;
    a = *b;
}  











//memory map of structure elements
#include<stdio.h>

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    
    struct book b1 = {'B', 130.00, 550};
    
    printf("Address of name = %u\n", &b1.name);
    printf("Address of price = %u\n", &b1.price);
    printf("Address of pages = %u\n", &b1.pages);
    
    
    return 0;
}








//copying of structure elements
#include<stdio.h>
#include<string.h>

int main()
{
    struct employee
    {
        char name[10];
        int age;
        float salary;
    };
    
    struct employee e1 = {"Samvida", 20, 5000000.00};
    struct employee e2, e3;
    
    strcpy(e2.name, e1.name);
    e2.age = e1.age;
    e2.salary = e1.salary;
    
    //copying all at once
    e3 = e2;
    
    printf("%s %d %f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %f\n", e2.name, e2.age, e2.salary);
    printf("%s %d %f\n", e3.name, e3.age, e3.salary);
    
    
    return 0;
}










//nested structures
#include<stdio.h>

int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };
    
    struct emp
    {
        char name[25];
        struct address a;
    };
    
    struct emp e = {"Jeyr", "123456", "Alwar", 02};
    
    printf("name = %s\nphone = %s\ncity = %s\npin = %d\n", e.name, e.a.phone, e.a.city, e.a.pin);
    
    return 0;
}









//passing individual structure elements
#include<stdio.h>

struct book
{
    char name[25];
    char author[25];
    int age;
};

void display1 (char *, char *, int);
void display2 (struct book);
void display3 (struct book *);

int main()
{
    struct book b1 = {"Love or What", "Samvida Aggarwal", 20};
    display1 (b1.name, b1.author, b1.age);
    display2 (b1);
    display3 (&b1);
    
    
    return 0;
}

void display1 (char *n, char *a, int pg)
{
    printf("book name = %s\nauthor = %s\nage = %d\n\n", n, a, pg);
}

void display2 (struct book b)
{
    printf("book name = %s\nauthor = %s\nage = %d\n\n", b.name, b.author, b.age);
}

void display3 (struct book *pb)
{
    printf("book name = %s\nauthor = %s\nage = %d\n\n", pb->name, pb->author, pb->age);
}










//implementation of stack using a linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void push(struct node **s, int item);
int pop(struct node **s);

int main()
{
    struct node *top;
    int item;
    top = NULL;
    
    push(&top, 45);
    push(&top, 12);
    push(&top, 26);
    push(&top, 55);
    
    item = pop(&top);
    printf("Popped : %d\n", item);
    item = pop(&top);
    printf("Popped : %d\n", item);
    
    return 0;
}

void push(struct node **s, int item)
{
    struct node *q;
    q = (struct node *) malloc(sizeof(struct node));
    q -> data = item;
    q -> link = *s;
    *s = q;
}

int pop(struct node **s)
{
    int item;
    struct node *q;
    
    if(*s == NULL)
    {
        printf("Stack is empty.");
    }    
    else
    {
        q = *s;
        item = q -> data;
        *s = q -> link;
        free(q);
        
        return(item);
    }    
}