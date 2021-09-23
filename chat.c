#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("Welcome to the chat app");
	char nesto[220];
	char usr[220];
	char msg[220];
	char chat[50];
	char qrac[220];
	int kraj=1;

	int flag=1;
	char exit[]="=>exit";

reset:
	printf("Please choose a topic\n");
	scanf("%99s", nesto);
	sprintf(chat, "gnome-terminal -- ./beginChat.sh %s", nesto);
	system(chat);
	printf("Enter your username\n");
	scanf("%49s", usr);
	printf("Start chatting:\n");
	strcat(usr," ");
	strcat(usr, msg);

	do
	{
		scanf("%s", msg);
		sprintf(qrac, "./publishMessage.sh %s %s", nesto, msg);
		system(qrac);
		
		if(strcmp(msg, exit) == 0)
		{
			goto reset;
		}
	}
	while(kraj=1);
	return 0;
}
