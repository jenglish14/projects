/* @author: Josh English
 * 
 * @created: Mar. 30 2016
 * @modified: Mar. 30 2016
 *
 * @summary: implementation of StockList Class holding common list of tracked
 *           stocks
*/

#include<iostream>
#include"StockList.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::cin;

void StockList::init()
{
	string response;
	bool validInput = 0;
	while (!validInput)
	{
		cout << "\nWould you like to import track the S&P 500? (HIGHLY RECOMMENDED)" << endl;
		cout << "(y/n)?: ";
		cin >> response;
		validInput = checkYesNo(response);		
	}
	if (response[0] == 'Y' || response[0] == 'y')
	{
		store500();
	}
	//code add custom stock functionality here
	return;
}

bool StockList::checkYesNo(string response)
{
	if (response.size() == 1 && (response[0] == 'Y' || response[0] == 'y' || response[0] == 'N' || response[0] == 'n'))
	{
		return true;
	}
	cout << "Please enter valid response" << endl;
	return false;
}

void StockList::store500()
{
	makeAndPushStock("A");
	makeAndPushStock("AA");
	makeAndPushStock("AAL");
	makeAndPushStock("AAP");
	makeAndPushStock("AAPL");
	makeAndPushStock("ABBV");
	makeAndPushStock("ABC");
	makeAndPushStock("ABT");
	makeAndPushStock("ACN");
	makeAndPushStock("ADBE");
	makeAndPushStock("ADI");
	makeAndPushStock("ADM");
	makeAndPushStock("ADP");
	makeAndPushStock("ADS");
	makeAndPushStock("ADSK");
	makeAndPushStock("ADT");
	makeAndPushStock("AEE");
	makeAndPushStock("AEP");
	makeAndPushStock("AES");
	makeAndPushStock("AET");
	makeAndPushStock("AFL");
	makeAndPushStock("AGN");
	makeAndPushStock("AIG");
	makeAndPushStock("AIV");
	makeAndPushStock("AIZ");
	makeAndPushStock("AKAM");
	makeAndPushStock("ALL");
	makeAndPushStock("ALLE");
	makeAndPushStock("ALXN");
	makeAndPushStock("AMAT");
	makeAndPushStock("AME");
	makeAndPushStock("AMG");
	makeAndPushStock("AMGN");
	makeAndPushStock("AMP");
	makeAndPushStock("AMT");
	makeAndPushStock("AMZN");
	makeAndPushStock("AN");
	makeAndPushStock("ANTM");
	makeAndPushStock("AON");
	makeAndPushStock("APA");
	makeAndPushStock("APC");
	makeAndPushStock("APD");
	makeAndPushStock("APH");
	makeAndPushStock("ARG");
	makeAndPushStock("ATVI");
	makeAndPushStock("AVB");
	makeAndPushStock("AVGO");
	makeAndPushStock("AVY");
	makeAndPushStock("AWK");
	makeAndPushStock("AXP");
	makeAndPushStock("AZO");
	makeAndPushStock("BA");
	makeAndPushStock("BAC");
	makeAndPushStock("BAX");
	makeAndPushStock("BBBY");
	makeAndPushStock("BBT");
	makeAndPushStock("BBY");
	makeAndPushStock("BCR");
	makeAndPushStock("BDX");
	makeAndPushStock("BEN");
	makeAndPushStock("BF/B");
	makeAndPushStock("BHI");
	makeAndPushStock("BIIB");
	makeAndPushStock("BK");
	makeAndPushStock("BLK");
	makeAndPushStock("BLL");
	makeAndPushStock("BMY");
	makeAndPushStock("BRK/B");
	makeAndPushStock("BSX");
	makeAndPushStock("BWA");
	makeAndPushStock("BXLT");
	makeAndPushStock("BXP");
	makeAndPushStock("C");
	makeAndPushStock("CA");
	makeAndPushStock("CAG");
	makeAndPushStock("CAH");
	makeAndPushStock("CAM");
	makeAndPushStock("CAT");
	makeAndPushStock("CB");
	makeAndPushStock("CBG");
	makeAndPushStock("CBS");
	makeAndPushStock("CCE");
	makeAndPushStock("CCI");
	makeAndPushStock("CCL");
	makeAndPushStock("CELG");
	makeAndPushStock("CERN");
	makeAndPushStock("CF");
	makeAndPushStock("CFG");
	makeAndPushStock("CHD");
	makeAndPushStock("CHK");
	makeAndPushStock("CHRW");
	makeAndPushStock("CI");
	makeAndPushStock("CINF");
	makeAndPushStock("CL");
	makeAndPushStock("CLX");
	makeAndPushStock("CMA");
	makeAndPushStock("CMCSA");
	makeAndPushStock("CME");
	makeAndPushStock("CMG");
	makeAndPushStock("CMI");
	makeAndPushStock("CMS");
	makeAndPushStock("CNP");
	makeAndPushStock("COF");
	makeAndPushStock("COG");
	makeAndPushStock("COH");
	makeAndPushStock("COL");
	makeAndPushStock("COP");
	makeAndPushStock("COST");
	makeAndPushStock("CPB");
	makeAndPushStock("CPGX");
	makeAndPushStock("CRC");
	makeAndPushStock("CRM");
	makeAndPushStock("CSCO");
	makeAndPushStock("CSRA");
	makeAndPushStock("CSX");
	makeAndPushStock("CTAS");
	makeAndPushStock("CTL");
	makeAndPushStock("CTSH");
	makeAndPushStock("CTXS");
	makeAndPushStock("CVC");
	makeAndPushStock("CVS");
	makeAndPushStock("CVX");
	makeAndPushStock("CXO");
	makeAndPushStock("D");
	makeAndPushStock("DAL");
	makeAndPushStock("DD");
	makeAndPushStock("DE");
	makeAndPushStock("DG");
	makeAndPushStock("DGX");
	makeAndPushStock("DHI");
	makeAndPushStock("DHR");
	makeAndPushStock("DIS");
	makeAndPushStock("DISCA");
	makeAndPushStock("DISCK");
	makeAndPushStock("DLPH");
	makeAndPushStock("DLTR");
	makeAndPushStock("DNB");
	makeAndPushStock("DO");
	makeAndPushStock("DOV");
	makeAndPushStock("DOW");
	makeAndPushStock("DPS");
	makeAndPushStock("DRI");
	makeAndPushStock("DTE");
	makeAndPushStock("DUK");
	makeAndPushStock("DVA");
	makeAndPushStock("DVN");
	makeAndPushStock("EA");
	makeAndPushStock("EBAY");
	makeAndPushStock("ECL");
	makeAndPushStock("ED");
	makeAndPushStock("EFX");
	makeAndPushStock("EIX");
	makeAndPushStock("EL");
	makeAndPushStock("EMC");
	makeAndPushStock("EMN");
	makeAndPushStock("EMR");
	makeAndPushStock("ENDP");
	makeAndPushStock("EOG");
	makeAndPushStock("EQIX");
	makeAndPushStock("EQR");
	makeAndPushStock("EQT");
	makeAndPushStock("ES");
	makeAndPushStock("ESRX");
	makeAndPushStock("ESS");
	makeAndPushStock("ESV");
	makeAndPushStock("ETFC");
	makeAndPushStock("ETN");
	makeAndPushStock("ETR");
	makeAndPushStock("EW");
	makeAndPushStock("EXC");
	makeAndPushStock("EXPD");
	makeAndPushStock("EXPE");
	makeAndPushStock("EXR");
	makeAndPushStock("F");
	makeAndPushStock("FAST");
	makeAndPushStock("FB");
	makeAndPushStock("FCX");
	makeAndPushStock("FDX");
	makeAndPushStock("FE");
	makeAndPushStock("FFIV");
	makeAndPushStock("FIS");
	makeAndPushStock("FISV");
	makeAndPushStock("FITB");
	makeAndPushStock("FLIR");
	makeAndPushStock("FLR");
	makeAndPushStock("FMC");
	makeAndPushStock("FOX");
	makeAndPushStock("FOXA");
	makeAndPushStock("FRT");
	makeAndPushStock("FSLR");
	makeAndPushStock("FTI");
	makeAndPushStock("FTR");
	makeAndPushStock("GAS");
	makeAndPushStock("GD");
	makeAndPushStock("GE");
	makeAndPushStock("GGP");
	makeAndPushStock("GILD");
	makeAndPushStock("GIS");
	makeAndPushStock("GLW");
	makeAndPushStock("GM");
	makeAndPushStock("GME");
	makeAndPushStock("GOOG");
	makeAndPushStock("GOOGL");
	makeAndPushStock("GPC");
	makeAndPushStock("GPS");
	makeAndPushStock("GRMN");
	makeAndPushStock("GS");
	makeAndPushStock("GT");
	makeAndPushStock("GWW");
	makeAndPushStock("HAL");
	makeAndPushStock("HAR");
	makeAndPushStock("HAS");
	makeAndPushStock("HBAN");
	makeAndPushStock("HBI");
	makeAndPushStock("HCA");
	makeAndPushStock("HCN");
	makeAndPushStock("HCP");
	makeAndPushStock("HD");
	makeAndPushStock("HES");
	makeAndPushStock("HIG");
	makeAndPushStock("HOG");
	makeAndPushStock("HON");
	makeAndPushStock("HOT");
	makeAndPushStock("HP");
	makeAndPushStock("HPE");
	makeAndPushStock("HPQ");
	makeAndPushStock("HRB");
	makeAndPushStock("HRL");
	makeAndPushStock("HSIC");
	makeAndPushStock("HST");
	makeAndPushStock("HSY");
	makeAndPushStock("HUM");
	makeAndPushStock("IBM");
	makeAndPushStock("ICE");
	makeAndPushStock("IFF");
	makeAndPushStock("ILMN");
	makeAndPushStock("INTC");
	makeAndPushStock("INTU");
	makeAndPushStock("IP");
	makeAndPushStock("IPG");
	makeAndPushStock("IR");
	makeAndPushStock("IRM");
	makeAndPushStock("ISRG");
	makeAndPushStock("ITW");
	makeAndPushStock("IVZ");
	makeAndPushStock("JBHT");
	makeAndPushStock("JCI");
	makeAndPushStock("JEC");
	makeAndPushStock("JNJ");
	makeAndPushStock("JNPR");
	makeAndPushStock("JPM");
	makeAndPushStock("JWN");
	makeAndPushStock("K");
	makeAndPushStock("KEY");
	makeAndPushStock("KHC");
	makeAndPushStock("KIM");
	makeAndPushStock("KLAC");
	makeAndPushStock("KMB");
	makeAndPushStock("KMI");
	makeAndPushStock("KMX");
	makeAndPushStock("KO");
	makeAndPushStock("KORS");
	makeAndPushStock("KR");
	makeAndPushStock("KSS");
	makeAndPushStock("KSU");
	makeAndPushStock("L");
	makeAndPushStock("LB");
	makeAndPushStock("LEG");
	makeAndPushStock("LEN");
	makeAndPushStock("LH");
	makeAndPushStock("LLL");
	makeAndPushStock("LLTC");
	makeAndPushStock("LLY");
	makeAndPushStock("LM");
	makeAndPushStock("LMT");
	makeAndPushStock("LNC");
	makeAndPushStock("LOW");
	makeAndPushStock("LRCX");
	makeAndPushStock("LUK");
	makeAndPushStock("LUV");
	makeAndPushStock("LVLT");
	makeAndPushStock("LYB");
	makeAndPushStock("M");
	makeAndPushStock("MA");
	makeAndPushStock("MAC");
	makeAndPushStock("MAR");
	makeAndPushStock("MAS");
	makeAndPushStock("MAT");
	makeAndPushStock("MCD");
	makeAndPushStock("MCHP");
	makeAndPushStock("MCK");
	makeAndPushStock("MCO");
	makeAndPushStock("MCLZ");
	makeAndPushStock("MDT");
	makeAndPushStock("MET");
	makeAndPushStock("MHFI");
	makeAndPushStock("MHK");
	makeAndPushStock("MJN");
	makeAndPushStock("MKC");
	makeAndPushStock("MLM");
	makeAndPushStock("MMC");
	makeAndPushStock("MMM");
	makeAndPushStock("MNK");
	makeAndPushStock("MNST");
	makeAndPushStock("MO");
	makeAndPushStock("MON");
	makeAndPushStock("MOS");
	makeAndPushStock("MPC");
	makeAndPushStock("MRK");
	makeAndPushStock("MRO");
	makeAndPushStock("MS");
	makeAndPushStock("MSFT");
	makeAndPushStock("MSI");
	makeAndPushStock("MTB");
	makeAndPushStock("MU");
	makeAndPushStock("MUR");
	makeAndPushStock("MYL");
	makeAndPushStock("NAVI");
	makeAndPushStock("NBL");
	makeAndPushStock("NDAQ");
	makeAndPushStock("NEE");
	makeAndPushStock("NEM");
	makeAndPushStock("NFLX");
	makeAndPushStock("NFX");
	makeAndPushStock("NI");
	makeAndPushStock("NKE");
	makeAndPushStock("NLSN");
	makeAndPushStock("NOC");
	makeAndPushStock("NOV");
	makeAndPushStock("NRG");
	makeAndPushStock("NSC");
	makeAndPushStock("NTAP");
	makeAndPushStock("NTRS");
	makeAndPushStock("NUE");
	makeAndPushStock("NVDA");
	makeAndPushStock("NWL");
	makeAndPushStock("NWS");
	makeAndPushStock("NWSA");
	makeAndPushStock("O");
	makeAndPushStock("OI");
	makeAndPushStock("OKE");
	makeAndPushStock("OMC");
	makeAndPushStock("ORCL");
	makeAndPushStock("ORLY");
	makeAndPushStock("OXY");
	makeAndPushStock("PAYX");
	makeAndPushStock("PBCT");
	makeAndPushStock("PBI");
	makeAndPushStock("PCAR");
	makeAndPushStock("PCG");
	makeAndPushStock("PCLN");
	makeAndPushStock("PDCO");
	makeAndPushStock("PEG");
	makeAndPushStock("PEP");
	makeAndPushStock("PFE");
	makeAndPushStock("PFG");
	makeAndPushStock("PG");
	makeAndPushStock("PGR");
	makeAndPushStock("PH");
	makeAndPushStock("PHM");
	makeAndPushStock("PKI");
	makeAndPushStock("PLD");
	makeAndPushStock("PM");
	makeAndPushStock("PNC");
	makeAndPushStock("PNR");
	makeAndPushStock("PNW");
	makeAndPushStock("POM");
	makeAndPushStock("PPG");
	makeAndPushStock("PPL");
	makeAndPushStock("PRGO");
	makeAndPushStock("PRU");
	makeAndPushStock("PSA");
	makeAndPushStock("PSX");
	makeAndPushStock("PVH");
	makeAndPushStock("PWR");
	makeAndPushStock("PX");
	makeAndPushStock("PXD");
	makeAndPushStock("PYPL");
	makeAndPushStock("QCOM");
	makeAndPushStock("QRVO");
	makeAndPushStock("R");
	makeAndPushStock("RAI");
	makeAndPushStock("RCL");
	makeAndPushStock("REGN");
	makeAndPushStock("RF");
	makeAndPushStock("RHI");
	makeAndPushStock("RHT");
	makeAndPushStock("RIG");
	makeAndPushStock("RL");
	makeAndPushStock("ROK");
	makeAndPushStock("ROP");
	makeAndPushStock("ROST");
	makeAndPushStock("RRC");
	makeAndPushStock("RSG");
	makeAndPushStock("RTN");
	makeAndPushStock("SBUX");
	makeAndPushStock("SCG");
	makeAndPushStock("SCHW");
	makeAndPushStock("SE");
	makeAndPushStock("SEE");
	makeAndPushStock("SHW");
	makeAndPushStock("SIG");
	makeAndPushStock("SJM");
	makeAndPushStock("SLB");
	makeAndPushStock("SLG");
	makeAndPushStock("SNA");
	makeAndPushStock("SNDK");
	makeAndPushStock("SNI");
	makeAndPushStock("SO");
	makeAndPushStock("SPG");
	makeAndPushStock("SPLS");
	makeAndPushStock("SRCL");
	makeAndPushStock("SRE");
	makeAndPushStock("STI");
	makeAndPushStock("STJ");
	makeAndPushStock("STT");
	makeAndPushStock("STX");
	makeAndPushStock("STZ");
	makeAndPushStock("SWK");
	makeAndPushStock("SWKS");
	makeAndPushStock("SWN");
	makeAndPushStock("SYF");
	makeAndPushStock("SYK");
	makeAndPushStock("SYMC");
	makeAndPushStock("SYY");
	makeAndPushStock("T");
	makeAndPushStock("TAP");
	makeAndPushStock("TDC");
	makeAndPushStock("TE");
	makeAndPushStock("TEL");
	makeAndPushStock("TGNA");
	makeAndPushStock("TGT");
	makeAndPushStock("THC");
	makeAndPushStock("TIF");
	makeAndPushStock("TJX");
	makeAndPushStock("TMK");
	makeAndPushStock("TMO");
	makeAndPushStock("TRIP");
	makeAndPushStock("TROW");
	makeAndPushStock("TRV");
	makeAndPushStock("TSCO");
	makeAndPushStock("TSN");
	makeAndPushStock("TSO");
	makeAndPushStock("TSS");
	makeAndPushStock("TWC");
	makeAndPushStock("TWX");
	makeAndPushStock("TXN");
	makeAndPushStock("TXT");
	makeAndPushStock("TYC");
	makeAndPushStock("UA");
	makeAndPushStock("UAL");
	makeAndPushStock("UDR");
	makeAndPushStock("UHS");
	makeAndPushStock("UNH");
	makeAndPushStock("UNM");
	makeAndPushStock("UNP");
	makeAndPushStock("UPS");
	makeAndPushStock("URBN");
	makeAndPushStock("URI");
	makeAndPushStock("USB");
	makeAndPushStock("UTX");
	makeAndPushStock("V");
	makeAndPushStock("VAR");
	makeAndPushStock("VFC");
	makeAndPushStock("VIAB");
	makeAndPushStock("VLO");
	makeAndPushStock("VMC");
	makeAndPushStock("VNO");
	makeAndPushStock("VRSK");
	makeAndPushStock("VRSN");
	makeAndPushStock("VRTX");
	makeAndPushStock("VTR");
	makeAndPushStock("VZ");
	makeAndPushStock("WAT");
	makeAndPushStock("WBA");
	makeAndPushStock("WDC");
	makeAndPushStock("WEC");
	makeAndPushStock("WFC");
	makeAndPushStock("WFM");
	makeAndPushStock("WHR");
	makeAndPushStock("WLTW");
	makeAndPushStock("WM");
	makeAndPushStock("WMB");
	makeAndPushStock("WMT");
	makeAndPushStock("WRK");
	makeAndPushStock("WU");
	makeAndPushStock("WY");
	makeAndPushStock("WYNN");
	makeAndPushStock("XEC");
	makeAndPushStock("XEL");
	makeAndPushStock("XL");
	makeAndPushStock("XLNX");
	makeAndPushStock("XOM");
	makeAndPushStock("XRAY");
	makeAndPushStock("XRX");
	makeAndPushStock("XYL");
	makeAndPushStock("YHOO");
	makeAndPushStock("YUM");
	makeAndPushStock("ZBH");
	makeAndPushStock("ZION");
	makeAndPushStock("ZTS");
	return;
}

void StockList::makeAndPushStock(string stockSymbol)
{
	Stock temp(stockSymbol);
	m_stockList.push_back(temp);
	return;
}
