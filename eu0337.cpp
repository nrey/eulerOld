#include"eu0337.h"

#include"principal.h"

void eu0337 :: solucion(){
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


void eu0337 :: printsolution(){
	cout << "Euler 0337\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
