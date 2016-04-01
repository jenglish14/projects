/* @author: Josh English
 * 
 * @created: Mar. 30 2016
 * @modified: Mar. 31 2016
 *
 * @summary: header of StockList Class holding common list of tracked stocks
*/

#ifndef STOCKLIST_H
#define STOCKLIST_H

#include<vector>
#include<string>
#include"Stock.h"

class StockList{
public:
	void init();
	bool checkYesNo(std::string response);
	void store500();
	void makeAndPushStock(std::string stockSymbol);
	void addStock();

private:
	std::vector<Stock> m_stockList;
};

#endif //STOCKLIST_H
