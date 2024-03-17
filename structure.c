#include<stdio.h>
struct student
{
    int id;
    float cgpa;

}s1,s2,s3;

int main()
{
    s1.id=449;
    s2.cgpa=3.15;


    printf("%d %.2f\n",s1.id,s2.cgpa);
    return 0;
}



