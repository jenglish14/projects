/* @author: Josh English
 * 
 * @created: Mar. 29 2016
 * @modified: Mar. 30 2016
 *
 * @summary: header of Stock Class holding common stock stats
*/

#ifndef STOCK_H
#define STOCK_H

#include<vector>
#include<string>

class Stock
{
public:

	// ----- default + specialized constructors, destructor ----- //
	Stock();
	Stock(std::string symbol);
	~Stock();

	// ----- set and get functions for member variables ----- //
	void setSymbol(const std::string &newSymbol);
	std::string getSymbol();
	void setCurrentPrice(float newPrice, bool updateHistoryFlag = true);
	float getCurrentPrice();
	void setDayPriceChange(float priceChange);
	float getDayPriceChange();
	void setDayPercentChange(float percentChange);
	float getDayPercentChange();
	void set52WeekHigh(float new52WeekHigh);
	float get52WeekHigh();
	void set52WeekLow(float new52WeekLow);
	float get52WeekLow();
	void setMarketCap(float newMarketCap);
	float getMarketCap();
	void setSharesOutstanding(double newSharesOutstanding);
	double getSharesOutstanding();
	void setSharesShort(double newSharesShort);
	double getSharesShort();
	void setTrailingPE(float newTrailingPE);
	float getTrailingPE();
	void set5YrProjectedPEG(float new5YrProjectedPEG);
	float get5YrProjectedPEG();
	void printPriceHistory();

	// ----- Helper Functions ----- //
	void printStockData();
	void updatePriceHistory(float newPrice);

	// ----- Algorithm Functions ----- //
	float computeSimpleMovingAverage(int numberOfDays);
	float computeExponentialMovingAverage(int numberOfDays);
	
private:
	std::string m_symbol;
	float m_currentPrice;
	float m_dayPriceChange;
	float m_dayPercentChange;
	float m_52WeekHigh;
	float m_52WeekLow;
	float m_marketCap;
	double m_sharesOutstanding;
	double m_sharesShort;
	float m_trailingPE;
	float m_5YrProjectedPEG;
	std::vector<float> m_priceHistory;	
};

#endif //STOCK_H
