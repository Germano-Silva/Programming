
-- Run your code in the folder projects/string_member_functions

-- Run using the terminal within VS code (below the code)

-- Open up an empty string_member_functions.cpp file and paste in this code




-----------------------------------------------------------------------------

# -- string_member_functions_v01.cpp

-- Compile and run the code

-- Member functions on strings

int main()
{
  string proverb_1 = "A ship in the harbor is safe, but that is not what a ship is for.";
  string proverb_2 = "Never test the depth of water with both feet.";

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "length of proverb_1: " << proverb_1.length() << endl;

  cout << "proverb_2: " << proverb_2 << endl;
  cout << "length proverb_2: " << proverb_2.length() << endl;

  return 0;
}



-----------------------------------------------------------------------------

# -- string_member_functions_v02.cpp

-- Compile and run the code
-- Concatenating strings using append()


int main()
{
  string proverb_1 = "No gain without pain.";
  string proverb_2 = "No news is good news.";

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "length of proverb_1: " << proverb_1.length() << endl;

  proverb_1.append(proverb_2);

  cout << "proverb_1 (after update): " << proverb_1 << endl;
  cout << "length of proverb_1 (after update): " << proverb_1.length() << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- string_member_functions_v03.cpp

-- Compile and run the code
-- Chaining appends

int main()
{
  string proverb;

  cout << "empty string proverb: " << proverb << endl;
  cout << "length of proverb: " << proverb.length() << endl;

  proverb.append("Once ").append("bitten ").append("twice ").append("shy");

  cout << "proverb (after update): " << proverb << endl;
  cout << "length of proverb (after update): " << proverb.length() << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- string_member_functions_v04.cpp

-- Compile and run the code
-- Extracting substrings

int main()
{
  string proverb = "Persuasion is better than force.";
  string first_word {proverb.substr(0, 10)};

  cout << "First word: " << first_word << endl;

  cout << "Second word: " << proverb.substr(12, 2) << endl;

  cout << "Second word onwards: " << proverb.substr(11, 100) << endl;

  cout << "Third word onwards: " << proverb.substr(14) << endl;

  return 0;
}



-----------------------------------------------------------------------------

# -- string_member_functions_v05.cpp

-- Compile and run the code
-- Comparing strings

int main()
{
  string name_alice = "Alice";
  string name_peter = "Peter";

  cout << "Comparing Alice to Peter: " << name_alice.compare(name_peter) << endl;
  cout << "Comparing Peter to Alice: " << name_peter.compare(name_alice) << endl;
  cout << "Comparing Peter to Peter: " << name_peter.compare(name_peter) << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- string_member_functions_v06.cpp

-- Compile and run the code
-- Comparing a substring in a string


int main()
{
  string name = "Alice Johnson";
  string name_john = "John";

  int result = name.compare(6, name_john.length(), name_john);

  cout << "Name contains \"John\" starting at index 6: " 
       << result << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- string_member_functions_v07.cpp

-- Compile and run the code
-- Finding substrings in strings


int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "Finding \"harder\": " << proverb.find("harder") << endl;
  cout << "Finding \"work\": " << proverb.find("work") << endl;
  cout << "Finding 't': " << proverb.find('t') << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- string_member_functions_v08.cpp

-- Compile and run the code
-- Finding substrings in strings

//This is a constant that is defined in the string header. It represents an illegal character position in a string and is used to signal a failure in a search.


int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "Finding \"unlucky\": " << proverb.find("unlucky") << endl;
  cout << "Constant for illegal character position: " << std::string::npos << endl;

  return 0;
}



































































































































































































