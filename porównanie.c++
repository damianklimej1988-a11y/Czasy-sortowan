#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using namespace std;

// Losuje liczby do wektora
vector<int> generateNumbers(int size)
{
    vector<int> numbers;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100000);

    for (int i = 0; i < size; i++)
    {
        numbers.push_back(dist(gen));
    }

    return numbers;
}

// Bubble Sort
void bubbleSort(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = 0; j < numbers.size() - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

// Podział dla Quick Sort
int partition(vector<int> &numbers, int left, int right)
{
    int pivot = numbers[right];
    int index = left - 1;

    for (int i = left; i < right; i++)
    {
        if (numbers[i] <= pivot)
        {
            index++;
            swap(numbers[index], numbers[i]);
        }
    }

    swap(numbers[index + 1], numbers[right]);

    return index + 1;
}

// Quick Sort
void quickSort(vector<int> &numbers, int left, int right)
{
    if (left < right)
    {
        int pivot = partition(numbers, left, right);

        quickSort(numbers, left, pivot - 1);
        quickSort(numbers, pivot + 1, right);
    }
}

// Pomiar czasu Bubble Sort
long long measureBubbleSort(vector<int> numbers)
{
    auto start = chrono::high_resolution_clock::now();

    bubbleSort(numbers);

    auto end = chrono::high_resolution_clock::now();

    return chrono::duration_cast<chrono::milliseconds>(end - start).count();
}

// Pomiar czasu Quick Sort
long long measureQuickSort(vector<int> numbers)
{
    auto start = chrono::high_resolution_clock::now();

    quickSort(numbers, 0, numbers.size() - 1);

    auto end = chrono::high_resolution_clock::now();

    return chrono::duration_cast<chrono::milliseconds>(end - start).count();
}

// Wyświetlenie wyników
void showResults(long long bubbleTime, long long quickTime)
{
    cout << "Porownanie dla 50 000 liczb\n";
    cout << "Bubble Sort: " << bubbleTime << " ms\n";
    cout << "Quick Sort: " << quickTime << " ms\n\n";

    if (bubbleTime < quickTime)
        cout << "Bubble Sort byl szybszy.\n";
    else if (quickTime < bubbleTime)
        cout << "Quick Sort byl szybszy.\n";
    else
        cout << "Czasy byly takie same.\n";
}

int main()
{
    const int numberCount = 50000;

    // Tworzymy 50 000 liczb
    auto numbers = generateNumbers(numberCount);

    // Mierzymy czas sortowania
    auto bubbleTime = measureBubbleSort(numbers);
    auto quickTime = measureQuickSort(numbers);

    // Pokazujemy wyniki
    showResults(bubbleTime, quickTime);

    return 0;
}