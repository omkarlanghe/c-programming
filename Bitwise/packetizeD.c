#include<stdio.h>

int main()
{	
	int packetize(int,int,int,int,int);	
	int Depacketize(int,int,int,int,int);
	
	int flag,crc1,crc2,length,data;
	
	printf("Enter the flag value:\n");
	scanf("%d",&flag);
	
	printf("Enter the crc1:\n");
	scanf("%d",&crc1);
	
	printf("Enter the crc2:\n");
	scanf("%d",&crc2);
	
	printf("Enter length:\n");
	scanf("%d",&length);
	
	printf("Enter data:\n");
	scanf("%d",&data);
	
	printf("packetized data value:%d\n",packetize(flag,crc1,crc2,length,data));
	
	Depacketize(flag,crc1,crc2,length,data);
	
	return 0;
}

int packetize(int flag, int crc1, int crc2, int length, int data)
{
	int packet = 0;
	
	packet = flag&((1<<2)-1);
	
	packet = packet<<9;
	
	packet = packet|(crc1&(1<<9)-1);
	
	packet = packet<<5;
	
	packet = packet|(crc2&(1<<9)-1);
	
	packet = packet<<8;
	
	packet = packet|(length&(1<<7)-1);
	
	packet = packet<<14;
	
	packet = packet|(data&(1<<14)-1);
	
	return packet;
	
		
}

int Depacketize(int flag, int crc1, int crc2, int length, int data)
{
	int packet;
	
	data = packet&((1<<14)-1);
	
	packet = packet>>14;
	
	length = packet&((1<<7)-1);
	
	packet = packet>>7;
	
	crc2 = packet&((1<<9)-1);
	
	packet = packet>>9;
	
	crc1 = packet&((1<<9)-1);
	
	packet = packet>>9;
	
	flag = packet&((1<<2)-1);

	printf("Data=%d\nLength=%d\ncrc2=%d\ncrc1=%d\nflag=%d\n",data,length,crc2,crc1,flag);
	
}
