#include<stdio.h>
#include<stdlib.h>

struct Comp_insurance{
	char com_name[20];   
	char emp_name[20];
	int com_amount;
}; 
struct Personal_insurance{
	char name[20];  
	char cellphone[11]; 
	int per_amount; 
};
union Mydata{
	struct Comp_insurance comp_insurance;
	struct Personal_insurance personal_insurance; 
}mydata;

void show (int, union Mydata);
int main(void){
	
	int option;
	printf("�п�J�Ҧ�:"); 
	scanf("%d", &option);
	
	switch(option){
	   case 1:{
			printf("�п�J���q�W��:");
			scanf("%s",mydata.comp_insurance.com_name);
			printf("�п�J���u�W��:");
			scanf("%s", mydata.comp_insurance.emp_name);
			printf("�п�J��O���B:");
			scanf("%d",&mydata.comp_insurance.com_amount);
			break;
		}
	   case 2:{
			printf("�п�J�ӤH�m�W:");
			scanf("%s",mydata.personal_insurance.name);
			printf("�п�J�ӤH�q��:");
			scanf("%s", mydata.personal_insurance.cellphone);
			printf("�п�J��O���B:");
			scanf("%d", &mydata.personal_insurance.per_amount);
			break;
		}
					
	}
	
	show(option,mydata);
	
}
void show(int option,union Mydata mydata){
	switch(option){
		case 1:{
			printf("\n\n");
			printf("���q�W��%s\n", mydata.comp_insurance.com_name);
			printf("���u�m�W:%s\n", mydata.comp_insurance.emp_name);
			printf("��O���B:%d\n", mydata.comp_insurance.com_amount);
			break;
		}
		case 2:{
			printf("\n\n");
			printf("�ӤH�m�W:%s\n", mydata.personal_insurance.name);
			printf("�ӤH�q��:%s\n", mydata.personal_insurance.cellphone);
			printf("��O���B:%d\n", mydata.personal_insurance.per_amount);
			break;
		}
	}
	
}
