/* @author: Josh English
 * 
 * @created: Mar. 30 2016
 * @modified: Mar. 30 2016
 *
 * @summary: header of HTMLInterpreter Class transforming fidelity HTML to
 *           usable c++ data
*/

#ifndef HTMLINTERPRETER_H
#define HTMLINTERPRETER_H

#include <string>
#include <vector>

class HTMLInterpreter{
 public:
  void cleanFile(std::string filePath);
  void cleanData(char* data, int buffSize, std::vector<char>& writeData);
};

#endif //HTMLINTERPRETER_H
