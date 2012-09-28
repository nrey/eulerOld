#include"eu0161.h"

#include"principal.h"

void eu0161 :: solucion(){
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


void eu0161 :: printsolution(){
	cout << "Euler 0161\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
