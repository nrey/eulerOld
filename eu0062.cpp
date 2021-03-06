#include"eu0062.h"

#include"principal.h"

void eu0062 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	map<long,int> cubos;
	map<long,unsigned long long> primercubo;
	
// 	++cubos[1234567891];

	tem_1d_1 = new unsigned long long[12];
	tem_1d_2 = new unsigned long long[10];
	for( unsigned long long j=4642; j<=9999; j++ ){
		temp_11 = pow(j,3); //464
		digits(&temp_11,12,tem_1d_1);
		for( unsigned long long i=0; i<10; i++ ){ // Borra contador
			tem_1d_2[i] = 0;
		}
		for( unsigned long long i=0; i<12; i++ ){ // Hace el mapping
			tem_1d_2[tem_1d_1[i]]++;
// 			cout<<endl<<tem_1d_1[i]<<" "<<tem_1d_2[tem_1d_1[i]];
		}
		temp_12 = 0;
		for( unsigned long long i=0; i<10; i++ ){ // Crea el key
			temp_12 = temp_12 + pow(10,i)*tem_1d_2[i];
	// 		cout<<endl<<"	"<<pow(10,i)*tem_1d_2[i];
		}
		
// 		if( temp_12 == 1111212111 ){
// 			cout<<endl<<j<<" "<<temp_11;
// 		}
		
		++cubos[temp_12];
		if(cubos[temp_12]==1){ // Si es el primer cubo
			primercubo[temp_12] = temp_11;
		}
		if(cubos[temp_12]==5){
			output = primercubo[temp_12];
// 			cout<<endl<<temp_12<<endl;
			break;
		}
	}
// 	cout<<endl<<temp_12;
	
	cout<<endl;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0062 :: printsolution(){
	cout << "Euler 0062\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
