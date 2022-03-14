//
//// C++ Program to Implement Member functions inside
//// structure
//
//#include<stdio.h>
//
//struct marks {
//    int num;
//
//    // Member function inside Structure to
//    // take input and store it in "num"
//    void Set(int temp) { num = temp; }
//
//    // function used to display the values
//    void display() { printf("num= %d" ,num); }
//};
//
//// Driver Program
//int main()
//{
//    struct marks m1;
//
//    // calling function inside Struct to
//    // initialize value to num
//    m1.Set(9);
//
//    // calling function inside struct to
//    // display value of Num
//    m1.display();
//}




















//
//#include <stdio.h>
//
//struct Student {
//    int roll;
//    Student(int x) { roll = x; }
//};
//
//// Driver Program
//int main()
//{
//    struct Student s(2);
//    printf("%d", s.roll);
//    return 0;
//}























//// C program to illustrate empty structure
//
//#include <stdio.h>
//
//// empty structure
//struct Record {
//};
//
//// Driver Code
//int main()
//{
//    struct Record s;
//    printf("%lu\n", sizeof(s));
//    return 0;
//}



















//// C program to illustrate pointer to structure

#include <stdio.h>

// empty structure
struct Record {
    int serialNo ;
};

// Driver Code
int main()
{ // .c file
    struct Record s;
    s.serialNo = 100;
    struct Record* rp;
    rp = &s;
    struct Record &refVar = s;
    printf("%d\n", s.serialNo);
    printf("%d\n", rp->serialNo);
    return 0;
}
