#include<bits/stdc++.h>
using namespace std;
#define sz 1024

FILE *op=fopen("output.txt","w");
void checknum(int num){
	int len,newnum;
	//cout<<num<<endl;
	FILE * mp=fopen("mappings.txt","r");//pointer to mappings.txt
	char * token;
	token=new char[sz];
	fgets(token,sz,mp);
	while(token[0]!='/'){
		len=strlen(token);
		newnum=0;
		newnum+=token[9]-48;
		newnum+=10*(token[8]-48);
		//cout<<newnum<<endl;
		if(newnum==num){
			//cout<<len<<"-->"<<token;
			for(int i=13;i<len-1;i++){
				//cout<<token[i];
				fputc(token[i],op);
			}
			//cout<<" ";
			if(len-14>1)
				fputc(' ',op);
			fclose(mp);
			return;
		}
		fgets(token,sz,mp);

	}
	//cout<<":( ";
		fclose(mp);
		return;
}

int main(int argc, char const *argv[]){

	int len,num;

	FILE * lp=fopen("logs.txt","r");//pointer to logs.txt
	
	char *token;
	token=new char[sz];
	char check='e';//check releas'e'
	while(1){
		fgets(token,sz,lp);
		//cout<<token;
		//change the code here convert char* to string
		if(token[1]=='e')
			break;
	}
	while(token[0]!='c'){
		
		len=strlen(token);
		//cout<<token[len-1]<<endl;
		num=0;
		if(token[len-2]=='e'){
			//cout<<" e found"<<token;
			num+=token[10]-48;
			num+=10*(token[9]-48);
			checknum(num);
			//sleep(2);
		}
		fgets(token,sz,lp);
	}
	fclose(lp);
	return 0;
}