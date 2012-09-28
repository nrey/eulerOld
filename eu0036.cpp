#include"eu0036.h"

#include"principal.h"

void eu0036 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	for( unsigned long long i=1; i<1000000; i++ ){
		if( (ispalind(&i,2) == 1) && (ispalind(&i,10) == 1) ){
			output = output + i;
		}
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0036 :: printsolution(){
	cout << "Euler 0036\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
