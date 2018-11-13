#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>



using namespace std;

int pos, opc, conta;

 int k;

 long des, tama, cuantos;

char r;

struct promedio

{ int mat;

  float  par1;

  float par2;

  float par3;

  float prom;

  char nomb[30];
  
}
alumno[100];


float promedio(int i)

{

	alumno[i].prom=(alumno[i].par1+alumno[i].par2+alumno[i].par3)/3;

}

bool existe(int opc)

{for(int k=0;k<pos;k++)

 if(alumno[k].mat==opc)

   return (true);

 return(false);

}

void altas (int ult_mat )

{ do 

   

 { 

   conta++;

   ult_mat++;

   system("cls");

   cout<<"Ingrese el nombre del alumno ";

   cin>>alumno[pos].nomb;
   
   string aux = alumno[pos].nomb;

   //strupr(aux);

   cout<<"Ingrese la calificacion del primer parcial ";

   cin>>alumno[pos].par1;

   cout<<"Ingrese la calificacion del segundo parcial ";

   cin>>alumno[pos].par2;

   cout<<"Ingrese la calificacion del tercer parcial ";

   cin>>alumno[pos].par3;

   alumno[pos].prom = (alumno[pos].par1+alumno[pos].par2+alumno[pos].par3)/3; 

   alumno[pos].mat=ult_mat;

   cout<<"Se ha dado de alta al alumno "<<alumno[pos].nomb<<"\nY su matricula es "<<alumno[pos].mat; 

   cout<<"\nPROMEDIO GENERAL: "<<alumno[pos].prom;

   cout<<"\nDesea dar de alta a alguien mas S/N? ";

   cin>>r;

   pos++;

   system("cls");

 }while(r=='s'||r=='S');

 }



void bajas()

{

	cout<<"Ingrese la matricula del alumno que desea dar de baja ";

       cin>>opc;

       int exis = existe(opc);

       if (exis!=0)

	   for (int j=0; j<pos; j++)

       {if (opc==alumno[j].mat)

        {cout<<"LOS DATOS DEL ALUMNO SON:"<<"\nMATRICULA"<<"\t"<<"NOMBRE"<<"\t"<<"PARCIAL 1"<<"\t"<<"PARCIAL 2"<<"\t"<<"PARCIAL 3"<<"\t     "<<"PROMEDIO";

		cout<<"\n"<<alumno[j].mat<<"\t\t"<<alumno[j].nomb<<"\t\t"<<alumno[j].par1<<"\t\t"<<alumno[j].par2<<"\t\t"<<alumno[j].par3<<"\t\t"<<alumno[j].prom;

		cout<<"\nCONFIRMA LA BAJA DEL ALUMNO? S/N ";

	    cin>>r; r=toupper(r);

	    	if(r=='S')

	    	 alumno[j].mat=-1;

		}}

		else

		 cout<<"NO EXISTE ESTA MATRICULA";

}

void cambios(){

			

	int opc;

	do{

	system("cls");

	cout<<"INGRESE LA MATRICULA A LA QUE LE DESEA REALIZAR CAMBIOS ";

	cin>>opc;

	int m=existe(opc);

	if(m==0)

	{

	cout<<"LA MATRICULA NO EXISTE "<<endl;

	cout<<"DESEA REALIZAR CAMBIOS EN OTRA MATRICULA S/N ";

	cin>>opc;

	opc=toupper(opc);

	}

	else {

		for(int i=0;i<pos;i++)

			if(alumno[i].mat==opc)

			{

			cout<<"\nDESEA REALIZAR CAMBIOS AL ALUMNO CON LOS SIGUIENTES DATOS S/N "<<endl;

			cout<<"MATRICULA"<<"\t"<<"NOMBRE"<<"\t"<<"PARCIAL 1"<<"\t"<<"PARCIAL 2"<<"\t"<<"PARCIAL 3"<<"\t"<<"	PROMEDIO"<<endl;

			cout<<alumno[i].mat<<"\t\t"<<alumno[i].nomb<<"\t\t"<<alumno[i].par1<<"\t\t"<<alumno[i].par2<<"\t\t"<<alumno[i].par3<<"\t\t"<<alumno[i].prom<<endl;

			cin>>r;

			r=toupper(r);

			if(r=='S')

			{

			cout<<"ELIJA EL PARCIAL QUE DESEA CAMBIAR "<<endl;

			cout<<"1)PRIMER PARCIAL"<<endl;

			cout<<"2)SEGUNDO PARCIAL "<<endl;

			cout<<"3)TERCER PARCIAL ";

			cin>>opc;

			switch (opc)

			{

			case 1:

			cout<<"INGRESE LA CALIFICACION DEL PRIMER PARCIAL ";

			cin>>alumno[i].par1;	

			break;

			case 2:

			cout<<"INGRESE LA CALIFICACION DEL SEGUNDO PARCIAL ";

			cin>>alumno[i].par2;

			break;

			case 3:

			cout<<"INGRESE LA CALIFICACION DEL TERCER PARCIAL ";

			cin>>alumno[i].par3;

			alumno[i].prom=promedio(i);}

			break;

			

			}

			}

	cout<<"DESEA REALIZAR CAMBIOS EN OTRA MATRICULA S/N ";

	cin>>r;

	r=toupper(r);

	}}

	while(r!='N');}



void mostrar()

 {

  system("cls");

  cout<<"Desea mostrar todos los datos? S/N ";

  cin>>r;

  r=toupper(r);

    if (r=='S')

      {cout<<"MATRICULA"<<"\t"<<"NOMBRE"<<"\t"<<"PARCIAL 1"<<"\t"<<"PARCIAL 2"<<"\t"<<"PARCIAL 3"<<"\t     "<<"PROMEDIO";

      for(int j=0;j<pos;j++)

      {if(alumno[j].mat>0)

	  cout<<"\n"<<alumno[j].mat<<"\t\t"<<alumno[j].nomb<<"\t\t"<<alumno[j].par1<<"\t\t"<<alumno[j].par2<<"\t\t"<<alumno[j].par3<<"\t\t"<<alumno[j].prom;}

      }

    else

      {cout<<"Ingrese la matricula del alumno que desea buscar ";

       cin>>opc;

       int exis = existe(opc);

       if (exis!=0)

	   for (int j=0; j<pos; j++)

       {if (opc==alumno[j].mat)

        {cout<<"MATRICULA"<<"\t"<<"NOMBRE"<<"\t"<<"PARCIAL 1"<<"\t"<<"PARCIAL 2"<<"\t"<<"PARCIAL 3"<<"\t     "<<"PROMEDIO";

		cout<<"\n"<<alumno[j].mat<<"\t\t"<<alumno[j].nomb<<"\t\t"<<alumno[j].par1<<"\t\t"<<alumno[j].par2<<"\t\t"<<alumno[j].par3<<"\t\t"<<alumno[j].prom;

		}}

		else

		 cout<<"NO EXISTE ESTA MATRICULA";

	  

  

 }}





main()

{

 FILE * fp;	

 static int ult_mat;



  	tama=sizeof(alumno);

	fp=fopen("Calificaciones.dat","r");

		

	    if(fp!=NULL)

		{

			fseek(fp,0L,SEEK_END);

			des=ftell(fp);

			cout<<"EL TOTAL DE BYTES EN EL ARCHIVO ES "<<des;

			cuantos=des/tama;

			cout<<"\nEL TOTAL DE REGISTROS ES "<<cuantos;

			rewind(fp);

			pos=cuantos+1;

			//for(int j=0;j<cuantos;j++)

			//for(int l=0;l=cuantos;l++)

			fread(&alumno[0],tama,cuantos,fp);

			ult_mat=alumno[cuantos].mat;

			fclose(fp);

		}
}