#include"eu0144.h"

#include"principal.h"

void eu0144 :: solucion(){
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


void eu0144 :: printsolution(){
	cout << "Euler 0144\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
