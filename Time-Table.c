#include<stdio.h>
#include<string.h>
struct subject{
    char sub[15];
    
}s[6];
char*slot6(int i)
{
char *q[10];
     if (i==0)
        return q[10]="games";
     else if (i==1)
        return q[10]="library";
     else if (i==2)
        return q[10]="cse-lab";
     else if (i==3)
        return q[10]="art";
     else if (i==4)
        return q[10]="p-lab";
}
char*slot7(int i)
{
     char* q[10];
     if (i==0)
        return q[10]="library";
     else if (i==1)
        return q[10]="art";
     else if (i==2)
        return q[10]="cse-lab";
     else if (i==3)
        return q[10]="games";
     else if (i==4)
        return q[10]="p-lab";
}
char*slot6b(int i)
{
     char*q[10];
     if (i==0) {
         return q[10]="art";
     }
     else if (i==1) {
        return q[10]="cse-lab";
     }
     else if (i==2) {
         return q[10]="p-lab";
     }
     else if (i==3) {
        return q[10]="games";
     }
     else{ 
     return q[10]="library";
     }
}
char*slot7b(int i)
{
     char*q[10];
     if (i==0) {
         return q[10]="games";
     }
     else if (i==1) {
        return q[10]="cse-lab";
     }
     else if (i==2) {
         return q[10]="p-lab";
     }
     else if (i==3) {
        return q[10]="art";
     }
     else{ 
     return q[10]="library";
     }
}
char *slot1(int i,int pc,int cc,int csc,int mc,int ec) 
{
    int pc1,cc1,csc1,mc1,ec1;
    char *q[20];
    if(i==0)
    {
        mc1=0;
        if(mc<mc1||mc==mc1)
        {
          return q[10]="Free";
        }
        else
        return q[10]=s[4].sub;
    }
    if(i==1)
    {
        ec1=1;
        if(ec<ec1||ec==ec1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[3].sub;
    }
    if(i==2)
    {
        cc1=2;
        if(cc<cc1||cc==cc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[2].sub;
    }
    if(i==3)
    {
        pc1=3;
        if(pc<pc1||pc==pc1)
        {
            return  q[10]="Free";
        }
        else
        return q[10]=s[0].sub;
    }
    else
    {
        csc1=4;
        if(csc<csc1||csc==csc1)
        {
            return  q[10]="Free";
        }
        else
        {
            return q[10]=s[1].sub;
        }
    }
    
    return *q;
    
}
char*slot2(int i,int pc,int cc,int csc,int mc,int ec) 
{
    int pc1,cc1,csc1,mc1,ec1;
    char *q[20];
    if(i==0)
    {
        csc1=0;
        if(csc<csc1||csc==csc1)
        {
          return  q[10]="Free";
        }
        else
        return q[10]=s[1].sub;
    }
    if(i==1)
    {
        mc1=1;
        if(mc<mc1||mc==mc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[4].sub;
    }
    if(i==2)
    {
        ec1=2;
        if(ec<ec1||ec==ec1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[3].sub;
    }
    if(i==3)
    {
        cc1=3;
        if(cc<cc1||cc==cc1)
        {
            return  q[10]="Free";
        }
        else
        return q[10]=s[2].sub;
    }
    else
    {
        pc1=4;
        if(pc<pc1||pc==pc1)
        {
            return  q[10]="Free";
        }
        else
        {
            return q[10]=s[0].sub;
        }
    }
    
    return *q;
    
}
char*slot3(int i,int pc,int cc,int csc,int mc,int ec) 
{
    int pc1,cc1,csc1,mc1,ec1;
    char *q[20];
    if(i==0)
    {
        pc1=0;
        if(pc<pc1||pc==pc1)
        {
          return  q[10]="Free";
        }
        else
        return q[10]=s[0].sub;
    }
    if(i==1)
    {
        csc1=1;
        if(csc<csc1||csc==csc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[1].sub;
    }
    if(i==2)
    {
        mc1=2;
        if(mc<mc1||mc==mc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[4].sub;
    }
    if(i==3)
    {
        ec1=3;
        if(ec<ec1||ec==ec1)
        {
            return  q[10]="Free";
        }
        else
        return q[10]=s[3].sub;
    }
    else
    {
        cc1=4;
        if(cc<cc1||cc==cc1)
        {
            return  q[10]="Free";
        }
        else
        {
             return q[10]=s[2].sub;
        }
    }
    
    return *q;
    
}
char*slot4(int i,int pc,int cc,int csc,int mc,int ec) 
{
    int pc1,cc1,csc1,mc1,ec1;
    char *q[20];
    if(i==0)
    {
        cc1=0;
        if(cc<cc1||cc==cc1)
        {
          return  q[10]="Free";
        }
        else
        return q[10]=s[2].sub;
    }
    if(i==1)
    {
        pc1=1;
        if(pc<pc1||pc==pc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[0].sub;
    }
    if(i==2)
    {
        csc1=2;
        if(csc<csc1||csc==csc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[1].sub;
    }
    if(i==3)
    {
        mc1=3;
        if(mc<mc1||mc==mc1)
        {
            return  q[10]="Free";
        }
        else
        return q[10]=s[4].sub;
    }
    else
    {
        ec1=4;
        if(ec<ec1||ec==ec1)
        {
            return  q[10]="Free";
        }
        else
        {
             return q[10]=s[3].sub;
        }
    }
    
    return *q;
    
}
char*slot5(int i,int pc,int cc,int csc,int mc,int ec) 
{
    int pc1,cc1,csc1,mc1,ec1;
    char *q[20];
    if(i==0)
    {
        ec1=0;
        if(ec<ec1||ec==ec1)
        {
          return  q[10]="Free";
        }
        else
        return q[10]=s[3].sub;
    }
    if(i==1)
    {
        cc1=1;
        if(cc<cc1||cc==cc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[2].sub;
    }
    if(i==2)
    {
        pc1=2;
        if(pc<pc1||pc==pc1)
        {
            return q[10]="Free";
        }
        else
        return q[10]=s[0].sub;
    }
    if(i==3)
    {
        csc1=3;
        if(csc<csc1||csc==csc1)
        {
            return  q[10]="Free";
        }
        else
        {
        return q[10]=s[1].sub;
        }
    }
    else
    {
        mc1=4;
        if(mc<mc1||mc==mc1)
        {
            return  q[10]="Free";
        }
        else
        {
             return q[10]=s[4].sub;
        }
    }
    
    return *q;
    
}
char bre[10]="LUNCH";
int secta(int pc,int cc,int csc,int mc,int ec,int n,int arr[],int da)
{
    
    char*d[15];
    int i,j;
    FILE *fp;
    char filename[20];
    printf("Enter the file name:");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    if(fp==NULL){
        printf("Error opening file");
        return 1;
    }
    
	d[0]="MONDAY   ";
    d[1]="TUESDAY  ";
    d[2]="WEDNESDAY";
    d[3]="THURSDAY ";
    d[4]="FRIDAY   ";
	
	fprintf(fp,"DAY      ");
	for(j=1;j<=8;j++){
	    if(j==6){
	        fprintf(fp,"\t");
	    }
	    else if(j>6){
	        fprintf(fp,"\t%d",j-1);
	    }
	    else{
	        fprintf(fp,"\t%d",j);
	    }
	}
	
	fprintf(fp,"\n");
	if(da==0)
	{
	  for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", d[arr[i]],slot1(i,pc,cc,csc,mc,ec),slot2(i,pc,cc,csc,mc,ec),slot3(i,pc,cc,csc,mc,ec),slot4(i,pc,cc,csc,mc,ec),slot5(i,pc,cc,csc,mc,ec),bre,slot6(i),slot7(i));
	}  
	}
	else
	{
	    for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", d[i],slot1(i,pc,cc,csc,mc,ec),slot2(i,pc,cc,csc,mc,ec),slot3(i,pc,cc,csc,mc,ec),slot4(i,pc,cc,csc,mc,ec),slot5(i,pc,cc,csc,mc,ec),bre,slot6(i),slot7(i));
	}
	}
	
	
	fprintf(fp,"\n");

    return 0;
}
int sectb(int pc,int cc,int csc,int mc,int ec,int n,int arr[],int da)
{
    
    char*d[15];
    int i,j;
    FILE *fp;
    char filename[20];
    printf("Enter the file name:");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    if(fp==NULL){
        printf("Error opening file");
        return 1;
    }
    
	d[0]="MONDAY   ";
    d[1]="TUESDAY  ";
    d[2]="WEDNESDAY";
    d[3]="THURSDAY ";
    d[4]="FRIDAY   ";
	
	fprintf(fp,"DAY      ");
	for(j=1;j<=8;j++){
	    if(j==6){
	        fprintf(fp,"\t");
	    }
	    else if(j>6){
	        fprintf(fp,"\t%d",j-1);
	    }
	    else{
	        fprintf(fp,"\t%d",j);
	    }
	}
	
	
	fprintf(fp,"\n");
	if(da==0)
	{
	   for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", d[arr[i]],slot3(i,pc,cc,csc,mc,ec),slot4(i,pc,cc,csc,mc,ec),slot5(i,pc,cc,csc,mc,ec),slot1(i,pc,cc,csc,mc,ec),slot2(i,pc,cc,csc,mc,ec),bre,slot6b(i),slot7b(i));
	} 
	}
	else
	{
	    	for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", d[i],slot3(i,pc,cc,csc,mc,ec),slot4(i,pc,cc,csc,mc,ec),slot5(i,pc,cc,csc,mc,ec),slot1(i,pc,cc,csc,mc,ec),slot2(i,pc,cc,csc,mc,ec),bre,slot6b(i),slot7b(i));
	}
	}
	
	
	fprintf(fp,"\n");

    return 0;
}
int main()
{
    
    int pc,cc,csc,mc,ec,n,da,i,y;
    printf("Enter the number of working days in the week:");
    scanf("%d",&n);
    int arr[n-1];
    printf("Do you want to specify the days to be printed?\n0: Yes\n1: No\nEnter your input:");
    scanf("%d",&da);
    if(da==0)
    {
    printf("Enter the days you want one by one.\n0: MONDAY\n1: TUESDAY\n2: WEDNESDAY\n3: THURSDAY\n4: FRIDAY");
    for(i=0;i<n;i++)
    
    scanf("%d",&arr[i]);
    }
    else
    {
    
        
    }
    printf("would you like to enter the subject names?\n0: Yes\n1: No\nEnter your input:");
    scanf("%d",&y);
    if(y==0){
        for(i=0;i<5;i++){
        printf("enter the name for subject %d :",i+1);
        scanf("%s",s[i].sub);
        }
    }
    else if(y==1){
        strcpy(s[0].sub,"CPP");
        strcpy(s[1].sub,"UID");
        strcpy(s[2].sub,"FDS");
        strcpy(s[3].sub,"PHY");
        strcpy(s[4].sub,"MAT");
    }
    
    printf("Enter the number of %s classes required in a week:",s[0].sub);
    scanf("%d",&pc);
    printf("Enter the number of %s classes required in a week:",s[1].sub);
    scanf("%d",&cc);
    printf("Enter the number of %s classes required in a week:",s[2].sub);
    scanf("%d",&csc);
    printf("Enter the number of %s classes required in a week:",s[3].sub);
    scanf("%d",&mc);
    printf("Enter the number of %s classes required in a week:",s[4].sub);
    scanf("%d",&ec);
    printf("Timetable of section A:\n");
    secta( pc, cc, csc, mc, ec,n,arr,da);
    printf("Timetable of section B:\n");
    sectb( pc, cc, csc, mc, ec,n,arr,da);
    
    
    return 0;
}