#include"eu0274.h"

#include"principal.h"

void eu0274 :: solucion(){
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


void eu0274 :: printsolution(){
	cout << "Euler 0274\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
