#include"eu0206.h"

#include"principal.h"

void eu0206 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_1d_1 = new unsigned long long[17]; // Numero q se va a elevar al cuadrado
	tem_1d_2 = new unsigned long long[17]; // Resultado de elevar el numero al cuadrado
	tem_1d_3 = new unsigned long long[2]; // por analisis el penultimo digito es o 3 o 7
	
	// ---------------------------------------------------- //
	
	tem_1d_3[0] = 3; // El valor 1 de b
	tem_1d_3[1] = 7; // El valor 2 de b
	
	// Volvemos cero
	for( unsigned long long i=0; i<17; i++ ){
		tem_1d_1[i] = 0;
	}
	tem_1d_1[8] = 1; // Analize y el numero 1000000003, es el primero en tener 19 digitos
	
	temp_1 = 1;
	while( temp_1 ){
			for( unsigned long long i=0; i<2; i++ ){
				tem_1d_1[0] = tem_1d_3[i]; // B
				for( long long j=0; j<17; j++ ){ // Eleva al cuadrado
					tem_1d_2[j] = 0;
					for( long long k=0; k<=j; k++ ){ // Formula para elevar al cuadrado
						tem_1d_2[j] = tem_1d_2[j] + tem_1d_1[k]*tem_1d_1[j-k];
					}
				}
				for( long long j=0; j<16; j++ ){ // Lo q se lleva
					tem_1d_2[j+1] = tem_1d_2[j+1]+tem_1d_2[j]/10;
					tem_1d_2[j] = tem_1d_2[j]%10;
				}
				// Analiza el patron q me piden
				if( tem_1d_2[2]!=8 ){
					continue;
				}
				if( tem_1d_2[4]!=7 ){
					continue;
				}
				if( tem_1d_2[6]!=6 ){
					continue;
				}
				if( tem_1d_2[8]!=5 ){
					continue;
				}
				if( tem_1d_2[10]!=4 ){
					continue;
				}
				if( tem_1d_2[12]!=3 ){
					continue;
				}
				if( tem_1d_2[14]!=2 ){
					continue;
				}
				if( tem_1d_2[16]!=1 ){
					continue;
				}
				for( long long jj=10; jj>=0; jj-- ){
					output = output + tem_1d_1[jj]*pow(10,jj);
				}
				output = output*10; // Ingreso el ultimo valor q yo se q es cero
				temp_1 = 0;
			}
			tem_1d_1[1]++; // Aumenta en uno el valor a elevar al cuadrado (en realidad se aumenta en 100, pues el penultimo digito es o 3 o 7, y el ultimo es cero)
			temp_2 = 1;
			while( tem_1d_1[temp_2]>9 ){
				tem_1d_1[temp_2+1] = tem_1d_1[temp_2+1] + tem_1d_1[temp_2]/10;
				tem_1d_1[temp_2] = tem_1d_1[temp_2]%10;
				temp_2++;
			}
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0206 :: printsolution(){
	cout << "Euler 0206\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
