//Jeison Ivan Roa Mora


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float peso,estatura,imc,meta,factividad,sexo,edad,repetir;			 //Variables Variables globales usadas en todos los programas.
float caloriasdiarias,proteinas,grasas,hidratos,grproteinas,grgrasas,grhidratos; //Variables programa 2
float quemar,tiempo,caloriasquemar,dias; //Variables programa 3
float fcardiaca; //Variables programa 4
float diabetes,fumar,enfermedadc,fibrilacion,ventricular,puntos,presion_sistolica,presion_distolica,presion_promedio,riesgo; //variables programa 5
int sw;
char nombre[20];

void disclaimer ();
void lectura_datos();
void programa_1();
void programa_2();
void programa_3();
void programa_4();
void programa_5();

//Funciones de subprogramas
void calcular_imc();
void factor_actividad();
void tasa_metabolica_reposo();
void frecuencia_cardiaca();
void presiones();
void puntos_accidente();
void calcular_riesgo();



main ()
{  
     disclaimer();
     system ("cls");
     system ("color 1e");
     printf ("\t\t  + + + BIENVENIDO A Dr. SALUD + + +  \n"); 
     lectura_datos();
                     // switch y ciclo de repeticion del programa
     do
     {
     system ("cls");
     system ("color 74");
     printf ("\t ---------- MENU PRINCIPAL ---------- \n\n");
     printf (" Que informacion desea que se le suministre en esta consulta \n (Escriba el numero de opcion correspondiente): \n\n");
     printf ("\n\n (1) Conocer si el peso actual es saludable segun segun el IMC \n       (Indice de masa corporal) \n");
     printf ("\n\n (2) Realizar una planeacion de dieta para alcanzar un peso deseado. \n");
     printf ("\n\n (3) Realizar una planeacion de ejercicio para alcanzar un peso deseado.\n");
     printf ("\n\n (4) Realizar el calculo de la frecuencia cardiaca maxima.\n");
     printf ("\n\n (5) Conocer cual es el riesgo de un Accidente Vascular Cerebral en los proximos      10 anos\n");
     printf ("\n\n (0) SALIR.");
     scanf ("%s",&sw);
     system ("color 1e");
     system ("cls");


     switch (sw)
     {      
            case '1':
                 programa_1();
                 break;

            case '2':
                 programa_2();
                 break;

            case '3':
                 programa_3();
                 break;
            
            case '4':
                 programa_4();
                 break;

            case '5':
                 programa_5();
                 break;
            case '0':
                 exit(0);
                 break;
            
            default: printf ("Opcion no valida...");
     }

            printf("\n\n\t Desea Realizar otra consulta? (1)Si (0)No \n");
            scanf("%f",&repetir);
            }
            while (repetir==1);

     system ("color e1");
     system ("cls");
     printf ("%s Muchas gracias por usar nuestro software. Hasta Luego :)",nombre);
     getch();

}

void disclaimer ()
{
     system ("color 42");
     printf ("\n \t ADVERTENCIA:");
     printf ("\n\n\n\n Este programa incluye informacion medica general y no reemplaza el consejo de");
     printf ("\n su medico o profesional de salud. Si usted tiene preguntas acerca de su");
     printf ("\n condicion fisica y necesita mas detalles de los brindados por este software");
     printf ("\n no dude en consultar con su medico o profesional de la salud...");
     printf ("\n\n Presione cualquier tecla para continuar...");
     getch();

}


void lectura_datos()
{
     printf ("\n Para brindarle un mejor servicio por favor digite su nombre: \n");
 gets(nombre);  
   //  scanf ("%s",&nombre);//
     system ("cls");

     printf ("\t Bienvenid@ %s  \n\n Por favor digite su peso (Kg): \n",nombre);
     scanf ("%f",&peso);
     system ("cls");
     while (peso<20||peso>150)
     {
           printf ("El peso digitado (%.1f) no es valido,recuerde que debe estar entre \n 20 y 150 Kilogramos.",peso);
           printf ("\n\n Por favor digite su peso (Kg): \n");
           scanf ("%f",&peso);
           system ("cls");
     }


     printf ("\t Bienvenid@ %s  \n\n Por favor digite su estatura (Cm): \n",nombre);
     scanf ("%f",&estatura);
     system ("cls");
     while (estatura<60||estatura>250)
     {
           printf ("La estatura (%.1f) digitada no es valida,recuerde que debe estar \n entre 60 y 250 Centimetros.",estatura);
           printf ("\n\n Por favor digite su estatura (Cm): \n");
           scanf ("%f",&estatura);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Por favor digite su edad (anos): \n",nombre);
     scanf ("%f",&edad);
     system ("cls");
     while (edad<2||edad>70)
     {
           printf ("La edad digitada (%.f) no es valida,recuerde que debe estar \n entre 2 y 70 anos de edad.",edad);
           printf ("\n\n Por favor digite su edad (años): \n");
           scanf ("%f",&edad);
           system ("cls");
     }


     printf ("\t Bienvenid@ %s  \n\n Por favor digite segun su sexo: \n 1 (Hombre) \n 2 (Mujer) \n",nombre);
     scanf ("%f",&sexo);
     system ("cls");
     while (sexo<1||sexo>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",sexo);
           printf ("Por favor digite segun su sexo: \n 1 (Hombre) \n 2 (Mujer) \n");
           scanf ("%f",&sexo);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Usted posee antecedentes de diabetes \n 1 (SI) \n 2 (NO)  \n",nombre);
     scanf ("%f",&diabetes);
     system ("cls");
     while (diabetes<1||diabetes>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",diabetes);
           printf ("Usted posee antecedentes de diabetes \n 1 (SI) \n 2 (NO)  \n");
           scanf ("%f",&diabetes);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Usted fuma regularmente? \n 1 (SI) \n 2 (NO)  \n",nombre);
     scanf ("%f",&fumar);
     system ("cls");
     while (fumar<1||fumar>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",fumar);
           printf ("Usted fuma regularmente? \n 1 (SI) \n 2 (NO)  \n");
           scanf ("%f",&fumar);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Usted tiene antecedentes de alguna enfermedad cardiaca? \n 1 (SI) \n 2 (NO)  \n",nombre);
     scanf ("%f",&enfermedadc);
     system ("cls");
     while (enfermedadc<1||enfermedadc>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",enfermedadc);
           printf ("Usted tiene antecedentes de alguna enfermedad cardiaca? \n 1 (SI) \n 2 (NO)  \n");
           scanf ("%f",&enfermedadc);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Usted tiene antecedentes de fibrilacion auricular? \n 1 (SI) \n 2 (NO)  \n",nombre);
     scanf ("%f",&fibrilacion);
     system ("cls");
     while (fibrilacion<1||fibrilacion>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",fibrilacion);
           printf ("Usted tiene antecedentes de fibrilacion auricular? \n 1 (SI) \n 2 (NO)  \n");
           scanf ("%f",&fibrilacion);
           system ("cls");
     }

     printf ("\t Bienvenid@ %s  \n\n Usted tuvo algun diagnostico de hipertrofia ventricular izquierda? \n 1 (SI) \n 2 (NO)  \n",nombre);
     scanf ("%f",&ventricular);
     system ("cls");
     while (ventricular<1||ventricular>2)
     {
           printf ("\n %.f No es una opcion valida \n\n",ventricular);
           printf ("Usted tuvo algun diagnostico de hipertrofia ventricular izquierda? \n 1 (SI) \n 2 (NO)  \n");
           scanf ("%f",&ventricular);
           system ("cls");
     }

     printf ("\n \t Bienvenid@ %s  \n\n Por favor digite el numero de la opcion que mas se asemeje a su estilo de vida: \n\n",nombre);
     printf ("1. Sedentario Poco o nada de ejercicio. \n");
     printf ("2. Ligeramente activo ejercicio o deportes 1-3 dias a la semana, \n escritorio de trabajo. \n");
     printf ("3. Moderadamente activo o deportes 3-5 dias a la semana, \n trabajo activo y caminada diaria. \n");
     printf ("4. Ejercicio activo o deportes regularmente. \n");
     printf ("5. Muy activo El ejercicio intenso diario o deportes y trabajo fisico \n");
     scanf ("%f",&factividad);
     system ("cls");
     while (factividad<1||factividad>5)
     {
           printf ("\n\n\t %.f No es una opcion valida. \n\n\n",factividad);
           printf ("Por favor digite el numero de la opcion que mas se asemeje a su estilo de vida: \n");
           printf ("1. Sedentario Poco o nada de ejercicio. \n");
           printf ("2. Ligeramente activo ejercicio o deportes 1-3 dias a la semana, \n escritorio de trabajo. \n");
           printf ("3. Moderadamente activo o deportes 3-5 dias a la semana, \n trabajo activo y caminada diaria. \n");
           printf ("4. Ejercicio activo o deportes regularmente. \n");
           printf ("5. Muy activo El ejercicio intenso diario o deportes y trabajo fisico \n");
           scanf ("%f",&factividad);
           system ("cls");
     }
}

void programa_1()
{                //Programa diseñado con los datos del IMC encontrados en su pagina oficial.
            calcular_imc();
            printf ("\n Presione cualquier tecla para continuar...");
            getch();
            system ("cls");
}

void programa_2()
{                //Programa basado en la ecuacion para Encontrar la tasa metabolica en reposo y se opera con el favor de actividad corporal que el usuario declaro.
            
            factor_actividad();
            
            printf ("%s Por favor digite el peso (Kg) al cual desea llegar con su dieta: \n",nombre);
            scanf ("%f",&meta);
            while (meta<1)
            {
                  system ("cls");
                  printf ("\n El valor digitado no es valido, Recuerde que debe ser mayor a 1. \n\n\n");
                  printf ("%s Por favor digite el peso (Kg) al cual desea llegar con su dieta: \n",nombre);
                  scanf ("%f",&meta);

            }
            
            tasa_metabolica_reposo();

            system ("cls");
            printf (" %s Usted debe ingerir diariamente un maximo total de: %.f Kcalorias \n para alcanzar y/o mantener un peso de: %.1f Kg",nombre,caloriasdiarias,meta);
            printf ("\n\n El consumo de estas calorias debe realizarse de la siguiente manera (Cada dia):\n");
            printf("\t Carbohidratos      %.1f Kcal  (%.1f Gr de carbohidratos) \n",hidratos,grhidratos);
            printf("\t Grasas             %.1f Kcal  (%.1f Gr de grasas)\n ",grasas,grgrasas);
            printf("\t Proteinas          %.1f Kcal  (%.1f Gr de proteinas)\n ",proteinas,grproteinas);

            printf ("\n\n Tenga en cuenta la siguiente informacion para poner en marcha \n su dieta segun la informacion obtenida: \n \n ");
            printf ("\n\n Proteinas:         Origen animal (carne,pescado,huevos,etc) \n                    Origen vegetal (legumbres,cereales,etc)");
            printf ("\n\n Lipidos o grasas:  Origen animal (tocino,mantequilla,etc)   \n                    Origen vegetal (Aceite de girasol,oliva,etc)");
            printf ("\n\n Carbohidratos:     Origen animal (azucares,leche,etc)       \n                    Origen vegetal (feculas,legumbres,patatas,etc)");
            printf ("\n\n Agua:              Elemento fundamental en una buena dieta, \n                    Beber minimo 4L Diariamente de agua \n                    (1.5l De alimentos y el resto ingerirlo.)");

            printf ("\n \n \n Nota: Estos calculos estan hechos en base a la actividad fisica");
            printf ("\n que usted declaro anteriormente. En caso de que esta aumente o disminuya,");
            printf ("\n la dieta se tendra que realizar durante");
            printf ("\n un mayor o menor tiempo para obtener  los resultados esperados.");
            
            printf ("\n Es recomendable que use la opcion 3 de este programa para combinar su dieta con un ejercicio y obtener mejores resultados.");
            printf ("\n \n Presione cualquier tecla para continuar...");
            getch();
            system ("cls");
}

void programa_3()
{                // Programa basado en el Numero de calorias quemadas por Km caminado en promedio, con un margen de error del 5%
            system ("cls");
            printf ("\n %s Digite el peso al cual usted desea llegar quemando calorias",nombre);
            printf ("\n con su rutina de ejercicio (Numero inferior al peso actual): \n");
            scanf ("%f",&meta);
            system ("cls");
            while (meta>=peso||meta<1)
            {
                  printf ("\n %.f Kg No es valido ya que su meta debe ser inferior al peso actual que es: %.f \n\n",meta,peso);
                  printf ("\n %s Digite el peso al cual usted desea llegar quemando calorias \n con su rutina de ejercicio (Numero inferior al peso actual): \n",nombre);
                  scanf ("%f",&meta);
                  system ("cls");
            }

            printf ("\n %s Ahora digite el numero de meses en los cuales quiere \n lograr su objetivo (Recomendado 2) \n",nombre);
            scanf ("%f",&dias);
            quemar=peso-meta;
            system ("cls");
            caloriasquemar=quemar*7716 ; //Asignacion calorica dependiendo del peso
            tiempo = caloriasquemar/600; //Regla de 3 : por cada hora caminada se queman 600Kcal.
            tiempo = tiempo/(dias*31);        //Se dividen las horas de caminada en los dias disponibles

            printf ("\n\n\n %s Usted debe realizar trote Aerobico (Ritmo Suave) \n durante %.f meses, \n Un total de %.1f Horas Diarias \n para quemar %.2f Calorias \n y alcanzar un peso de %.f Kilos.",nombre,dias,tiempo,caloriasquemar,meta);
            printf("\n\n\n\n\t Para un mejor resultado en su proceso de bajar peso, \n\t use el numeral 2 de este programa para calcular su necesidad calorica \n\t diaria para alcanzar su meta propuesta. \n\n Nota: Si el numero de horas diarias es muy alto intente de nuevo aumentando el numero de meses.\n ");
}

void programa_4 ()
{               //Programa calcular frecuencia cardiaca
            frecuencia_cardiaca();
            printf ("\n para que sirve la frecuencia cardiaca maxima?, desde esta cifra se \n pueden calcular el ritmo cardiaco que tenemos que llevar segun el trabajo \n que queremos hacer. Ejemplo, si tenemos una frecuencia cardiaca maxima de 190 \n y queremos trabajar en la zona aerobica intermedia del 60 porciento al \n 70 porciento tendremos que ir a 115 y 130 pulsaciones por minuto.");
            printf ("\n\n\n %s Usted tiene una frecuencia cardiaca maxima de %.f",nombre,fcardiaca);
}

void programa_5()
{				//Programa riesgo de Accidente Vascular Cerebral en 10 años.
            presiones();
            puntos_accidente();
            calcular_riesgo();
            
            if (puntos>30)
            {
                         printf("El riesgo de que usted sufra un accidente cardiovascular en los proximos \n 10 anos es de mas del %.f % . \n\n\n Su presion sistolica es de %.f . \n Y su presion distolica es %.f . ",riesgo,presion_sistolica,presion_distolica);
            }
            else
            {
                         printf("El riesgo de que usted sufra un Accidente Vascular Cerebral en los proximos \n 10 años es de %.f Porciento! . \n\n\n Su presion sistolica es de %.f . \n Y su presion distolica es %.f . ",riesgo,presion_sistolica,presion_distolica);
            }
            
}


void calcular_imc()
{
            system ("cls");
            imc=peso/((estatura/100)*(estatura/100));
            if (imc<=16)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en Delgadez severa.\n",nombre);
            }
            if (imc>16&&imc<17)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en Delgadez moderada\n",nombre);
            }
            if (imc>=17&&imc<18.5)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en Delgadez no muy pronunciada.\n",nombre);
            }
            if (imc>=18.5&&imc<25)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en un estado Normal (Aparentemente Saludable)\n",nombre);
            }
            if (imc>=25 && imc<30)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en un estado de Sobrepeso (Pre-Obeso) \n",nombre);
            }
            if (imc>=30&&imc<35)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en un estado de Obesidad TIPO I \n",nombre);
            }
            if (imc>=35&&imc<40)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en un estado de Obesidad TIPO II \n",nombre);
            }
            if (imc>=40)
            {
                   printf ("%s Segun la Organizacion Mundial de la Salud \n Usted se encuentra en un estado de Obesidad TIPO III \n",nombre);
            }
}

void factor_actividad()
{
                 system ("cls");
                 if (factividad==1)
                 {factividad=1.3 ;}
                 if (factividad==2)
                 {factividad=1.475 ;}
                 if (factividad==3)
                 {factividad=1.65 ;}
                 if (factividad==4)
                 {factividad=1.75;}
                 if (factividad==5)
                 {factividad=2.1;}
}

void tasa_metabolica_reposo()
{                 //  La ecuacion Mufflin para RMR (tasa metabólica en reposo) Multiplicando por factor de actididad (McArdle et al 1996))  //
            if (sexo==1)
            {           //  La ecuacion Mufflin para RMR en hombres
                        caloriasdiarias=6.25*estatura;
                        caloriasdiarias=caloriasdiarias+10*meta;
                        caloriasdiarias=caloriasdiarias-5*edad;
                        caloriasdiarias=(caloriasdiarias+5)*factividad;
            }
            if (sexo==2)
            {           //  La ecuacion Mufflin para RMR en mujeres
                        caloriasdiarias=6.25*estatura;
                        caloriasdiarias=caloriasdiarias+10*meta;
                        caloriasdiarias=caloriasdiarias-5*edad;
                        caloriasdiarias=(caloriasdiarias-161)*factividad;
            }
            //a continuacion la asignacion de el porcentaje de calorias y su conversion a Gr Para una mejor interpretacion del usuario.
            proteinas=15*caloriasdiarias/100;
            grasas=25*caloriasdiarias/100;
            hidratos=60*caloriasdiarias/100;
            grproteinas=proteinas/4;
            grgrasas=grasas/9;
            grhidratos=hidratos/9;
}

void frecuencia_cardiaca()
{
            system ("cls");
            if (sexo==1)
            {           // Formulas de frecuencia cardiaca dadas por Pedro Ángel López Miñarro  en su libro sobre salud. (Para hombre y mujer)
                         fcardiaca=0.5*edad;
                         fcardiaca=210-fcardiaca;
                         fcardiaca= fcardiaca-(peso/100);
                         fcardiaca= fcardiaca+4;
            }
            else
            {
                         fcardiaca=0.5*edad;
                         fcardiaca=210-fcardiaca;
                         fcardiaca= fcardiaca-(peso/100);
            }
}


void presiones()
{
    if (sexo==1)
    {
        if (edad<=18)
        {
            presion_sistolica=120;
            presion_distolica=72.5;
        }
        if (edad>=19 && edad<=24)
        {
            presion_sistolica=122.5;
            presion_distolica=72.5;
        }
        if (edad>=25 && edad<=29 )
        {
            presion_sistolica=124;
            presion_distolica=73;
        }
        if (edad>=30 && edad<=39 )
        {
            presion_sistolica=127;
            presion_distolica=77.5;
        }
        if (edad>=40 && edad<=49 )
        {
            presion_sistolica=135.25;
            presion_distolica=80.5;
        }
        if (edad>=50 && edad<=59 )
        {
            presion_sistolica=140;
            presion_distolica=85;
        }
        if (edad>=60 )
        {
            presion_sistolica=142.5;
            presion_distolica=85;
        }
    }

    if (sexo==2)
    {
        if (edad<=18)
        {
            presion_sistolica=115;
            presion_distolica=72.5;
        }
        if (edad>=19 && edad<=24)
        {
            presion_sistolica=115;
            presion_distolica=72.5;
        }
        if (edad>=25 && edad<=29 )
        {
            presion_sistolica=116;
            presion_distolica=73;
        }
        if (edad>=30 && edad<=39 )
        {
            presion_sistolica=122.5;
            presion_distolica=77.5;
        }
        if (edad>=40 && edad<=49 )
        {
            presion_sistolica=130;
            presion_distolica=80.5;
        }
        if (edad>=50 && edad<=59 )
        {
            presion_sistolica=140;
            presion_distolica=85;
        }
        if (edad>=60 )
        {
            presion_sistolica=145;
            presion_distolica=85;
        }
    }


}

void puntos_accidente()
{
                           // Asignacion puntos cardiacos dependiendo de la edad
            if (edad>=57 && edad<=59)
            {
                puntos=puntos+1 ;
            }
            if (edad>=60 && edad<=62)
            {
                puntos=puntos+2 ;
            }
            if (edad>=63 && edad<=65)
            {
                puntos=puntos+3 ;
            }
            if (edad>=66 && edad<=68)
            {
                puntos=puntos+4 ;
            }
            if (edad>=69 && edad<=72)
            {
                puntos=puntos+5 ;
            }
            if (edad>=73 && edad<=75)
            {
                puntos=puntos+6 ;
            }
            if (edad>=76 && edad<=78)
            {
                puntos=puntos+7 ;
            }
            if (edad>=79 && edad<=81)
            {
                puntos=puntos+8 ;
            }
            if (edad>=82 && edad<=84)
            {
                puntos=puntos+9 ;
            }
            if (edad>85)
            {
                puntos=puntos+10 ;
            }

    //Asignacion puntos dependiendo de los antecedentes de enfermedades cardio vasculares

            if (diabetes==1)
            {
                puntos=puntos+2 ;
            }
            if (fumar==1)
            {
                puntos=puntos+3 ;
            }
            if (enfermedadc==1)
            {
                puntos=puntos+4 ;
            }
            if (fibrilacion==1)
            {
                puntos=puntos+4 ;
            }
            if (ventricular==1)
            {
                puntos=puntos+5 ;
            }
            
    //Asignacion puntos dependiendo de la presion sistolica

            if (presion_sistolica>=106 && presion_sistolica<=115 )
            {
                puntos=puntos+1 ;
            }
            if (presion_sistolica>=116 && presion_sistolica<=125 )
            {
                puntos=puntos+2 ;
            }
            if (presion_sistolica>=126 && presion_sistolica<=135 )
            {
                puntos=puntos+3 ;
            }
            if (presion_sistolica>=136 && presion_sistolica<=145 )
            {
                puntos=puntos+4 ;
            }
            if (presion_sistolica>=146 && presion_sistolica<=155 )
            {
                puntos=puntos+5 ;
            }
            if (presion_sistolica>=156 && presion_sistolica<=165 )
            {
                puntos=puntos+6 ;
            }
            if (presion_sistolica>=166 && presion_sistolica<=175)
            {
                puntos=puntos+7 ;
            }
            if (presion_sistolica>=176 && presion_sistolica<=185 )
            {
                puntos=puntos+8 ;
            }
            if (presion_sistolica>=186 && presion_sistolica<=195 )
            {
                puntos=puntos+9 ;
            }
            if (presion_sistolica>=196 && presion_sistolica<=205 )
            {
                puntos=puntos+10 ;
            }
            
}

void calcular_riesgo()
{
	if (puntos<5)
	{
       riesgo=3;
    }
    
    if (puntos==5 || puntos ==6) 
	{
		riesgo=5;
	}
	if (puntos==7) 
	{
		riesgo=6;		
	}
	if (puntos==8) 
	{
		riesgo=7;
	}
	if (puntos==9) 
	{
		riesgo=8;
	}
	if (puntos==10) 
	{
		riesgo=10;
	}
	if (puntos== 11) 
	{
		riesgo=11;
	}
	if (puntos==12) 
	{
		riesgo=13;
	}
	if (puntos== 13) 
	{
		riesgo=15;
	}
	if (puntos==14) 
	{
		riesgo=17;
	}
	if (puntos==15) 
	{
		riesgo=20;
	}
	if (puntos==16) 
	{
		riesgo=22;
	}
	if (puntos==17) 
	{
		riesgo=26;
	}
	if (puntos==18) 
	{
		riesgo=29;
	}
	if (puntos==19) 
	{
		riesgo=33;
    }  
	if (puntos==20) 
	{
		riesgo=37;
	}
	if (puntos==21) 
	{
		riesgo=42;
	}
	if (puntos==22) 
	{
		riesgo=47;
	}
	if (puntos==23) 
	{
		riesgo=52;
	}
	if (puntos==24) 
	{
		riesgo=57;
	}
	if (puntos==25) 
	{
		riesgo=63;
	}
	if (puntos==26) 
	{
		riesgo=68;
	}
	if (puntos==27) 
	{
		riesgo=74;
	}
	if (puntos==28) 
	{
		riesgo=79;
	}
	if (puntos==29) 
	{
		riesgo=84;
	}
	if (puntos==30) 
	{
		riesgo=88;
	}
	if (puntos>30) 
	{
		riesgo=90;
	}	
}
