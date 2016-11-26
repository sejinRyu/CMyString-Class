// StringCtrl.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "MyString.h"


int _tmain(int argc,_TCHAR* argv[])
{
	CMyString strData, strTest;
	strData.SetString("Hello");
	strTest.SetString("Hello");

	cout << strData.GetString() << endl;
	(cout << (strData != strTest))<< endl;

    return 0;
}

