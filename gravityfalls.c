#include <stdio.h>
#include<string.h> 
#include<stdlib.h> 
#include<conio.h>

int main(){

char letra;
char palabra[100];
char temp[100];
int tmp;
int i;
char eleccion[100];
char acabar[20];
char codigo[100];
int caesar;
char mayuscula[20];
int j;



do{
	
printf("Bienvenido al programa de encriptar y desencriptar de Gravity Falls hecho por byDavid360 y jonyluke");	
printf("\n");
printf("\n");
printf("Elige uno entre los siguientes codigos: ");
printf("\n");
printf("1-Codigo Caesar.");
printf("\n");
printf("2-Codigo Atbash.");
printf("\n");
printf("3-Codigo A1Z26.");
printf("\n");
printf("Cual quieres usar?: ");
gets(codigo);
for(j=0;j<=strlen(codigo);j++){
      if(codigo[j]>=65&&codigo[j]<=90)
       codigo[j]=codigo[j]+32;
	

if (strcmp(codigo, "caesar") == 0 || strcmp(codigo, "cesar") == 0 || strcmp(codigo, "CAESAR") == 0 || strcmp(codigo, "el caesar") == 0){
	
printf("Quieres usarlo en mayuscula o minuscula?: ");
gets(mayuscula);

if(strcmp(mayuscula, "en mayuscula") == 0 || strcmp(codigo, "mayuscula") == 0){
	printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);


if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa una palabra u oracion: ");
gets(palabra);
tmp = strlen(palabra); 
for(i=0; i<tmp; i++){ 

switch(palabra[i]){ 

//DESENCRIPTAR
case 'A': palabra[i] = 'X'; break; 
case 'B': palabra[i] = 'Y'; break; 
case 'C': palabra[i] = 'Z'; break; 
case 'D': palabra[i] = 'A'; break; 
case 'E': palabra[i] = 'B'; break; 
case 'F': palabra[i] = 'C'; break; 
case 'G': palabra[i] = 'D'; break; 
case 'H': palabra[i] = 'E'; break; 
case 'I': palabra[i] = 'F'; break; 
case 'J': palabra[i] = 'G'; break; 
case 'K': palabra[i] = 'H'; break; 
case 'L': palabra[i] = 'I'; break; 
case 'M': palabra[i] = 'J'; break; 
case 'N': palabra[i] = 'K'; break;  
case 'O': palabra[i] = 'L'; break; 
case 'P': palabra[i] = 'M'; break; 
case 'Q': palabra[i] = 'N'; break; 
case 'R': palabra[i] = 'O'; break; 
case 'S': palabra[i] = 'P'; break; 
case 'T': palabra[i] = 'Q'; break; 
case 'U': palabra[i] = 'R'; break; 
case 'V': palabra[i] = 'S'; break; 
case 'W': palabra[i] = 'T'; break; 
case 'X': palabra[i] = 'U'; break; 
case 'Y': palabra[i] = 'V'; break; 
case 'Z': palabra[i] = 'W'; break; 
}
}
}


else if(strcmp(eleccion, "encriptar") == 0){
	
printf("Ingresa algo:  ");
gets(palabra);

tmp = strlen(palabra); 

for(i=0; i<tmp; i++){ 

switch(palabra[i]){ 

//ENCRIPTAR
case 'X': palabra[i] = 'A'; break; 
case 'Y': palabra[i] = 'B'; break; 
case 'Z': palabra[i] = 'C'; break; 
case 'A': palabra[i] = 'D'; break; 
case 'B': palabra[i] = 'E'; break; 
case 'C': palabra[i] = 'F'; break; 
case 'D': palabra[i] = 'G'; break; 
case 'E': palabra[i] = 'H'; break; 
case 'F': palabra[i] = 'I'; break; 
case 'G': palabra[i] = 'J'; break; 
case 'H': palabra[i] = 'K'; break; 
case 'I': palabra[i] = 'L'; break; 
case 'J': palabra[i] = 'M'; break; 
case 'K': palabra[i] = 'N'; break; 
case 'L': palabra[i] = 'O'; break; 
case 'M': palabra[i] = 'P'; break; 
case 'N': palabra[i] = 'Q'; break; 
case 'O': palabra[i] = 'R'; break; 
case 'P': palabra[i] = 'S'; break; 
case 'Q': palabra[i] = 'T'; break; 
case 'R': palabra[i] = 'U'; break; 
case 'S': palabra[i] = 'V'; break; 
case 'T': palabra[i] = 'W'; break; 
case 'U': palabra[i] = 'X'; break; 
case 'V': palabra[i] = 'Y'; break;
case 'W': palabra[i] = 'Z'; break;  
}
}
  }  
	
	

	
	
}






else{


printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);

if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa algo: ");
gets(palabra);

tmp = strlen(palabra); 

for(i=0; i<tmp; i++){ 

switch(palabra[i]){ 

//DESENCRIPTAR
case 'a': palabra[i] = 'x'; break; 
case 'b': palabra[i] = 'y'; break; 
case 'c': palabra[i] = 'z'; break; 
case 'd': palabra[i] = 'a'; break; 
case 'e': palabra[i] = 'b'; break; 
case 'f': palabra[i] = 'c'; break; 
case 'g': palabra[i] = 'd'; break; 
case 'h': palabra[i] = 'e'; break; 
case 'i': palabra[i] = 'f'; break; 
case 'j': palabra[i] = 'g'; break; 
case 'k': palabra[i] = 'h'; break; 
case 'l': palabra[i] = 'i'; break; 
case 'm': palabra[i] = 'j'; break; 
case 'n': palabra[i] = 'k'; break;  
case 'o': palabra[i] = 'l'; break; 
case 'p': palabra[i] = 'm'; break; 
case 'q': palabra[i] = 'n'; break; 
case 'r': palabra[i] = 'o'; break; 
case 's': palabra[i] = 'p'; break; 
case 't': palabra[i] = 'q'; break; 
case 'u': palabra[i] = 'r'; break; 
case 'v': palabra[i] = 's'; break; 
case 'w': palabra[i] = 't'; break; 
case 'x': palabra[i] = 'u'; break; 
case 'y': palabra[i] = 'v'; break; 
case 'z': palabra[i] = 'w'; break; 
}
}
}

else if (strcmp(eleccion, "encriptar") == 0){



printf("Ingresa algo:  ");
gets(palabra);

tmp = strlen(palabra); 

for(i=0; i<tmp; i++){ 

switch(palabra[i]){ 

//ENCRIPTAR
case 'x': palabra[i] = 'a'; break; 
case 'y': palabra[i] = 'b'; break; 
case 'z': palabra[i] = 'c'; break; 
case 'a': palabra[i] = 'd'; break; 
case 'b': palabra[i] = 'e'; break; 
case 'c': palabra[i] = 'f'; break; 
case 'd': palabra[i] = 'g'; break; 
case 'e': palabra[i] = 'h'; break; 
case 'f': palabra[i] = 'i'; break; 
case 'g': palabra[i] = 'j'; break; 
case 'h': palabra[i] = 'k'; break; 
case 'i': palabra[i] = 'l'; break; 
case 'j': palabra[i] = 'm'; break; 
case 'k': palabra[i] = 'n'; break; 
case 'l': palabra[i] = 'o'; break; 
case 'm': palabra[i] = 'p'; break; 
case 'n': palabra[i] = 'q'; break; 
case 'o': palabra[i] = 'r'; break; 
case 'p': palabra[i] = 's'; break; 
case 'q': palabra[i] = 't'; break; 
case 'r': palabra[i] = 'u'; break; 
case 's': palabra[i] = 'v'; break; 
case 't': palabra[i] = 'w'; break; 
case 'u': palabra[i] = 'x'; break; 
case 'v': palabra[i] = 'y'; break;
case 'w': palabra[i] = 'z'; break;  
}
}


  }  
}

printf("Tu nueva palabra u oracion es: %s \n \n", palabra);
printf("\n");

}



else if(strcmp(codigo, "atbash") == 0 || strcmp(codigo, "codigo atbash") == 0){
	
printf("Quieres en mayuscula o minuscula?: ");
gets(mayuscula);


if(strcmp(mayuscula, "en mayuscula") == 0){
	
printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);

if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa una palabra u oracion: ");
gets(palabra);
tmp = strlen(palabra); 

for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case 'A': palabra[i] = 'Z'; break; 
case 'B': palabra[i] = 'Y'; break; 
case 'C': palabra[i] = 'X'; break; 
case 'D': palabra[i] = 'W'; break; 
case 'E': palabra[i] = 'V'; break; 
case 'F': palabra[i] = 'U'; break; 
case 'G': palabra[i] = 'T'; break; 
case 'H': palabra[i] = 'S'; break; 
case 'I': palabra[i] = 'R'; break; 
case 'J': palabra[i] = 'Q'; break; 
case 'K': palabra[i] = 'P'; break; 
case 'L': palabra[i] = 'O'; break; 
case 'M': palabra[i] = 'N'; break; 
case 'N': palabra[i] = 'M'; break;  
case 'O': palabra[i] = 'L'; break; 
case 'P': palabra[i] = 'K'; break; 
case 'Q': palabra[i] = 'J'; break; 
case 'R': palabra[i] = 'I'; break; 
case 'S': palabra[i] = 'H'; break; 
case 'T': palabra[i] = 'G'; break; 
case 'U': palabra[i] = 'F'; break; 
case 'V': palabra[i] = 'E'; break; 
case 'W': palabra[i] = 'D'; break; 
case 'X': palabra[i] = 'C'; break; 
case 'Y': palabra[i] = 'B'; break; 
case 'Z': palabra[i] = 'A'; break; 
	
}
}
}


else if(strcmp(eleccion, "encriptar") == 0){

printf("Ingresa algo:  ");
gets(palabra);

tmp = strlen(palabra);
for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 
case 'Z': palabra[i] = 'A'; break; 
case 'Y': palabra[i] = 'B'; break; 
case 'X': palabra[i] = 'C'; break; 
case 'W': palabra[i] = 'D'; break; 
case 'V': palabra[i] = 'E'; break; 
case 'U': palabra[i] = 'F'; break; 
case 'T': palabra[i] = 'G'; break; 
case 'S': palabra[i] = 'H'; break; 
case 'R': palabra[i] = 'I'; break; 
case 'Q': palabra[i] = 'J'; break; 
case 'P': palabra[i] = 'K'; break; 
case 'O': palabra[i] = 'L'; break; 
case 'N': palabra[i] = 'M'; break; 
case 'M': palabra[i] = 'N'; break;  
case 'L': palabra[i] = 'O'; break; 
case 'K': palabra[i] = 'P'; break; 
case 'J': palabra[i] = 'Q'; break; 
case 'I': palabra[i] = 'R'; break; 
case 'H': palabra[i] = 'S'; break; 
case 'G': palabra[i] = 'T'; break; 
case 'F': palabra[i] = 'U'; break; 
case 'E': palabra[i] = 'V'; break; 
case 'D': palabra[i] = 'W'; break; 
case 'C': palabra[i] = 'X'; break; 
case 'B': palabra[i] = 'Y'; break; 
case 'A': palabra[i] = 'Z'; break; 
	
}//switch atbash encriptar mayuscula
}//for atbash encriptar mayuscula
}//atbash encriptar mayuscula
}//atbas mayuscula(general)

else{

printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);

if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa algo: ");
gets(palabra);

tmp = strlen(palabra); 
for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case 'a': palabra[i] = 'z'; break; 
case 'b': palabra[i] = 'y'; break; 
case 'c': palabra[i] = 'x'; break; 
case 'd': palabra[i] = 'w'; break; 
case 'e': palabra[i] = 'v'; break; 
case 'f': palabra[i] = 'u'; break; 
case 'g': palabra[i] = 't'; break; 
case 'h': palabra[i] = 's'; break; 
case 'i': palabra[i] = 'r'; break; 
case 'j': palabra[i] = 'q'; break; 
case 'k': palabra[i] = 'p'; break; 
case 'l': palabra[i] = 'o'; break; 
case 'm': palabra[i] = 'n'; break; 
case 'n': palabra[i] = 'm'; break;  
case 'o': palabra[i] = 'l'; break; 
case 'p': palabra[i] = 'k'; break; 
case 'q': palabra[i] = 'j'; break; 
case 'r': palabra[i] = 'i'; break; 
case 's': palabra[i] = 'h'; break; 
case 't': palabra[i] = 'g'; break; 
case 'u': palabra[i] = 'f'; break; 
case 'v': palabra[i] = 'e'; break; 
case 'w': palabra[i] = 'd'; break; 
case 'x': palabra[i] = 'c'; break; 
case 'y': palabra[i] = 'b'; break; 
case 'z': palabra[i] = 'a'; break; 	

}//switch atbash desencriptar minuscula
}//for atbash desencriptar minuscula
}//atbash desencriptar minuscula


else if(strcmp(eleccion, "encriptar") == 0){

printf("Ingresa una palabra u oracion: ");
gets(palabra);

tmp = strlen(palabra);
for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case 'z': palabra[i] = 'a'; break; 
case 'y': palabra[i] = 'b'; break; 
case 'x': palabra[i] = 'c'; break; 
case 'w': palabra[i] = 'd'; break; 
case 'v': palabra[i] = 'e'; break; 
case 'u': palabra[i] = 'f'; break; 
case 't': palabra[i] = 'g'; break; 
case 's': palabra[i] = 'h'; break; 
case 'r': palabra[i] = 'i'; break; 
case 'q': palabra[i] = 'j'; break; 
case 'p': palabra[i] = 'k'; break; 
case 'o': palabra[i] = 'l'; break; 
case 'n': palabra[i] = 'm'; break; 
case 'm': palabra[i] = 'n'; break;  
case 'l': palabra[i] = 'o'; break; 
case 'k': palabra[i] = 'p'; break; 
case 'j': palabra[i] = 'q'; break; 
case 'i': palabra[i] = 'r'; break; 
case 'h': palabra[i] = 's'; break; 
case 'g': palabra[i] = 't'; break; 
case 'f': palabra[i] = 'u'; break; 
case 'e': palabra[i] = 'v'; break; 
case 'd': palabra[i] = 'w'; break; 
case 'c': palabra[i] = 'x'; break; 
case 'b': palabra[i] = 'y'; break; 
case 'a': palabra[i] = 'z'; break; 

}//switch atbash encriptar minuscula
}//for atbash encriptar minuscula
}//atbash encriptar minuscula

	
}//else atbash

printf("Tu nueva palabra u oracion es: %s \n \n", palabra);
printf("\n");

}//atbash general

else if(strcmp(codigo, "a1z26") == 0 || strcmp(codigo, "codigo a1z26") == 0){
	
printf("Quieres en mayuscula o minuscula?: ");
gets(mayuscula);

if(strcmp(mayuscula, "en mayuscula") == 0 || strcmp(mayuscula, "mayuscula") == 0 || strcmp(mayuscula, "MAYUSCULA") == 0 || strcmp(mayuscula, "EN MAYUSCULA") == 0){
		
printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);
	
if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa una palabra u oracion: ");
gets(palabra);
tmp = strlen(palabra);

for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case '1': palabra[i] = 'A'; break; 
case '2': palabra[i] = 'B'; break; 
case '3': palabra[i] = 'C'; break; 
case '4': palabra[i] = 'D'; break; 
case '5': palabra[i] = 'E'; break; 
case '6': palabra[i] = 'F'; break; 
case '7': palabra[i] = 'G'; break; 
case '8': palabra[i] = 'H'; break; 
case '9': palabra[i] = 'I'; break; 
case '10': palabra[i] = 'J'; break; 
case '11': palabra[i] = 'K'; break; 
case '12': palabra[i] = 'L'; break; 
case '13': palabra[i] = 'M'; break; 
case '14': palabra[i] = 'N'; break;  
case '15': palabra[i] = 'O'; break; 
case '16': palabra[i] = 'P'; break; 
case '17': palabra[i] = 'Q'; break; 
case '18': palabra[i] = 'R'; break; 
case '19': palabra[i] = 'S'; break; 
case '20': palabra[i] = 'T'; break; 
case '21': palabra[i] = 'U'; break; 
case '22': palabra[i] = 'V'; break; 
case '23': palabra[i] = 'W'; break; 
case '24': palabra[i] = 'X'; break; 
case '25': palabra[i] = 'Y'; break; 
case '26': palabra[i] = 'Z'; break; 
 
	
}
}
}

else if(strcmp(eleccion, "encriptar") == 0){

printf("Ingresa una palabra u oracion:  ");
gets(palabra);

tmp = strlen(palabra);

for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case 'A': palabra[i] = '1'; break; 
case 'B': palabra[i] = '2'; break; 
case 'C': palabra[i] = '3'; break; 
case 'D': palabra[i] = '4'; break; 
case 'E': palabra[i] = '5'; break; 
case 'F': palabra[i] = '6'; break; 
case 'G': palabra[i] = '7'; break; 
case 'H': palabra[i] = '8'; break; 
case 'I': palabra[i] = '9'; break; 
case 'J': palabra[i] = '10'; break; 
case 'K': palabra[i] = '11'; break; 
case 'L': palabra[i] = '12'; break; 
case 'M': palabra[i] = '13'; break; 
case 'N': palabra[i] = '14'; break;  
case 'O': palabra[i] = '15'; break; 
case 'P': palabra[i] = '16'; break; 
case 'Q': palabra[i] = '17'; break; 
case 'R': palabra[i] = '18'; break; 
case 'S': palabra[i] = '19'; break; 
case 'T': palabra[i] = '20'; break; 
case 'U': palabra[i] = '21'; break; 
case 'V': palabra[i] = '22'; break; 
case 'W': palabra[i] = '23'; break; 
case 'X': palabra[i] = '24'; break; 
case 'Y': palabra[i] = '25'; break; 
case 'Z': palabra[i] = '26'; break; 
	

}
}
}

}//a1z27 mayuscula general

else{
	
printf("\n");	
printf("Elige opcion:  ");
printf("\n");
printf("1)Encriptar.");
printf("\n");
printf("2)Desencriptar.");
printf("\n");
printf("==============>");
gets(eleccion);

if (strcmp(eleccion, "desencriptar") == 0){

printf("Ingresa una palabra u oracion: ");
gets(palabra);

tmp = strlen(palabra); 
for(i=0; i<tmp; i++){ 
switch(palabra[i]){
 
case '1': palabra[i] = 'a'; break; 
case '2': palabra[i] = 'b'; break; 
case '3': palabra[i] = 'c'; break; 
case '4': palabra[i] = 'd'; break; 
case '5': palabra[i] = 'e'; break; 
case '6': palabra[i] = 'f'; break; 
case '7': palabra[i] = 'g'; break; 
case '8': palabra[i] = 'h'; break; 
case '9': palabra[i] = 'i'; break; 
case '10': palabra[i] = 'j'; break; 
case '11': palabra[i] = 'k'; break; 
case '12': palabra[i] = 'l'; break; 
case '13': palabra[i] = 'm'; break; 
case '14': palabra[i] = 'n'; break;  
case '15': palabra[i] = 'o'; break; 
case '16': palabra[i] = 'p'; break; 
case '17': palabra[i] = 'q'; break; 
case '18': palabra[i] = 'r'; break; 
case '19': palabra[i] = 's'; break; 
case '20': palabra[i] = 't'; break; 
case '21': palabra[i] = 'u'; break; 
case '22': palabra[i] = 'v'; break; 
case '23': palabra[i] = 'w'; break; 
case '24': palabra[i] = 'x'; break; 
case '25': palabra[i] = 'y'; break; 
case '26': palabra[i] = 'z'; break; 	
	
}
}
}

else if(strcmp(eleccion, "encriptar") == 0){

printf("Ingresa una palabra u oracion:  ");
gets(palabra);

tmp = strlen(palabra);

for(i=0; i<tmp; i++){ 
switch(palabra[i]){ 

case 'a': palabra[i] = '1'; break; 
case 'b': palabra[i] = '2'; break; 
case 'c': palabra[i] = '3'; break; 
case 'd': palabra[i] = '4'; break; 
case 'e': palabra[i] = '5'; break; 
case 'f': palabra[i] = '6'; break; 
case 'g': palabra[i] = '7'; break; 
case 'h': palabra[i] = '8'; break; 
case 'i': palabra[i] = '9'; break; 
case 'j': palabra[i] = '10'; break; 
case 'k': palabra[i] = '11'; break; 
case 'l': palabra[i] = '12'; break; 
case 'm': palabra[i] = '13'; break; 
case 'n': palabra[i] = '14'; break;  
case 'o': palabra[i] = '15'; break; 
case 'p': palabra[i] = '16'; break; 
case 'q': palabra[i] = '17'; break; 
case 'r': palabra[i] = '18'; break; 
case 's': palabra[i] = '19'; break; 
case 't': palabra[i] = '20'; break; 
case 'u': palabra[i] = '21'; break; 
case 'v': palabra[i] = '22'; break; 
case 'w': palabra[i] = '23'; break; 
case 'x': palabra[i] = '24'; break; 
case 'y': palabra[i] = '25'; break; 
case 'z': palabra[i] = '26'; break; 

}
}
}
}
printf("Tu nueva palabra u oracion es: %s \n \n", palabra);
printf("\n");

}
}

}while(strcmp(palabra, "") != 0); 

}//int main



