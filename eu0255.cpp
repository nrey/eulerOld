#include"eu0255.h"

#include"principal.h"

void eu0255 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0255 :: printsolution(){
	cout << "Euler 0255\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
