// Login System Ready For Making Video
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define g 9.80
#define G 6.67 * 10 ^ (-11)
#define ME 5.97 * 10 ^ (24)
#define RE 6.38 * 10 ^ (6)
// void roto();
void verify();
int menu();
void createaccount();
void login();
// int createaccount();
void gotoxy(int, int);
FILE *fp;
struct user u, U;
int choice;

char fname[20], lname[20], uname[20], pss[20], C;
struct user
{
    char pass[20];
    char username[20];
    char fname[20];
    char lname[20];
};
int q1;
float T, I, a;
int k;
int i;
float F, r, d;
double j;
int q;
float omega, omega_knot, alpha, t, theta, r1, r2;
int q3;
float W, D;
int q4;
float L;
int d1, d2, d3, p1, p2, p3, l1, l2, l3;

int main()
{

    while (1)
    {   
        switch (menu())
        {
        case 1:
            createaccount();
            break;

        case 2:
            verify();
            break;

        case 3:
            login();
            goto end;

        end:
            printf("\n\n--------------------------------------------------------------- ");
            printf("ROTATIONAL MOTION DYNAMICS SOLVER.... ");
            printf("---------------------------------------------------------------");
            printf("\n");
            //    char que[1000]; printf("Enter your Question here : \n");
            //     scanf("%[^\n]s",que);
            //     // fp = fopen ("D:\\CHATBOT\\uname","wb+");
            //     fp = fopen ("D:\\CHATBOT\\uname","a");
            //     if (fp == NULL)
            //     {
            //         printf("\nError opened file\n");
            //         exit (1);
            //     }
            //     fwrite(&que, sizeof(struct user), 1, fp);
            // fclose (fp);
            // system("cls");
            printf("Press [1] To calculate Torque,Force,and Perpendicular distance. \n");
            printf("Press [2] To solve problems Related to Rotational Motion Equations. \n");
            printf("Press [3] To calculate Angular Momentum,Moment of Inertia,Angular Acceleration. \n");
            printf("Press [4] To calculate Work,Torque, Angular Displacement. \n");
            printf("Press [5] To calculate Angular Momentum,Angular Velocity,Moment Of Inertia.\n");
            printf("Press [6] To calculate Angular Momentum Vector. \n");
            scanf("%d", &k);
            switch (k)
            {
            case 1:
                // int i;
                // float T, F, r, d;
                // double j;
                printf("Press [1] If Magnitude of Force and Perpendicular distance from axis of rotation is given\n");
                printf("Press [2] If Magnitude of Force,position vector of particle(r) and angle is given \n");
                printf("Press [3] If Magnitude of Force and (Torque)is given \n");
                printf("Press [4] If Perpendicular distance from axis of rotation(d) and (Torque)is given \n");
                printf("Press [5] If the Magnitude of Force(F),(Torque),position vector of particle(r)is given \n");

                scanf("%d", &i);
                switch (i)
                {
                case 1:
                    printf("To find Torque\n");
                    printf("Enter the Magnitude of Force(F) and Perpendicular distance(d) from axis of rotation respectively.\n");
                    scanf("%f \n %f", &F, &d);
                    T = F * d;
                    printf("The magnitude of Torque is %f", T);
                    break;
                case 2:
                    printf("To find Torque.\n");
                    printf("Enter the Magnitude of Force(F),position vector of particle(r) and angle respectively.\n");
                    scanf("%f \n %f \n %lf", &F, &r, &j);
                    T = F * r * sin(j);
                    printf("The magnitude of Torque is %f", T);
                    break;
                case 3:
                    printf("To find Perpendicular distance(d) from axis of rotation\n");
                    printf("Enter the Magnitude of Force(F),(Torque) respectively.\n");
                    scanf("%f \n %f", &F, &T);
                    d = T / F;
                    printf("The Perpendicular distance(d) from axis of rotation is %f", d);
                    break;
                case 4:
                    printf("To find Magnitude of force\n");
                    printf("Enter the Perpendicular distance(d) from axis of rotation,(Torque) respectively.\n");
                    scanf("%f \n %f", &d, &T);
                    F = T / d;
                    printf("The Magnitude of Force(F) %f", F);
                    break;
                case 5:
                    printf("To find angle\n");
                    printf("Enter the Magnitude of Force(F),(Torque),position vector of particle(r) respectively.\n");
                    scanf("%f \n %f \n %f", &F, &T, &r);
                    j = asin(T / (F * r));
                    printf("The  angle is  %lf", j);
                    break;

                default:
                    break;
                }
                break;

            case 2:
                // int q;
                // float omega, omega_knot, alpha, t, theta, d, r1, r2;
                printf("Press [1] If Initial angular velocity, Angular acceleration and Time is given \n");
                printf("Press [2] If Final angular velocity, Angular acceleration and Time is given \n");
                printf("Press [3] If Initial angular velocity, Final angular velocity and Time is given\n");
                printf("Press [4] If Initial angular velocity, Final angular velocity and Angular acceleration is given\n");
                printf("Press [5] If Initial angular velocity, Angular acceleration and time is given \n");
                printf("Press [6] If Angular acceleration, Angular displacement and time is given\n");
                printf("Press [7] If Angular displacement, Initial angular velocity and Angular acceleration is given \n");
                printf("Press [8] If Angular displacement, Initial angular velocity and time is given \n");
                printf("Press [9] If Initial angular velocity, Angular acceleration and Angular displacement is given \n");
                printf("Press [10] If Final angular velocity, Angular acceleration and Angular displacement is given\n");
                printf("Press [11] If Initial angular velocity, Final angular velocity and Angular acceleration is given \n");
                printf("Press [12] If Initial angular velocity, Final angular velocity and Angular displacement is givenPress [] \n");

                scanf("%d", &q);
                switch (q)
                {
                case 1:
                    printf("To find Final angular velocity.\n");
                    printf("Enter Initial angular velocity, Angular acceleration and Time(t)\n");
                    scanf("%f \n %f \n %f", &omega_knot, &alpha, &t);
                    omega = omega_knot + alpha * t;
                    printf("The Final angular velocity is %fm/s", omega);
                    break;
                case 2:
                    printf("To find Initial angular velocity.\n");
                    printf("Enter Final angular velocity, Angular acceleration and time(t).\n");
                    scanf("%f \n %f \n %f", &omega, &alpha, &t);
                    omega_knot = omega - alpha * t;
                    printf("The Initial angular velocity is %fm/s", omega_knot);
                    break;
                case 3:
                    printf("To find Angular acceleration.\n");
                    printf("Enter Initial angular acceleration, Final angular acceleration and time.\n");
                    scanf("%f \n %f \n %f", &omega_knot, &omega, &t);
                    alpha = omega - omega_knot / t;
                    printf("The Angular acceleration is %fm/s2", alpha);
                    break;
                case 4:
                    printf("To find Time.\n ");
                    printf("Enter Initial angular acceleration, Final angular acceleration and Angular acceleration.\n");
                    scanf("%f \n %f \n %f", &omega_knot, &omega, &alpha);
                    t = omega - omega_knot / alpha;
                    printf("The Time is %fsec", t);
                    break;
                case 5:
                    printf("To find Angular displacement.\n");
                    printf("Enter Initial angular velocity, Angular acceleration and time\n");
                    scanf("%f \n %f \n %f", &omega_knot, &alpha, &t);
                    theta = omega_knot + alpha * t * t / 2;
                    printf("Value of Angular displacement is %fm", theta);
                    break;
                case 6:
                    printf("To find Initial angular velocity.\n");
                    printf("Enter Angular acceleration, Angular displacement and time\n");
                    scanf("%f \n %f \n %f", &alpha, &theta, &t);
                    omega_knot = theta / t - alpha * t / 2;
                    printf("Value of Initial angular velocity is %fm/s", omega_knot);
                    break;
                case 7:
                    printf("To find Time.\n");
                    printf("Enter Angular displacement, Initial angular velocity and Angular acceleration\n");
                    scanf("%f \n %f \n %f", &theta, &omega_knot, &alpha);
                    d = 2 * 2 * omega_knot * omega_knot - 4 * alpha * 2 * theta;
                    if (d > 0)
                    {
                        r1 = -2 * omega_knot + sqrt(d) / (2 * alpha);
                        r2 = -2 * omega_knot - sqrt(d) / (2 * alpha);
                        printf("The real roots = %f %f", r1, r2);
                    }
                    else if (d == 0)
                    {
                        r1 = -2 * omega_knot / (2 * alpha);
                        r2 = -2 * omega_knot / (2 * alpha);
                        printf("roots are equal =%f %f", r1, r2);
                    }
                    else
                        printf("Roots are imaginary");
                    break;
                case 8:
                    printf("To find Angular acceleration\n");
                    printf("Enter Angular displacement, Initial angular velocity and time\n");
                    scanf("%f \n %f \n %f", &theta, &omega_knot, &t);
                    alpha = 2 * (theta - omega_knot * t) / t * t;
                    printf("Value of Angular accelerationis %fm/s2", alpha);
                    break;
                case 9:
                    printf("To find Final angular velocity.\n");
                    printf("Enter Initial angular velocity, Angular acceleration and Angular displacement.\n");
                    scanf("%f \n %f \n %f", &omega_knot, &alpha, &theta);
                    omega = sqrt(2 * alpha * theta + omega_knot * omega_knot);
                    printf("The Final angular velocity is %fm/s", omega);
                    break;
                case 10:
                    printf("To find Initial angular velocity.\n");
                    printf("Enter Final angular velocity, Angular acceleration and Angular displacement.\n");
                    scanf("%f \n %f \n %f", &omega, &alpha, &theta);
                    omega_knot = sqrt(omega * omega - 2 * alpha * theta);
                    printf("The Initial angular velocity is %fm/s", omega_knot);
                    break;
                case 11:
                    printf("To find Angular displacement.\n");
                    printf("Enter Initial angular acceleration, Final angular acceleration and Angular acceleration.\n");
                    scanf("%f \n %f \n %f", &omega_knot, &omega, &alpha);
                    theta = omega * omega - omega_knot * omega_knot / 2 * alpha;
                    printf("The Angular displacement is %fm", theta);
                    break;
                case 12:
                    printf("To find Angular acceleration.\n ");
                    printf("Enter Initial angular acceleration, Final angular acceleration and Angular displacement.\n");
                    scanf("%f \n %f \n %f", &omega_knot, &omega, &theta);
                    alpha = omega * omega - omega_knot * omega_knot / 2 * theta;
                    printf("The Angular acceleration is %fm/s2", alpha);
                    break;
                }
                break;
            case 3:

                // int q1;
                // float T, I, a;

                printf("Press [1] If Magnitude of Torque and moment of inertia is given..Press []\n");
                printf("Press [2] If Magnitude of inertia and angular accelration given. \n");
                printf("Press [3] If Torque and acceleration is given.\n");

                scanf("%d", &q1);
                switch (q1)
                {
                case 1:
                    printf("To find moment of inertia.\n");
                    printf("Enter the Magnitude of Torque and moment of inertia.\n");
                    scanf("%f \n %f", &T, &a);
                    I = T / a;
                    printf("The magnitude of moment of inertia is %f", I);
                    break;
                case 2:
                    printf("To find Torque.\n");
                    printf("Enter the Magnitude of inertia and angular accelration.\n");
                    scanf("%f \n %f ", &I, &a);
                    T = I * a;
                    printf("The magnitude of Torque is %f", T);
                    break;

                case 3:
                    printf("To find angular accleration\n");
                    printf("Enter the Magnitude oftorque and moment of inertia.\n");
                    scanf("%f \n %f", &T, &I);
                    a = T / I;
                    printf("The angular accleration is %f", a);
                    break;

                default:
                    break;
                }
                break;
            case 4:
                // int q3;
                // float W, T, D;

                printf("Press [1]If Magnitude of Work and Torque is given. \n");
                printf("Press [2]If Magnitude of Torque and angular displacement is  given.\n");
                printf("Press [3]If magnitude of Torque and angular displacement is given.\n");

                scanf("%d", &q3);
                switch (q3)
                {
                case 1:
                    printf("To find angular displacement.\n");
                    printf("Enter  Magnitude of Work and Torque .\n");
                    scanf("%f \n %f", &W, &T);
                    D = W / T;
                    printf("The magnitude ofangular displacemnet is %f", D);
                    break;
                case 2:
                    printf("To find Work.\n");
                    printf("Enter Magnitude of Torque and angular displacement.\n");
                    scanf("%f \n %f ", &T, &D);
                    W = T * D;
                    printf("The magnitude of Torque is %f", W);
                    break;

                case 3:
                    printf("To find Torque\n");
                    printf("Enter  magnitude of Torque and angular displacement.\n");
                    scanf("%f \n %f", &W, &D);
                    T = W / D;
                    printf("The torque  is %f", T);
                    break;

                default:
                    break;
                }
                break;
            case 5:
                // int q4;
                // float L, I, W;

                printf("Press [1] If Magnitude of Angular momentum and moment of inertia is given \n");
                printf("Press [2] If Magnitude of moment of inertia inertia and angular velocity is  given\n");
                printf("Press [3] If angular momentum and angular velocity is given\n");

                scanf("%d", &q4);
                switch (q4)
                {
                case 1:
                    printf("To find angular velocity.\n");
                    printf("Enter Magnitude of Angular momentum and moment of inertia.\n");
                    scanf("%f \n %f", &L, &I);
                    W = L / I;
                    printf("The magnitude of angular velocity is %f", W);
                    break;
                case 2:
                    printf("To find angular momentum.\n");
                    printf("Enter the Magnitude of moment of inertia inertia and angular velocity.\n");
                    scanf("%f \n %f ", &I, &W);
                    L = I * W;
                    printf("The magnitude of angular momentum is %f", L);
                    break;

                case 3:
                    printf("To find moment of inertia \n");
                    printf("Enter angular momentum and angular velocity.\n");
                    scanf("%f \n %f", &L, &W);
                    I = L / W;
                    printf("The moment of inertia  is %f", I);
                    break;

                default:
                    break;
                }
            case 6:
                // int d1,d2,d3,p1,p2,p3,l1,l2,l3;
                printf("Enter the components of distance from axis of rotation =\n ");
                scanf("%d%d%d", &d1, &d2, &d3);

                printf("\nEnter the components of linear momentum = \n");
                scanf("%d%d%d", &p1, &p2, &p3);
                l1 = d2 * p3 - d3 * p2;
                l2 = d3 * p1 - d1 * p3;
                l3 = d1 * p2 - p1 * d2;

                printf("The Angular Momentum Vector is %di+%dj+%dk", l1, l2, l3);
                break;
            }
            break;
            printf("\n");

        case 4:
            exit(0);
        default:
            printf("Invalid Choice! ");
            break;
        }
    }

    return 0;
}
int menu()
{
    int ch;
    printf("\n\n------------------Welcome to RBD Problem Solver---------------------\n");
    printf("\n [1] : Create Account:  \n");
    printf("[2] : Verify Details:  \n");
    printf("[3] : Login:  \n");
    printf("[4] : Exit:  \n");
    printf("   Enter your choice :  ");
    scanf("%d", &ch);
    return ch;
}
void createaccount()
{
    struct user U;
    FILE *fp;
    system("cls");
    gotoxy(57, 3);
    puts("<--<<Create Account>>-->");
    printf("\n\n");
    printf("    Enter First Name: ");
    fflush(stdin);
    gets(U.fname);
    printf("\n");
    printf("    Enter Last Name: ");
    gets(U.lname);
    printf("\n");
    printf("    Enter Username: ");
    scanf("%s", U.username);
    printf("\n");
    printf("    Enter Password: ");
    scanf("%s", U.pass);
    //  char temp[20];
    //  strcpy(temp,"username.txt");
    fp = fopen("D:\\CHATBOT\\uname", "wb+");
    if (fp == NULL)
    {
        printf("\nError opened file\n");
        exit(1);
    }
    fwrite(&U, sizeof(struct user), 1, fp);
    fclose(fp);
    system("cls");
    gotoxy(55, 20);
    printf(" Account Created Successfully.");
    gotoxy(75, 25);
    printf("Press any key to continue...");
    getch();
    system("cls");
}
void verify()
{
    FILE *fp;
    struct user u;
    system("cls");
    gotoxy(52, 3);
    printf("    Your Details Are..\n\n");
    /// Reading from file
    //    char temp[20];
    //  strcpy(temp,"username.txt");
    fp = fopen("D:\\CHATBOT\\uname", "rb+");
    if (fp == NULL)
    {
        printf("\"File not found\"");
       // return 1 ;
    }
    while (fread(&u, sizeof(struct user), 1, fp))
    {
        printf("\n    Name: %s %s \n", u.fname, u.lname);
        printf("\n    Username: %s\n\n    ", u.username);
    }
    fclose(fp);
    gotoxy(75, 16);
    printf("Press any key to continue...");
    getch();
    system("cls");
}
void login()
{
    char uname[20], pss[20];
    FILE *fp;
    struct user u;
    system("cls");
    gotoxy(53, 3);
    printf("<--<<LOGIN TO YOUR ACCOUNT>>->\n\n");
    printf(" Enter Username: ");
    scanf("%s", uname);
    printf("\n");
    printf(" Enter Password: ");
    scanf("%s", pss);
    /// Reading from file
    //  char temp[20];
    //  strcpy(temp,"%c.txt",uname);
    fp = fopen("D:\\CHATBOT\\uname", "rb+");
    if (fp == NULL)
    {
        printf("\"File not found\"");
        //return 1;
    }
    while (fread(&u, sizeof(struct user), 1, fp))
    {
        if (strcmp(uname, u.username) == 0 && strcmp(pss, u.pass) == 0)
        {
            printf(" \n Username And Password is Correct.\n");
            printf(" Press any key to continue...");
            getch();
            gotoxy(57, 12);
            printf(" Welcome %s %s ", u.fname, u.lname);
            getch();
            
        }
        else
        {
            printf("\n Username And Password is Incorrect.\n\n");
            printf("\n Press any key to continue...");
            getch();
        }
    }
    fclose(fp);
    system("cls");//stdlib.h
}
void gotoxy(int x, int y)
{
    COORD c; //windows.h ---it hold screen coordinates..
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);//windows.h
}
//#include<graphics.h>
// #include <stdio.h>
//gotoxy --- conio.h
