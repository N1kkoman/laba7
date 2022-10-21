#pragma once
namespace ayama
{
	int** sozdanie(int n);
	void initialize(int** a, int n);
	void showing(int** a, int n);
	int SumPosElColumn(int** a, int n, int idx);
	int SwapColumns(int** a, int n);
	int isMaxi(int** a, int n);
	int isMini(int** a, int n);
	int SumDigits(int n);
}