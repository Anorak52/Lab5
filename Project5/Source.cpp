#include "TDataCom.h"
#include "TDatValue.h"
#include "TTabRecord.h"
#include "TTable.h"
#include "TArrayTable.h"
#include "TScanTable.h"
//#include "TSortTable.h"


#include "Math.h"
#include "stdlib.h"
#include "time.h"

using namespace std;

int main()
{

	TScanTable A(1000), TMP(1000);
	int eff = 0;
	PTDatValue p = (PTDatValue)&eff;
	//TRecord rec;
	//TMP.Read("Text.txt");
	//A.Read("Text.txt");
	A.InsRecord("111", p);
	A.InsRecord("222", p);
	eff = A.GetEfficiency();

	cout << "ScanTable:" << endl << endl;
	A.Print();

	cout << endl;
	cout << "������������� ������� " << A.GetDataCount() << " ������� = " << A.GetEfficiency() << " (� ������� =  " << ((float)A.GetEfficiency() / (float)A.GetDataCount()) << ")" << endl;

	eff = A.GetEfficiency();
	/*for (int i = 0; i < 100; i++)
	{
		rec = TMP.GetMas((rand() % TMP.GetDataCount()));
		A.Find(rec.key);
	}
	cout << "������������� ������ =  " << ((float)(A.GetEff() - eff) / 100) << endl;


	eff = A.GetEff();
	for (int i = 0; i < 100; i++)
	{
		rec = TMP.GetMas((rand() % TMP.GetDataCount()));
		A.Delete(rec.key);
		TMP.Delete(rec.key);
	}
	cout << "������������� ������� = " << ((float)(A.GetEff() - eff) / 100) << endl << endl;*/
	cout << "ScanTable ����� �������: (�������� " << A.GetDataCount() << " �������)" << endl;
	A.Print();

	cout << endl;
	//break;
}