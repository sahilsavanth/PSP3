 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 float res,freq,ind,cap,RL,RC,impdef,PI,impdef2;
 double imp;
 clrscr();
 PI=3.142;
 printf("\nEnter the value of capacitor in Farads\n");
 scanf("%f",&cap);
 printf("\nEnter the value of inductor in Henry\n");
 scanf("%f",&ind);
 printf("\nEnter the resistance value of the circuit\n");
 scanf("%f",&res);
 printf("\nEnter the frequency of the circuit\n");
 scanf("%f",&freq);
 RL=(2.00*PI*freq*ind);
 if(cap!=0)
 {
 RC=(1.00/(2.00*PI*freq*cap));
 }
 else
 {
 RC=0.00;
 }
 if(RL>RC)
  {
  printf("\nThe Circuit is Inductive\n");
  }
else if(RL==RC)
{
printf("\nThe Circuit is resistive\n");
}
else
  {
  printf("\nThe Circuit is Capacitive\n");
  }
impdef=(RL-RC);
impdef2=((res*res)+(impdef*impdef));
imp=sqrt(impdef2);
printf("\n The value of impedence of the circuit is %f ohms\n",imp);
printf("\n The value of inductive reactance is %f ohms\n",RL);
if(cap==0.00)
{
printf("\n The capacitor value is 0 Farads\n");
}
else
{
printf("\n The value of capactive reactance is %f ohms\n",RC);
}
getch();
}

