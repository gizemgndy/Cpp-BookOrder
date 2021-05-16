// Example program
#include <iostream>
#include <string>
#include <list>

using namespace std;

void sumNumber (int *a, int *b, int *c);

//3 integer pointers calculate the sum of all numbers function
void question1()
{
    int m = 25;
    int n = 100;
    int o = 175;
    
    //the function to add the numbers is called
    sumNumber(&m, &n, &o);
}

//the struct to keep the books is created
struct Book {
    string name;
    int price;
};

//function that calculates the total prices of books
int getTotalPrice(Book b1, Book b2, Book b3, Book b4, Book b5)
{
     return  b1.price+b2.price+b3.price+b4.price+b5.price;
}

//The function for creating books and pointer operations
void question2()
{
    //books are created and features are filled
    Book b1,b2,b3,b4,b5;
    
    b1.name="Book 1";
    b1.price=10;
    
    b2.name="Book 2";
    b2.price=20;
    
    b3.name="Book 3";
    b3.price=25;
    
    b4.name="Book 4";
    b4.price=50;
    
    b5.name="Book 5";
    b5.price=100;
    

    //pointer variables are created
    Book*myBook1;
    Book*myBook2;
    Book*myBook3;
    Book*myBook4;
    Book*myBook5;
    
    //Assignments are made to the pointer variable
    myBook1=&b1;
    myBook2=&b2;
    myBook3=&b3;
    myBook4=&b4;
    myBook5=&b5;
    
    
    //the names and prices of the books are written
    cout<<"\nBook with pointer: name is  "<<"Name: "+myBook1->name+" Price:"+to_string(myBook1->price)+"₺"<<endl;
    cout<<"Book with pointer: name is  "<<"Name: "+myBook2->name+" Price:"+to_string(myBook2->price)+"₺"<<endl;
    cout<<"Book with pointer: name is  "<<"Name: "+myBook3->name+" Price:"+to_string(myBook3->price)+"₺"<<endl;
    cout<<"Book with pointer: name is  "<<"Name: "+myBook4->name+" Price:"+to_string(myBook4->price)+"₺"<<endl;
    cout<<"Book with pointer: name is  "<<"Name: "+myBook5->name+" Price:"+to_string(myBook5->price)+"₺"<<endl;
    
    //the total book price function is called and written to the screen
    std::cout <<"Total Price: " +to_string(getTotalPrice(b1,b2,b3,b4,b5)) << std::endl;

}

//main function
int main() {
    question1();
    question2();
    return 0;
}

//The function that calculates the sum of integers entered with a pointer
void sumNumber (int *a, int *b, int *c) {
    
    //Assignment to pointer variables
    int n1 = *a;
    int n2 = *b;
    int n3 = *c;
    
    //collection is done and written to the screen
    int sum = n1 + n2 + n3;
    cout<<"Sum of three numbers = "<<sum;
}