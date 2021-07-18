#include "bits/stdc++.h"
void MoveDisks(int count,stack<string> &start ,stack<string> &finish,stack<string> &temp)
{
//    Base condition
    if(count>0)
    {
        MoveDisks(count-1,start,temp,finish);
        string x=start.top();
        start.pop();
        finish.push(x);
        MoveDisks(count-1,temp,finish,start);

    }

}
void PrintStack(stack<string> &s)
{
    // If stack is empty then return
    if (s.empty())
        return;

    string x = s.top();

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    PrintStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}
int main()
{
    stack<string> start,finish,temp;
    start.push("Hello,");
    start.push("My name is Mohamed Magdy");
    start.push("I want to be a soft ware Engineer");

    MoveDisks(3,start,finish,temp);

    PrintStack(finish);

    return 0;
}
