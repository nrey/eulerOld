#include"eu0174.h"

#include"principal.h"

void eu0174 :: solucion(){
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


void eu0174 :: printsolution(){
	cout << "Euler 0174\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
