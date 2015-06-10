#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include "server/server.h"
#include "tools/tools.h"
#include <wiringPi.h>

#define USERMAIL "" //改成你的邮箱
#define SERVERIP "" //改成smtp服务器的地址，可以ping一下域名获得IP
#define PASSWD "" //邮箱密码
#define TO ""  //给谁发送
#define TITLE "这" //题目
#define BODY "" //正文

int main(int argc,char *argv[])
        {
				int i;
				time_t timep;
				FILE *idFilePointer;
				char logString[100],idString[200],mailString[400];
				system("idevice_id -l > /id.log");
				idFilePointer=fopen("/id.log","at+");
				if(idFilePointer==NULL) {
		printf("Can't open file.");
		exit(1);
	}else 
				printf("Program will run silently.\nAnd the log is in /run.log.\n");	
				fclose(idFilePointer);
				idFilePointer=NULL;
				init_d();	
				
				while(1){
				for(i=0;i<200;i++)	{
					idString[i] =' ';
				}
				system("idevice_id -l > /id.log");
				idFilePointer=fopen("/id.log","at+");
				fgets(idString,200,idFilePointer);
				time(&timep);	
				sprintf(logString,">>[发送]在%s，树莓派自动给您发送了这封邮件。",ctime(&timep));
				for( i=0;i<sizeof(logString);i++) {
				if(logString[i]=='\n') logString[i]=' ';
				else ;
		}
				printf("%s\n",logString);
				sprintf(mailString,"%s\r\n%sis ID\r\n%s\r\n",BODY,idString,logString);
				server(SERVERIP,USERMAIL,PASSWD,TO,TITLE,mailString);
				system("date >> /run.log");
				fclose(idFilePointer);
				delay(15*60*1000);	
                //return 0;

                }


			return 0;
        }
