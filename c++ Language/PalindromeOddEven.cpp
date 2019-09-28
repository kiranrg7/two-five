// cerner_2^5_2019
//Program to check given number for palindrome and even or Odd
#include <iostream>
using namespace std;

class NumberSystem {
    public: 
            string checkPalindrome(int number){
                int remainder,reversedInteger;
                int  originalInteger = number;
                
                while( number!=0 ){
                    remainder = number%10;
                    reversedInteger = reversedInteger*10 + remainder;
                    number /= 10;
                }
                if (originalInteger == reversedInteger)
                    return "Palindrome";
                return "Not a Palindrome";
            }
            string checkEvenOrOdd(int number){
                if(number % 2 == 0 )
                    return "a Even number";
                return "an Odd number";
            }
};

int main(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    NumberSystem *ns = new NumberSystem();
    cout<<"Number is "<<ns->checkPalindrome(number); 
    cout<<" And it is "<<ns->checkEvenOrOdd(number);
}