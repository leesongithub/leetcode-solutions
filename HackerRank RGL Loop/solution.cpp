// Given a vector of strings, where each string consists of the letters R, L, G
// Determine if each string (turn right, turn left, go) if looped forms a loop
// ex: 
// R = YES because turn in place right infinitely
// RLG = NO because turn right then left then go, basically go forward infinitely
// RGLG = NO
// RG = YES


vector<string> myfunction(vector<string> commands) {
	vector<string> answers;
	
	
	string currentCommand;
	int R, L, G = 0;
	
	for (int i=0; i<commands.size(); i++) { // for each string
		currentCommand = commands[i];
		
		for (int letter=0; letter<currentCommand.length(); letter++) { // get the count of every letter
			if (letter[i] == 'R') {
				R++;
			} else if (letter[i] == 'L') {
				L++;
			} else if (letter[i] == 'G') {
				G++;
			}
		} // end of for each letter loop
		
		
		/*
		 As far as I can tell, there are four options:
		 1. Equal number of Rs and Ls, no Gs
			RLRL = 0, RLLR = 0, LLRR = 0
			unsure
		 
		 2. Equal number of Rs and Ls, some Gs
			RLRLG = G, RLLRG = G, LLRR = G
			RLLGR = LGR = G
			NO loop
			
		 3. Unequal number of Rs and Ls, no Gs
			RRL = R, LLR = L, RLR = R, LRL = L
			YES loop
		 
		 4. Unequal number of Rs and Ls, some Gs
			RRLG = RG, LLRG = LG, RLRG = RG, LRLG = LG
			YES loop
		 
		 Every R and L cancel each other out
		 Edge cases:
		 */
		 
		 if ((R==L) && (G==0)) {
			 answers.push_back("NO"); // unsure about this one
		 } else if ((R==L) && (G>0)) {
			 answers.push_back("NO");
		 } else if ((R!=L) && (G==0)) {
			 answers.push_back("YES");
		 } else if ((R!=L) && (G>0)) {
			 answers.push_back("YES");
		 } else { // might not be necessary
			answers.push_back("NO");
		 }
		 
		 
		// reset the count of letters for the next word
		R = 0;
		L = 0; 
		G = 0;	
	} // end of for each string loop
	
	
	return answers;
} // end of function
