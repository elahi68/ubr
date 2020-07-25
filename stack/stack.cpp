Stack :: Stack()
{
	top = -1;
}
void Stack :: push(int data)
{
	stack[++top] = data;
	return;
}
int Stack :: pop()
{
	return stack[top--];
}
bool Stack :: isFull()
{
	if(top == 4)
		return true;
	else
		return false;
}
bool Stack :: isEmpty()
{
	if(top == -1)
		return true; //if empty returns false
	else 
		return false;
}
