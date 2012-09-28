#include"eu0120.h"

#include"principal.h"

void eu0120 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_1d_1 = new unsigned long long[1001];
	
	// ---------------------------------------------------- //
	
	temp_3 = 0;
	for( unsigned long long i=3; i<=1000; i++ ){
		temp_1 = 0;
		for( unsigned long long j=1; j<i; j=j+1 ){
			temp_2 = (2*i*j)%(i*i);
			if( temp_2 > temp_1 ){
				temp_1 = temp_2;
			}
		}
		temp_3 = temp_3 + temp_1;
	}
	output = temp_3;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0120 :: printsolution(){
	cout << "Euler 0120\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
