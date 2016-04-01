/* @author: Josh English
 * 
 * @created: Mar. 30 2016
 * @modified: Mar. 30 2016
 *
 * @summary: implementation of HTMLInterpreter Class transforming fidelity HTML
 *           to usable c++ data
*/

#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "HTMLInterpreter.h"

using std::cout;
using std::endl;
using std::invalid_argument;

void HTMLInterpreter::cleanFile(string filePath)
{
  FILE* pFile;
  const char* file = filePath.c_str();
  pFile = fopen(file,"r");
  if (pFile != NULL)
    {
      int buffSize = 600;
      char data[buffSize];
      vector<char> writeData;
      while(fgets(data, buffSize, pFile) != NULL)
	{
	  fgets(data, buffSize, pFile);
	  cleanData(data, buffSize, writeData);
       	}
      cout << writeData.size() << endl;
      for (int i = 0; i < writeData.size(); i++)
	{
	  cout << writeData[i];
	}
      fclose(pFile);
    }
  else
    {
      string error = "\nin HTMLInterpreter::cleanFile(string dataPath)\nCould not open file at: " + filePath + "\n";
      throw invalid_argument(error);
    }
}

void HTMLInterpreter::cleanData(char* data, int buffSize, vector<char>& writeData)
{
  string null;
  const char* nullChar = null.c_str();
  string space = " ";
  const char* spaceChar = space.c_str();
  string htmlOpen = "<";
  const char* htmlOpenChar = htmlOpen.c_str();
  string htmlClose = ">";
  const char* htmlCloseChar = htmlClose.c_str();
  int dI = 0;
  //make sure data buffer is not null values
  while (data[dI] != nullChar[0])
    {
      //if  data buffer index is open html bracket
      if (data[dI] == htmlOpenChar[0])
	{
	  //increment until data buffer index is close html bracket
	  while (data[dI] != htmlCloseChar[0])
	    {
	      dI++;
	    }
	}
      //increment if space is followed by space
      else if (data[dI] == spaceChar[0] && data[dI+1] == spaceChar[0])
	{
	  dI++;
	}
      //write data if valid (data index does not point to above invalid cases)
      else
	{
	  writeData.push_back(data[dI]);
	}
      dI++;
    }
}
