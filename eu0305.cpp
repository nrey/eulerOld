#include"eu0305.h"

#include"principal.h"

void eu0305 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_1d_1 = new unsigned long long[30];
	tem_1d_2 = new unsigned long long[30];
	tem_2d_1 = new unsigned long long *[80]; // La matriz donde se va a guardar la informacion
	for( unsigned long long i=0; i<80; i++ ){
		tem_2d_1[i] = new unsigned long long [80];
	}
	
	// ---------------------------------------------------- //
	
	// El tamano inicial en todo es cero
	for( unsigned long long i=0; i<30; i++ ){
		tem_1d_2[i] = 0;
	}
	
	temp_2 = 80;	// Espacio disponible
	temp_3 = 0;	// Filas
	temp_4 = 0;	// Columnas
	
	
	
	for( tem_1d_1[16]=0; tem_1d_1[16]<10; tem_1d_1[16]++ ){
	for( tem_1d_1[15]=0; tem_1d_1[15]<10; tem_1d_1[15]++ ){
	for( tem_1d_1[14]=0; tem_1d_1[14]<10; tem_1d_1[14]++ ){
	for( tem_1d_1[13]=0; tem_1d_1[13]<10; tem_1d_1[13]++ ){
	for( tem_1d_1[12]=0; tem_1d_1[12]<10; tem_1d_1[12]++ ){
	for( tem_1d_1[11]=0; tem_1d_1[11]<10; tem_1d_1[11]++ ){
	for( tem_1d_1[10]=0; tem_1d_1[10]<10; tem_1d_1[10]++ ){
	for( tem_1d_1[9]=0; tem_1d_1[9]<10; tem_1d_1[9]++ ){
	for( tem_1d_1[8]=0; tem_1d_1[8]<10; tem_1d_1[8]++ ){
	for( tem_1d_1[7]=0; tem_1d_1[7]<10; tem_1d_1[7]++ ){
	for( tem_1d_1[6]=0; tem_1d_1[6]<10; tem_1d_1[6]++ ){
	for( tem_1d_1[5]=0; tem_1d_1[5]<10; tem_1d_1[5]++ ){
	for( tem_1d_1[4]=0; tem_1d_1[4]<10; tem_1d_1[4]++ ){
	for( tem_1d_1[3]=0; tem_1d_1[3]<10; tem_1d_1[3]++ ){
		for( tem_1d_1[2]=0; tem_1d_1[2]<10; tem_1d_1[2]++ ){
			for( tem_1d_1[1]=0; tem_1d_1[1]<10; tem_1d_1[1]++ ){
				for( tem_1d_1[0]=0; tem_1d_1[0]<10; tem_1d_1[0]++ ){
					// Conseguir el tamano actual
					temp_1 = 0;
					for( unsigned long long i=0; i<30; i++ ){
						temp_1 = temp_1 + tem_1d_2[i]; // Cantidad de numeros a meter
					}
					
					// LLenado de la matriz
					if( temp_2>temp_1 ){
			// 			cout<<endl<<"ACA";
						for( unsigned long long i=0; i<temp_1; i++ ){
							tem_2d_1[temp_3+i][temp_4] = tem_1d_1[temp_1-i-1];
			// 				cout<<endl<<temp_3+i<<" "<<temp_4;
						}
						temp_3 = temp_3 + temp_1;
						temp_2 = temp_2 - temp_1;
					}
					else if( temp_2==temp_1 ){
						for( unsigned long long i=0; i<temp_1; i++ ){
							tem_2d_1[temp_3+i][temp_4] = tem_1d_1[temp_1-i-1];
						}
						temp_2 = 80;
						temp_3 = 0;
						temp_4++;
						temp_4 = temp_4%80;
					}
					else if( temp_2<temp_1 ){
						temp_5 = temp_1 - temp_2;
						for( unsigned long long i=0; i<temp_2; i++ ){
							tem_2d_1[temp_3+i][temp_4] = tem_1d_1[temp_1-i-1];
// 							cout<<endl<<"LL: "<<temp_1-i-1;
						}
			// 			temp_2 = 80;
						temp_4++;
						temp_4 = temp_4%80;
						temp_3 = 0;
						for( unsigned long long i=0; i<temp_5; i++ ){
							tem_2d_1[temp_3+i][temp_4] = tem_1d_1[temp_1-(temp_2-1)-i-2];
// 	// 						cout<<endl<<"MM: "<<tem_1d_1[temp_1-(temp_2-1)-i-1];
// 							cout<<endl<<"MM: "<<temp_1-(temp_2-1)-i-2;
						}
						temp_3 = temp_5;
						temp_2 = 80 - temp_5;
					}
					
					cout<<endl<<temp_1;
					
					// Para probar los numeros
// 					if( temp_4 == 1 && temp_1>2 ){
// 						cout<<endl;
// 						for( unsigned long long i=0; i<80; i++ ){
// 							for( unsigned long long j=0; j<80; j++ ){
// 								cout<<" "<<tem_2d_1[i][j];
// 							}
// 							cout<<endl;
// 						}
// 						for( unsigned long long i=0; i<temp_1; i++ ){
// 							cout<<tem_1d_1[temp_1-i-1];
// 						}
// 						cin>>temp_13;
// 					}
					
					
					
					tem_1d_2[0] = 1;
				}
				tem_1d_2[1] = 1;
			}
			tem_1d_2[2] = 1;
		}
		tem_1d_2[3] = 1;
	}
	tem_1d_2[4] = 1;
	}
	tem_1d_2[5] = 1;
	}
	tem_1d_2[6] = 1;
	}
	tem_1d_2[7] = 1;
	}
	tem_1d_2[8] = 1;
	}
	tem_1d_2[9] = 1;
	}
	tem_1d_2[10] = 1;
	}
	tem_1d_2[11] = 1;
	}
	tem_1d_2[12] = 1;
	}
	tem_1d_2[13] = 1;
	}
	tem_1d_2[14] = 1;
	}
	tem_1d_2[15] = 1;
	}
	tem_1d_2[16] = 1;
	}
		
		
		
	cout<<endl<<endl;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0305 :: printsolution(){
	cout << "Euler 0305\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
