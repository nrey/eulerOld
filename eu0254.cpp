#include"eu0254.h"

#include"principal.h"

void eu0254 :: solucion(){
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


void eu0254 :: printsolution(){
	cout << "Euler 0254\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
