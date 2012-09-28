#include"eu0002.h"

#include"principal.h"

void eu0002 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	temp_1 = 1;
	temp_2 = 2;
	temp_3 = 3;
	output = 2;
	for( unsigned int i=0; i<4000000; i++ ){
		temp_1 = temp_3 + temp_2;
		temp_2 = temp_1 + temp_3;
		temp_3 = temp_1 + temp_2;
		if( temp_2>4000000 ){
			break;
		}
		output += temp_2;
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0002 :: printsolution(){
	cout << "Euler 0002\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}