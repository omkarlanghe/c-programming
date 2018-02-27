#include<stdio.h>

int main()
{
	int packetize(int,int,int,int);	
	int Depacketize(int,int,int,int);
	
	int flag,crc,length,data;
	
	printf("Enter the flag value:\n");
	scanf("%d",&flag);
	
	printf("Enter the crc value:\n");
	scanf("%d",&crc);
	
	printf("Enter the length:\n");
	scanf("%d",&length);
	
	printf("Enter the data:\n");
	scanf("%d",&data);
	
	printf("Packetized value of Data:%d\n",packetize(flag,crc,length,data));
	
	Depacketize(flag,crc,length,data);
	
	return 0;
}

int packetize(int flag, int crc, int length, int data)
{
	int packet = 0;
	
	packet = flag&((1<<2)-1);
	
	packet = packet<<9;
	
	packet = packet|(crc&((1<<9)-1));
	
	packet = packet<<7;
	
	packet = packet|(length&((1<<7)-1));
	
	packet = packet<<14;
	
	packet = packet|(data&((1<<14)-1));
	
	return packet;
}

int Depacketize(int flag, int crc, int length, int data)
{

	int packet;	
	
	data = packet&((1<<14)-1);
	
	packet = packet>>14;
	
	length = packet&((1<<7)-1);
	
	packet = packet>>7;
	
	crc = packet&((1<<9)-1);
	
	packet = packet>>9;
	
	flag = packet&((1<<2)-1);
	
	printf("Depacketized Values:\nData = %d\nLength = %d\nCrc = %d\nFlag = %d\n",data,length,crc,flag); 


}
