#include<bits/stdc++.h>
using namespace std;
//1) Tokenization
string tokenization(string infix)
{
    string tokenized_infix="";
    for(int i=0; i<infix.length(); i++)
    {
        if(infix[i]==' ')
        {
            continue;
        }
        tokenized_infix+=infix[i];
    }
    return tokenized_infix;
}
//2) Reverse Tokenized Infix
string reverse_tokenized_infix(string infix)
{
    string tokenized_infix=tokenization(infix);
    cout<<"Infix After Tokenization: "<<tokenized_infix<<endl;
    string reverse_infix="";
    for(int i=tokenized_infix.length()-1; i>=0; i--)
    {
        if(tokenized_infix[i]=='(')
        {
            tokenized_infix[i]=')';
        }
        else if(tokenized_infix[i]==')')
        {
            tokenized_infix[i]='(';
        }
        reverse_infix+=tokenized_infix[i];
    }
    cout<<"Reverse Infix: "<<reverse_infix<<endl;
    return reverse_infix;
}
// 03. Create Linked List Node
struct Node
{
    string data;
    Node* next;
};

//  04) Stack Top Pointer
Node* top = NULL;

// 05) Stack Push
void push(string val)
{
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}
// 06) Stack Pop()
string pop()
{
    if (top == NULL) return "";
    Node* temp = top;
    string val = temp->data;
    top = top->next;
    delete temp;
    return val;
}
// 07) Stack Peek
string peek()
{
    return (top != NULL) ? top->data : "";
}
// 08) Stack IsEmpty
bool isEmpty()
{
    return top == NULL;
}

// 09) Operator precedence
int prec(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

//10) Infix to Prefix Conversion
string infixtoPrefix(string rti)
{
    string postFix="";
    for(int i=0; i<rti.length(); i++)
    {
        if(isalnum(rti[i]))
        {
            postFix+=rti[i];
        }
        else if(rti[i]=='(')
        {
            push("(");
        }
        else if(rti[i]==')')
        {
            while(!isEmpty()&& peek()!="(")
            {
                postFix+=pop();
            }
            pop();
        }
        else
        {
            while(!isEmpty()&&prec(rti[i])<prec(peek()[0]))
            {
                postFix+=pop();
            }
            string op="";
            op+=rti[i];
            push(op);
        }
    }
    while(!isEmpty())
    {
        postFix+=pop();
    }
    cout<<"Postfix Result: "<<postFix<<endl;
    string prefix = "";
    for (int i = postFix.length() - 1; i >= 0; i--)
    {
        prefix += postFix[i];
    }
    cout<<"Prefix Result: "<<prefix<<endl;
    return prefix;
}
// 11) Validation
string validation(string prefix)
{
    for(int i=prefix.length()-1; i>=0; i--)
    {
        string infix;
        infix+=prefix[i];
        if(isalnum(prefix[i]))
        {
            push(infix);
        }
        else
        {
            string op1=pop();
            string op2=pop();
            push("("+op1+infix+op2+")");
        }
    }
    return pop();
}
int main()
{
    cout<<"Enter your Infix expression: ";
    string infix;
    getline(cin, infix);
    string rti=reverse_tokenized_infix(infix);
    string prefix=infixtoPrefix(rti);
    string recovered=validation(prefix);
    cout<<"Recovered Infix: "<<recovered<<endl;

}
