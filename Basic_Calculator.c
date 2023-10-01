#include<stdio.h>
#include<math.h>

int main()
{   int x,n,m,choice,num1,num2,num3,num4;
    float result,degrees,radians;
    double angle_degrees;
    char a[]="Addition",b[]="Subtraction",c[]="Multiplication",d[]="Division",e[]="Modulus Div";
    printf("\nWelcome to Calculator!!");
    printf("\n\nWhat type of Operations would you like to perform?\n");
    printf("\n1.Arithmetic Operations\n2.Trigonometric Operations\n3.Binary Operations\n");
    printf("\nEnter your choice(1-3) : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("\n\nARITHMETIC OPERATIONS");
            printf("\n");
            printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus Division\n");
            printf("\nEnter your choice(1-4) of operator : ");
            scanf("%d",&choice);

            printf("\nEnter number 1 : ");
            scanf("%d",&num1);
            printf("Enter number 2 : ");
            scanf("%d",&num2);

            printf("\n");
            printf("Number_1    Number_2    Operator        Result\n");
            printf("------------------------------------------------------\n");

            switch(choice)
            {
                case 1:
                    result=num1+num2;
                    printf("%5d%11d%17s%15f\n",num1,num2,a,result);
                    break;
                case 2:
                    result=num1-num2;
                    printf("%5d%11d%17s%15f\n",num1,num2,b,result);
                    break;
                case 3:
                    result=num1*num2;
                    printf("%5d%11d%17s%15f\n",num1,num2,c,result);
                    break;
                case 4:
                    if(num2==0) {
                        printf("Error: Divide by zero\n");
                        return 1;
                    } else {
                        result=num1/num2;
                        printf("%5d%11d%17s%15f\n",num1,num2,d,result);
                    }
                    break;
                case 5:
                    result=num1%num2;
                    printf("%5d%11d%17s%15f\n",num1,num2,e,result);
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    return 1;

            }
        }
        printf("Operations performed successfully!");
        break;


        case 2:
        {
            printf("\n\nTRIGONOMETIRC OPERATIONS");
            printf("\n");
            printf("\n1.Conversion of degrees to radians\n2.Conversion of radians to degrees\n3.Sine function\n4.Cosine Function\n5.Tangent Function\n6.Secant Function\n ");
            printf("\n");
            printf("\nEnter your choice(1-6) : ");
            scanf("%d",&x);
            printf("\n");
            
            switch(x)
            {
                case 1:
                    printf("Enter the angle in degrees :");
                    scanf("%f",&degrees);
                    radians = 0.0174532925*degrees;
                    printf("\n%.2f degrees = %f radians",degrees,radians);
                    return(0);
                    break;

                case 2:
                    printf("Enter the angle in radians :");
                    scanf("%f",&radians);
                    degrees = 57.2957795*radians;
                    printf("%f radians = %.2f degrees",radians,degrees);
                    return(0);
                    break;

                case 3:
                    printf("Enter an angle in degrees: ");
                    scanf("%lf", &angle_degrees);
                    double r = angle_degrees * PI / 180.0;
                    double sin_value = sin(r);
                    printf("\n");
                    printf("Angle: %f degrees\n", angle_degrees);
                    printf("Sine: %f\n", sin_value);
                    break;

                case 4:
                    printf("Enter an angle in degrees: ");
                    scanf("%lf", &angle_degrees);
                    double p = angle_degrees * M_PI / 180.0;
                    double cos_value = cos(p);
                    printf("\n");
                    printf("Angle: %f degrees\n", angle_degrees);
                    printf("Cosine: %f\n", cos_value);
                    break;

                case 5:
                    printf("Enter an angle in degrees: ");
                    scanf("%lf", &angle_degrees);
                    double y = angle_degrees * M_PI / 180.0;
                    double tan_value = tan(y);
                    printf("\n");
                    printf("Angle: %f degrees\n", angle_degrees);
                    printf("Tangent: %f\n", tan_value);
                    break;

                case 6:
                    printf("Enter an angle in degrees: ");
                    scanf("%lf", &angle_degrees);
                    double q = angle_degrees * M_PI / 180.0;
                    double sec_value = 1.0 / cos(q);
                    printf("\n");
                    printf("Angle: %f degrees\n", angle_degrees);
                    printf("Secant: %f\n", sec_value);
                    break;
                
                default:
                    printf("Error! operator is not correct");
            }
        }
        printf("Operations performed successfully!");
        break;

        case 3:
        {
            printf("\n\nBINARY OPERATIONS");
            printf("\n\nEnter two numbers: ");
            printf("\n\nEnter number 1 : ");
            scanf("%d",&num3);
            printf("Enter number 2 : ");
            scanf("%d",&num4);
            printf("\n");
            printf("1. Bitwise AND\n");
            printf("2. Bitwise OR\n");
            printf("3. Bitwise XOR\n");
            printf("4. Bitwise Left Shift\n");
            printf("5. Bitwise Right Shift\n\n");
            printf("Select the operation to perform (1-5) : ");
            scanf("%d", &m);
            printf("\n");

            switch (m)
            {
                case 1:
                    printf("%d & %d = %d\n", num3, num4, num3 & num4);
                    break;
                case 2:
                    printf("%d | %d = %d\n", num3, num4, num3 | num4);
                    break;
                case 3:
                    printf("%d ^ %d = %d\n", num3, num4, num3 ^ num4);
                    break;
                case 4:
                    printf("%d << %d = %d\n", num3, num4, num3 << num4);
                    break;
                case 5:
                    printf("%d >> %d = %d\n", num3, num4, num3 >> num4);
                    break;
                default:
                    printf("Invalid choice\n");
            }        
        }
        printf("Operations performed successfully!");
        break;

    } 
    return 0;
}
    