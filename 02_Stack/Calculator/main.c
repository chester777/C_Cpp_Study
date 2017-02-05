#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int int_temp;
	char ch_temp;
	ch_temp = getch();
	int flag = 0; // 0 : operand input mode // 1 : operator input mode	
	
	while(1) {
		
		if(flag == 0){
			scanf("%d", &int_temp);
			flag == 1;
		}
		else if(flag == 1) {
			ch_temp = getch();	
			flag == 0;
		}
		
		if(ch_temp == '=') 
		{
			printf("%c", ch_temp);
			break;
		}
		else
		{
			if('0' <= ch_temp && ch_temp <= '9')
			{
				
			}
		}
		
	}
	
	return 0;
}
