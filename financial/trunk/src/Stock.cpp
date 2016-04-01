/* @author: Josh English
 * 
 * @created: Mar. 29 2016
 * @modified: Mar. 29 2016
 *
 * @summary: implementation of Stock Class holding common stock stats
*/

#include<iostream>
#include<stdexcept>
#include<cmath>
#include<iomanip>
#include"Stock.h"

using std::cout;
using std::endl;
using std::string;
using std::invalid_argument;
using std::isnormal;
using std::setprecision;

// ----- Algorithm Functions ----- //
float Stock::computeSimpleMovingAverage(int numberOfDays)
{
	int historySize = m_priceHistory.size();
	if (numberOfDays > historySize)
	{
		string error = "\nin Stock::computeSimpleMovingAverage(int numberOfDays)\npriceHistory does not contain data for numberOfDays days\n\n";
		throw invalid_argument(error);
	}
	float sumOfPrices(0);
	for (int i = 0; i < numberOfDays; i++)
	{
		sumOfPrices = sumOfPrices + m_priceHistory[historySize-numberOfDays + i];
	}
	return (sumOfPrices/numberOfDays);
}

float Stock::computeExponentialMovingAverage(int numberOfDays)
{
	int historySize = m_priceHistory.size();
	if (numberOfDays > historySize)
	{
		string error = "\nin Stock::computeExponentialeMovingAverage(int numberOfDays)\npriceHistory does not contain data for numberOfDays days\n\n";
		throw invalid_argument(error);
	}
	float sumOfPrices(0);
	for (int i = 0; i < numberOfDays; i++)
	{
		sumOfPrices = sumOfPrices + m_priceHistory[i];
	}
	float SMA = (sumOfPrices/numberOfDays);
	float multiplier = (2.0 / (numberOfDays+1));
	float EMA(SMA);
	for (int i = numberOfDays; i < historySize; i++)
	{
		EMA = EMA + ((m_priceHistory[i] - EMA) * multiplier);
	}
	return (float)EMA;
}


// ----- Helper Functions ----- //
void Stock::printStockData()
{
	//use set and get functions to init local variables (protects data)
	string l_symbol(getSymbol());
	float l_currentPrice(getCurrentPrice());
	float l_priceChange(getDayPriceChange());
	float l_percentChange(getDayPercentChange());
	float l_52WeekHigh(get52WeekHigh());
	float l_52WeekLow(get52WeekLow());
	float l_marketCap(getMarketCap());
	double l_sharesOutstanding(getSharesOutstanding());
	double l_sharesShort(getSharesShort());
	float l_trailingPE(getTrailingPE());
	float l_5YrProjectedPEG(get5YrProjectedPEG());
	cout << "\n     // --------- Stock Data for: " << l_symbol << " --------- //" << endl;
	cout << "\tCurrent Price:\t\t\t" << l_currentPrice << endl;
	cout << "\tPrice Change:\t\t\t" << l_priceChange << endl;
	cout << "\tPercent Change:\t\t\t" << l_percentChange << endl;
	cout << "\t52 Week High:\t\t\t" << l_52WeekHigh << endl;
	cout << "\t52 Week Low:\t\t\t" << l_52WeekLow << endl;
	cout << "\tMarket Cap:\t\t\t" << l_marketCap << endl;
	cout << setprecision(10) << "\tShares Outstanding:\t\t" << l_sharesOutstanding << endl;
	cout << "\tShares Short:\t\t\t" << l_sharesShort << endl;
	cout << setprecision(5) << "\tP/E (Trailing 12 Months):\t" << l_trailingPE << endl;
	cout << "\tPEG Ratio (5-Year Projected):\t" << l_5YrProjectedPEG << endl;
	cout << endl;
}

void Stock::updatePriceHistory(float newPrice)
{
	int historySize = m_priceHistory.size();
	//m_priceHistory only holds 5000 past prices, limit memory use
	if (historySize == 5000)
	{
		for (int i = 0; i<4999; i++)
		{
			m_priceHistory[i] = m_priceHistory[i+1];
		}
	}
	m_priceHistory.push_back(newPrice);
}

// ----- set and get functions for member variables ----- //

void Stock::setSymbol(const string &newSymbol)
{
	m_symbol = newSymbol;
	return;
}

string Stock::getSymbol()
{
	return m_symbol;
}

void Stock::setCurrentPrice(float newPrice, bool updateHistoryFlag)
{
	if (!isnormal(newPrice))
	{
		string error = "\n\nin Stock::setCurrentPrice(float newPrice)\nnewPrice is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}
	m_currentPrice = newPrice;
	if (updateHistoryFlag)
	{
		updatePriceHistory(newPrice);
	}
	return;
}

float Stock::getCurrentPrice()
{
	return m_currentPrice;
}

void Stock::setDayPriceChange(float priceChange)
{
	if (!isnormal(priceChange))
	{
		string error = "\n\nin Stock::setDayPriceChange(float priceChange)\ndayPriceChange is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_dayPriceChange = priceChange;
	return;	
}

float Stock::getDayPriceChange()
{
	return m_dayPriceChange;
}

void Stock::setDayPercentChange(float percentChange)
{
	if (!isnormal(percentChange))
	{
		string error = "\n\nin Stock::setDayPercentChange(float percentChange)\npercentChange is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_dayPercentChange = percentChange;
	return;
}

float Stock::getDayPercentChange()
{
	return m_dayPercentChange;
}

void Stock::set52WeekHigh(float new52WeekHigh)
{
	if (!isnormal(new52WeekHigh))
	{
		string error = "\n\nin Stock::set52WeekHigh(float new52WeekHigh)\nnew52WeekHigh is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_52WeekHigh = new52WeekHigh;
	return;
}

float Stock::get52WeekHigh()
{
	return m_52WeekHigh;
}

void Stock::set52WeekLow(float new52WeekLow)
{
	if (!isnormal(new52WeekLow))
	{
		string error = "\n\nin Stock::set52WeekLow(float new52WeekLow)\nnew52WeekLow is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_52WeekLow = new52WeekLow;
	return;
}

float Stock::get52WeekLow()
{
	return m_52WeekLow;
}

void Stock::setMarketCap(float newMarketCap)
{
	if (!isnormal(newMarketCap))
	{
		string error = "\n\nin Stock::setMarketCap(float newMarketCap)\nnewMarketCap is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_marketCap = newMarketCap;
	return;
}

float Stock::getMarketCap()
{
	return m_marketCap;
}

void Stock::setSharesOutstanding(double newSharesOutstanding)
{
	if (!isnormal(newSharesOutstanding))
	{
		string error = "\n\nin Stock::setSharesOutstanding(double newSharesOutstanding)\nnewSharesOutstanding is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_sharesOutstanding = newSharesOutstanding;
	return;
}

double Stock::getSharesOutstanding()
{
	return m_sharesOutstanding;
}

void Stock::setSharesShort(double newSharesShort)
{
	if (!isnormal(newSharesShort))
	{
		string error = "\n\nin Stock::setSharesShort(double newSharesShort)\nnewSharesShort is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_sharesShort = newSharesShort;
	return;
}

double Stock::getSharesShort()
{
	return m_sharesShort;
}

void Stock::setTrailingPE(float newTrailingPE)
{
	if (!isnormal(newTrailingPE))
	{
		string error = "\n\nin Stock::setTrailingPE(float newTrailingPE)\nnewTrailingPE is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_trailingPE = newTrailingPE;
	return;
}

float Stock::getTrailingPE()
{
	return m_trailingPE;
}

void Stock::set5YrProjectedPEG(float new5YrProjectedPEG)
{
	if (!isnormal(new5YrProjectedPEG))
	{
		string error = "\n\nin Stock::set5YrProjectedPEG(float new5YrProjectedPEG)\nnew5YrProjectedPEG is not normal (commonly not initialized)\n";
		throw invalid_argument(error);
	}

	m_5YrProjectedPEG = new5YrProjectedPEG;
	return;
}

float Stock::get5YrProjectedPEG()
{
	return m_5YrProjectedPEG;
}

void Stock::printPriceHistory()
{
	int historySize = m_priceHistory.size();
	cout << "Price History:" << endl;
	for (int i = 0; i < historySize; i++)
	{
		cout << "Element [" << i << "]: " << m_priceHistory[i] << endl;			
	}
	if (historySize == 0)
	{
		cout << "No Price History!" << endl;
	}
	cout << endl;
}

// ----- default + specialized constructors, destructor ----- //
Stock::Stock()
{
	//could be implicitly defined
}

Stock::Stock(std::string symbol)
{
	setSymbol(symbol);
}

Stock::~Stock()
{
	//could be implicitly defined
}

