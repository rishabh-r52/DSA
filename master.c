//_________________________________________________PROGRAM BEGIN_________________________________________________//
#include <stdio.h>
#include <stdlib.h>
int stack[100], top = -1, stack_size = 100; // Stack Variables
int array[100];
void arithmetic_ops(); // Arithmetic Functions Declarations
void arithmetic_exponent();
void array_ops(); // Array Functions Declarations
void array_create();
void array_search();
void array_sort();
void array_delete();
void array_display();
void stack_ops(); // Stack Functions Declarations
void stack_push();
void stack_pop();
void stack_display();
int main()
{
	int ch_main;
	while (1)
	{
		printf("\n--------DATA STRUCTURES MENU--------\n");
		printf("\n1. Arithmatic Operations\n2. Arrays\n3. Stacks\n4. Queues\n5. Linked Lists\n6. Trees\n7. Graph\n8. Exit\n");
		printf("\n------------------------------------\n");
		printf("\nEnter Choice: ");
		scanf("%d", &ch_main);
		switch (ch_main)
		{
		case 1:
			arithmetic_ops();
			break;
		case 2:
			array_ops();
			break;
		case 3:
			stack_ops();
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			exit(0);
		default:
			printf("\nInvalid choice, Please enter again!\n");
			break;
		}
	}
}
// Arithmetic Functions Definitions
void arithmetic_ops()
{
	int ch_arith, arith_num1, arith_num2, arith_result, arith_flag = 0;
	char arith_op;
	while (1)
	{
		printf("\n--------ARITHMETIC OERATIONS--------\n");
		printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponents\n6. Previous Menu\n7. Exit\n");
		printf("\n------------------------------------\n");
		printf("\nEnter Choice: ");
		scanf("%d", &ch_arith);
		if (ch_arith >= 1 && ch_arith <= 4)
		{
			printf("\nEnter Two Numbers: \n");
			scanf("%d %d", &arith_num1, &arith_num2);
			arith_flag = 1;
		}
		switch (ch_arith)
		{
		case 1:
			arith_result = arith_num1 + arith_num2;
			arith_op = '+';
			break;
		case 2:
			arith_result = arith_num1 - arith_num2;
			arith_op = '-';
			break;
		case 3:
			arith_result = arith_num1 * arith_num2;
			arith_op = '*';
			break;
		case 4:
			if (arith_num2 != 0)
			{
				arith_result = arith_num1 / arith_num2;
				arith_op = '/';
			}
			else
			{
				printf("\nUndefined\n");
			}
			break;
		case 5:
			arithmetic_exponent();
			break;
		case 6:
			return;
		case 7:
			exit(0);
		default:
			printf("\nInvalid choice, Please enter again!\n");
			break;
		}
		if (arith_flag == 1)
		{
			printf("\nResult: %d %c %d = %d\n", arith_num1, arith_op, arith_num2, arith_result);
			arith_flag = 0;
		}
	}
}
void arithmetic_exponent()
{
	int ch_arith_exp;
	while (1)
	{
		printf("\n--------MENU--------\n");
		printf("\n1. Square\n2. Square Root\n3. Cube\n4. Cube Root\n5. nth Power\n6. nth Root\n7. Previous Menu\n8. Exit\n");
		printf("\n--------------------\n");
		printf("\nEnter Choice: ");
		scanf("%d", &ch_arith_exp);
		switch (ch_arith_exp)
		{
		case 1: // square fn
			break;
		case 2: // sq root fn
			break;
		case 3: // cube fn
			break;
		case 4: // cube rt fn
			break;
		case 5: // nth pwr fn
			break;
		case 6: // nth rt fn
			break;
		case 7:
			return;
		case 8:
			exit(0);
		default:
			printf("\nInvalid choice, Please enter again!\n");
			break;
		}
	}
}
// Array Functions Definitions
void array_ops()
{
	int ch_array;
	while (1)
	{
		printf("\n----------ARRAY OPERATIONS----------\n");
		printf("\n1. Create\n2. Search\n3. Sort\n4. Delete\n5. Display\n6. Previous Menu\n7. Exit\n");
		printf("\n------------------------------------\n");
		printf("\nEnter Choice: ");
		scanf("%d", &ch_array);
		switch (ch_array)
		{
		case 1:
			array_create();
			break;
		case 2:
			array_search();
			break;
		case 3:
			array_sort();
			break;
		case 4:
			array_delete();
			break;
		case 5:
			array_display();
			break;
		case 6:
			return;
		case 7:
			exit(0);
		default:
			printf("\nInvalid choice, Please enter again!\n");
			break;
		}
	}
}
void array_create()
{
	
}
void array_search()
{

}
void array_sort()
{

}
void array_delete()
{

}
void array_display()
{

}
// Stack Functions Definitions
void stack_ops()
{
	int ch_stack;
	while (1)
	{
		printf("\n--------MENU--------\n");
		printf("\n1. Push\n2. Pop\n3. Display\n4. Previous Menu\n5. Exit\n");
		printf("\n--------------------\n");
		printf("\nEnter Choice: ");
		scanf("%d", &ch_stack);
		switch (ch_stack)
		{
		case 1:
			stack_push();
			break;
		case 2:
			stack_pop();
			break;
		case 3:
			stack_display();
			break;
		case 4:
			return;
		case 5:
			exit(0);
		default:
			printf("\nInvalid choice, Please enter again!\n");
			break;
		}
	}
}
void stack_push()
{
	if (top == stack_size - 1)
	{
		printf("\nStack Overflow!\n");
		return;
	}
	int x;
	printf("\nElement to Push: ");
	scanf("%d", &x);
	stack[++top] = x;
}
void stack_pop()
{
	if (top == -1)
	{
		printf("\nStack Underflow!\n");
		return;
	}
	int x;
	top--;
	printf("\nElement Popped: %d\n", x);
}
void stack_display()
{
	if (top == -1)
	{
		printf("\nStack is Empty!\n");
		return;
	}
	printf("\nStack Elements:\n");
	for (int i = top; i > -1; i--)
	{
		if (i != top)
			printf("%d\n", stack[i]);
		else
			printf("%d	<--- Top = %d\n", stack[i], top + 1);
	}
}
//__________________________________________________PROGRAM END__________________________________________________//