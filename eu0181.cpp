#include"eu0181.h"

#include"principal.h"

void eu0181 :: solucion(){
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


void eu0181 :: printsolution(){
	cout << "Euler 0181\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
