#include<iostream>
#include<ctime>


using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(long long arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(long long arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(long long arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(long long arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(long long arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(long long arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
long long Sum(long long arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
float AVG(float arr[], const int n);
double AVG(long long arr[], const int n);

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);
float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
long long minValueIn(long long arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long minValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
long long maxValueIn(long long arr[], const int n);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long maxValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(float arr[], const int n, int number_of_shifts);
void shiftLeft(long long arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);
void shiftRight(long long arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight_V2(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Russian");
	int number_of_shifts;

	const int D_SIZE = 5;
	int i_arr[D_SIZE];
	double d_arr[D_SIZE];
	float f_arr[D_SIZE];
	long long ll_arr[D_SIZE];
	char c_arr[D_SIZE];

	// Проверочный код для одномерного массива

	cout << "Одномерный массив int:" << endl << endl;
	FillRand(i_arr, D_SIZE);
	Print(i_arr, D_SIZE);
	cout << endl;
	Sort(i_arr, D_SIZE);
	Print(i_arr, D_SIZE);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(i_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(i_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr, D_SIZE) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(i_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(i_arr, D_SIZE);

	cout << endl;

	cout << "Одномерный массив double:" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout<< endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(d_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(d_arr, D_SIZE);

	cout << endl;

	cout << "Одномерный массив float:" << endl;
	FillRand(f_arr, D_SIZE);
	Print(f_arr, D_SIZE);
	cout << endl;
	Sort(f_arr, D_SIZE);
	Print(f_arr, D_SIZE);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(f_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(f_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(f_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(f_arr, D_SIZE) << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(f_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(f_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(f_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(f_arr, D_SIZE);

	cout << endl;

	cout << "Одномерный массив long long:" << endl;
	FillRand(ll_arr, D_SIZE);
	Print(ll_arr, D_SIZE);
	cout << endl;
	Sort(ll_arr, D_SIZE);
	Print(ll_arr, D_SIZE);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(ll_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(ll_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(ll_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(ll_arr, D_SIZE) << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(ll_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шагов:" << endl;
	Print(ll_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(ll_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шагов:" << endl;
	Print(ll_arr, D_SIZE);

	cout << endl;

	cout << "Одномерный массив char:"<< endl;
	FillRand(c_arr, D_SIZE);
	Print(c_arr, D_SIZE);
	cout << endl;
	Sort(c_arr, D_SIZE);
	Print(c_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шагов:" << endl;
	Print(c_arr, D_SIZE);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl;
	Print(c_arr, D_SIZE);

	cout << endl;

	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	float f_arr_2[ROWS][COLS];
	long long ll_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];

	// Проверочный код для двумерного массива

	cout << "Двумерный массив int:" << endl << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив double:" << endl << endl;
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив float:" << endl << endl;
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	Sort(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(f_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(f_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(f_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив long long:" << endl << endl;
	FillRand(ll_arr_2, ROWS, COLS);
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	Sort(ll_arr_2, ROWS, COLS);
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(ll_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(ll_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(ll_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(ll_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(ll_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(ll_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив char:" << endl << endl;
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr_2, ROWS, COLS);
}

// Заполнение массива случайными значениями

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100; // знаки до запятой и после
	}
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100; // знаки до запятой и после
	}
}

void FillRand(long long arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (91 - 65) + 65; // для наглядности латинские буквы (A - 65 .... Z - 90)
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 10000) / 100;
		}
	}
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = float(rand() % 10000) / 100;
		}
	}
}

void FillRand(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (91 - 65) + 65; // для наглядности латинские буквы (A - 65 .... Z - 90)
		}
	}
}

// Вывод массива на экран

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(long long arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

// Сортировка массива по возрастанию (алфавиту)

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(long long arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				long long buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n) // по алфавиту
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						float buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						long long buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

// Сумма значений элементов массива

int Sum(int arr[], const int n)
{
	int S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;

}

double Sum(double arr[], const int n)
{
	double S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

float Sum(float arr[], const int n)
{
	float S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

long long Sum(long long arr[], const int n)
{
	long long S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

// Среднее арифметическое значений элементов массива

double AVG(int arr[], const int n)
{
	double avg;
	avg = (double)Sum(arr, n) / n;
	return avg;
	// return Sum(arr, n) / n; - более короткий вариант записи
}

double AVG(double arr[], const int n)
{
	double avg;
	avg = (double)Sum(arr, n) / n;
	return avg;
}

float AVG(float arr[], const int n)
{
	float avg;
	avg = (float)Sum(arr, n) / n;
	return avg;
}

double AVG(long long arr[], const int n)
{
	double avg;
	avg = Sum(arr, n) / n;
	return avg;
}

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float avg;
	avg = (float)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

// Минимальное значение элементов массива

int minValueIn(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

long long minValueIn(long long arr[], const int n)
{
	long long min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

long long minValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

// Максимальное значение элементов массива

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

long long maxValueIn(long long arr[], const int n)
{
	long long max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

long long maxValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

// Сдвиг массива влево

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(long long arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

// Сдвиг массива вправо

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(long long arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

// Сдвиг массива вправо_V2

void shiftRight_V2(int arr[], const int n, int number_of_shifts)
{
	number_of_shifts = n - number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
}