#include"eu0083.h"

#include"principal.h"

void eu0083 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_2d_1 = new unsigned long long *[80]; // La matriz donde se va a guardar la informacion
	for( unsigned long long i=0; i<80; i++ ){
		tem_2d_1[i] = new unsigned long long [80];
	}
	char uu[15];
	char* uu2 = ",";
	
	// ---------------------------------------------------- //
	
	
	
	// ME QUEDO MAL PORQUE LO PENSE SOLO DE FORMA QUE SE FUERA HACIA ADELANTE, NO ESTOY TENIENDO EN CUENTA CUANDO SE VAYA DE PARA ATRAS
	
	
	
	myfile_read_1.open("eu0083_data.txt");
	myfile_read_1.setf( ios::fixed );
	
	for( unsigned long long i=0; i<5; i++ ){
// 		cout<<endl<<endl;
		for( unsigned long long j=0; j<4; j++ ){
			myfile_read_1.get(uu, 15, uu2[0]); // OBTIENE O 15 CARACTERES O HASTA QUE ENCUENTRE EL DELIMITADOR UU2 ","
			tem_2d_1[i][j] = strtold(uu,0);
			myfile_read_1.ignore(1,' ');
// 			cout<<tem_2d_1[i][j]<<"	";
		}
		myfile_read_1.get(uu, 15); // EL ULTIMO NO LE COLOCAMOS EL DELIMITADOR "," PUES SINO ME QUEDARIA SALTANDO UN NUMERO
		tem_2d_1[i][4] = strtold(uu,0);
// 		cout<<tem_2d_1[i][79]<<"	";
	}
	
	
	// Solucion de angel
	temp_1 = tem_2d_1[0][0];
	tem_2d_1[0][0] = 0;
	temp_2 = tem_2d_1[4][4];
	tem_2d_1[4][4] = 0;
	
	
	
	
	
	
	
	
	
	
	
	tem_2d_1[1][0] = tem_2d_1[1][0] + tem_2d_1[0][0];
	tem_2d_1[0][1] = tem_2d_1[0][1] + tem_2d_1[0][0];
	
	if( tem_2d_1[0][1]<tem_2d_1[1][0] ){
		tem_2d_1[1][1] = tem_2d_1[1][1] + tem_2d_1[0][1];
	}
	else{
		tem_2d_1[1][1] = tem_2d_1[1][1] + tem_2d_1[1][0];
	}
	
	for( unsigned long long i=2; i<=4; i++ ){
		cout<<endl;
		for( unsigned long long j=0; j<=i; j++ ){
			cout<<endl;
			for( unsigned long long k=0; k<=i; k++ ){
				cout<<tem_2d_1[j][k]<<"	";
			}
		}
		// A
		temp_1 = 0;
		temp_2 = 99999999;
		for( unsigned long long j=0; j<=i-1; j++ ){
			if( tem_2d_1[i-1][j]>temp_2 ){
				continue;
			}
			else{
				temp_2 = tem_2d_1[i-1][j];
				temp_1 = j;
			}
		}
		tem_2d_1[i][temp_1] = tem_2d_1[i][temp_1]+tem_2d_1[i-1][temp_1];
		for( unsigned long long j=0; j<temp_1; j++ ){
			if( tem_2d_1[i-1][temp_1-j-1]<tem_2d_1[i][temp_1-j] ){
				tem_2d_1[i][temp_1-j-1] = tem_2d_1[i][temp_1-j-1]+tem_2d_1[i-1][temp_1-j-1];
			}
			else{
				tem_2d_1[i][temp_1-j-1] = tem_2d_1[i][temp_1-j-1]+tem_2d_1[i][temp_1-j];
			}
		}
		for( unsigned long long j=temp_1+1; j<=i-1; j++ ){
			if( tem_2d_1[i-1][j]<tem_2d_1[i][j-1] ){
				tem_2d_1[i][j] = tem_2d_1[i][j]+tem_2d_1[i-1][j];
			}
			else{
				tem_2d_1[i][j] = tem_2d_1[i][j]+tem_2d_1[i][j-1];
			}
		}
// 		cout<<endl;
// 		for( unsigned long long j=0; j<=i; j++ ){
// 			cout<<tem_2d_1[i][j]<<" ";
// 		}
		// B
		temp_1 = 0;
		temp_2 = 99999999;
		for( unsigned long long j=0; j<=i-1; j++ ){
			if( tem_2d_1[j][i-1]>temp_2 ){
				continue;
			}
			else{
				temp_2 = tem_2d_1[j][i-1];
				temp_1 = j;
			}
		}
		tem_2d_1[temp_1][i] = tem_2d_1[temp_1][i]+tem_2d_1[temp_1][i-1];
		for( unsigned long long j=0; j<temp_1; j++ ){
			if( tem_2d_1[temp_1-j-1][i-1]<tem_2d_1[temp_1-j][i] ){
				tem_2d_1[temp_1-j-1][i] = tem_2d_1[temp_1-j-1][i]+tem_2d_1[temp_1-j-1][i-1];
			}
			else{
				tem_2d_1[temp_1-j-1][i] = tem_2d_1[temp_1-j-1][i]+tem_2d_1[temp_1-j][i];
			}
		}
		for( unsigned long long j=temp_1+1; j<=i-1; j++ ){
			if( tem_2d_1[j][i-1]<tem_2d_1[j-1][i] ){
				tem_2d_1[j][i] = tem_2d_1[j][i]+tem_2d_1[j][i-1];
			}
			else{
				tem_2d_1[j][i] = tem_2d_1[j][i]+tem_2d_1[j-1][i];
			}
		}
		
		// Min en la esquine
		if( tem_2d_1[i][i-1]>tem_2d_1[i][i-1] ){
			tem_2d_1[i][i] = tem_2d_1[i][i] + tem_2d_1[i][i-1];
		}
		else{
			tem_2d_1[i][i] = tem_2d_1[i][i] + tem_2d_1[i-1][i];
		}
		
		cout<<endl;
		for( unsigned long long j=0; j<=i; j++ ){
			cout<<endl;
			for( unsigned long long k=0; k<=i; k++ ){
				cout<<tem_2d_1[j][k]<<"	";
			}
		}
		
	}
// 	output = tem_2d_1[79][79];
			
			
			
			
			
			
	cout<<endl<<endl;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0083 :: printsolution(){
	cout << "Euler 0083\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
