// Given 3 vectors of an item's name, price, and weight
// Determine how many duplicate items there are (name, price, and weight all the same)
// Return the number of duplicates

int myfunction(vector<string> name, vector<int> price, vector<int> weight) {
	
	/*
	Proposed solution:
	Create a hash map of the name, price, and weight
	The number of collisions is the number of duplicates
	
	Problems:
	- issues with creating a C++ unordered_map where there's 3 items and one is a string
	  (2 items works: <string, int> and <int, int>)
	- C++ unordered_map might just not insert a value if it detects there's a duplicate
	  so need to do the collision checking before inserting
	  something like:
	  
	  for each element in the vectors:
		find element (i.e. get an iterator)
		if the iterator == the end of the map, that means it wasn't found, so insert it
		else if you did find an iterator, increment collisions by 1
	 */
	 
	 int answers = 0;
	 unordered_map<string, int, int> hashmap;
	 
	 for (int i=0; i<price.size(); i++) {
		 unordered_map<string, int, int>::const_iterator got = hashmap.find(price[i]);
		 if (got == hashmap.end()) {
			 hashmap.insert( { name[i], price[i], weight[i] } );
		 } else {
			 answers++;
		 }
	 }
	 
	return answer;
}
