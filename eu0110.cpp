#include"eu0110.h"

#include"principal.h"

void eu0110 :: solucion(){
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


void eu0110 :: printsolution(){
	cout << "Euler 0110\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
