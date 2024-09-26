// 1. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int sum = 0;
	double middle = 0;
	int elements = 0;
	int minimun, maximun;

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
		if (true) {
			sum += massive[r][c];
			elements++;
			cout << massive[r][c] << "\t";
		}
		}
		if (elements > 0) {
			middle = sum * 1.0 / elements;
		}
		cout << "\n";
	}

	minimun = massive[0][0];
	maximun = massive[0][0];

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			minimun = min(minimun, massive[r][c]);
			maximun = max(maximun, massive[r][c]);
		}
	}

	cout << "Общая сумма элементов массива: " << sum << "\n";
	cout << "Среднее арифметическое среди элементов: " << middle << "\n";
	cout << "Минимальный значения элемента: " << minimun << "\n";
	cout << "Максимальный значения элемена: " << maximun << "\n";
}
*/

// 2. Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	int massive[M][M] = {};

	int main_diagonal = 0;
	int second_diagonal = 0;

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < M; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
			cout << massive[r][c] << "\t";
			if (r == c) {
				main_diagonal += massive[r][c];
			}
			else if (r + c == M - 1) {
				second_diagonal += massive[r][c];
			}
		}
		cout << "\n";
	}

	cout << "Сумма главного диагоналя: " << main_diagonal << "\n";
	cout << "Сумма побочного диагоналя: " << second_diagonal << "\n";
}
*/

// 3. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10. Определить количество положительных, отрицательных и нулевых элементов.

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = -10;
	int end = 10;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int number_positive = 0;
	int number_negative = 0;
	int number_zero = 0;

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (end - start + 1) + start;
			cout << massive[r][c] << "\t";
			if (massive[r][c] > 0) {
				number_positive++;
			}
			else if (massive[r][c] < 0) {
				number_negative++;
			}
			else {
				number_zero++;
			}
		}
		cout << "\n";
	}

	cout << "Позитивные числа: " << number_positive << "\n";
	cout << "Отрицательные числа: " << number_negative << "\n";
	cout << "Нулевые числа: " << number_zero << "\n";
}
*/

// 4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int row_sum[M] = {};
	int col_sum[N] = {};

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
			row_sum[r] += massive[r][c];
			col_sum[c] += massive[r][c];
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}

	cout << "\nСумма по каждой строке:\n";
	for (int r = 0; r < M; r++) {
		cout << "Строка " << r + 1 << ": " << row_sum[r] << "\n";
	}

	cout << "\nСумма по каждому столбцу:\n";
	for (int c = 0; c < N; c++) {
		cout << "Столбец " << c + 1 << ": " << col_sum[c] << "\n";
	}
}
*/

// 9. Заполнить массив M x N следующим образом

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	const int M = 5;
	const int N = 6;
	int massive[M][N] = {};
	int number = 1;

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = number++;
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}
}
*/

// 7. Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100. Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = -100;
	int end = 100;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (end - start + 1) + start;
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}

	int massive_max = massive[0][0];
	int massive_min = massive[0][0];

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive_max = max(massive_max, massive[r][c]);
			massive_min = min(massive_min, massive[r][c]);
		}
	}

	cout << "\nМинимальный элемент: " << massive_min;
	cout << "\nМаксимальный элемент: " << massive_max;
}
*/

// 13. Реализовать преобразование двумерного массива в одномерный, и наоборот.

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	const int M = 5;
	const int N = 5;
	int massive_2d[M][N];
	int number = 1;

	cout << "Двумерный массив:\n";
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive_2d[r][c] = number++;
			cout << massive_2d[r][c] << "\t";
		}
		cout << "\n";
	}

	const int SIZE = M * N;
	int massive_1d[SIZE];

	for (int i = 0; i < SIZE; i++) {
		massive_1d[i] = massive_2d[i / N][i % N];
	}

	cout << "\nОдномерный массив:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << massive_1d[i] << " ";
	}
	cout << "\n";

	int massive_2d_back[M][N];
	for (int i = 0; i < SIZE; i++) {
		massive_2d_back[i / N][i % N] = massive_1d[i];
	}

	cout <<"\nОбратно в двумерный массив из одномерного массива:\n";
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			cout << massive_2d_back[r][c] << "\t";
		}
		cout << "\n";
	}
}
*/

// 5. Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.

/*
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	const int M = 6;
	const int N = 6;
	int massive[M][N];

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			massive[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << massive[i][j] << "\t";
		}
		cout << "\n";
	}
}
*/