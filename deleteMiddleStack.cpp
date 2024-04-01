#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &inputStack, int count, int size)
{
    // base case ..
    // jabtak count 0 se middle element na find karle check karte rho.
    // agar mile to pop kardo middle element ko .. 
    // fir khel katm...
    // na mile t recursive case m chale jaoo...
    if(count ==  size/2)
    {
        inputStack.pop();
        return;
    }
    // top element ko side m rakh lo ..
    int num = inputStack.top();
    // ab pop kardo ..
    inputStack.pop();
    // ab recursive case lagado...
    // agli call karne k liye .. 
    solve(inputStack, count+1, size);
    // ab jo nikala the top element  ausko wapas push kardo ..
    inputStack.push(num);

    // khel khatam ...
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}