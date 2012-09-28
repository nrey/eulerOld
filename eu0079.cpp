#include"eu0079.h"

#include"principal.h"

void eu0079 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	output = 73162890; // Esto lo hice a mano, algunas claves, el 7 es el primero, y el 0 el ultimo. 
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0079 :: printsolution(){
	cout << "Euler 0079\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
