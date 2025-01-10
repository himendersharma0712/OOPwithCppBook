#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip> // setw()
#include <string>

void pg_3_1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void pg_3_2(int size)
{

    std::vector<int> *vector_ptr = new std::vector<int>(size);
    for (int i = 0; i < size; i++)
    {
        (*vector_ptr)[i] = i + 1; // (*vector_ptr) to dereference the vector ptr to object and then use [] to assign values at indices
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << (*vector_ptr)[i] << "\t";
    }
    delete vector_ptr;
}

void pg_3_3(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int x = i; // print the row number j times
            std::cout << x;
        }
        std::cout << std::endl; // flush the buffer and add a newline
    }
}

double calculateValue(double P, double r, int n)
{
    if (n == 0)
    {
        return P; // Base case: if n = 0, return the initial principal
    }
    // Recursive case: apply the formula V = P * (1 + r) for each year
    return calculateValue(P * (1 + r), r, n - 1); // Use the new P (which is V) for the next year
}

void pg_3_4()
{
    double P, r, V;
    int n;

    // Print the header
    std::cout << std::setw(15) << "P (Principal)"
              << std::setw(15) << "r (Rate)"
              << std::setw(15) << "n (Years)"
              << std::setw(15) << "V (Value)" << std::endl;

    // Print separator line
    std::cout << std::string(60, '-') << std::endl;

    // Loop over P from 1000 to 10000
    for (P = 1000; P <= 10000; P += 1000)
    {
        // Loop over r from 0.10 to 0.20 (inclusive)
        for (r = 0.10; r <= 0.20; r += 0.01)
        {
            // Loop over n from 1 to 10
            for (n = 1; n <= 10; n++)
            {
                // Calculate V using the recursive function
                V = calculateValue(P, r, n);

                // Print the values in a table format
                std::cout << std::setw(15) << P
                          << std::setw(15) << r
                          << std::setw(15) << n
                          << std::setw(15) << std::fixed << std::setprecision(2) << V << std::endl;
            }
        }
    }
}

void election_ballot()
{

    int candidates[5] = {1, 2, 3, 4, 5};

    int ballots = 5;
    int spoilt_ballots = 0;
    int array_ballots[5][5] = {{1, 1, 2, 3, 4}, {1, 2, 2, 3, 5}, {1, 2, 3, 6, 7}, {1, 2, 3, 4, 3}, {1, 1, 1, 1, 1}};
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;

    for (int i = 0; i < ballots; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            switch (array_ballots[i][j])
            {
            case 1:
                v1++;
                break;
            case 2:
                v2++;
                break;
            case 3:
                v3++;
                break;
            case 4:
                v4++;
                break;
            case 5:
                v5++;
                break;
            default:
                spoilt_ballots++;
                break;
            }
        }
    }

    printf("Votes for each candidate:-\nCandidate 1: %d Candidate 2: %d  Candidate 3: %d  Candidate 4: %d  Candidate 5: %d ", v1, v2, v3, v4, v5);
    printf("\nSpoilt ballots: %d", spoilt_ballots);
}

namespace stats
{

    double variance(int N)
    {

        double mean = ((N * (N + 1)) / 2.0) / N;
        double x_dev[N];

        for (int i = 1; i <= N; i++)
        {
            x_dev[i - 1] = abs(mean - i);
        }

        for (int i = 0; i < N; i++)
        {
            x_dev[i] = x_dev[i] * x_dev[i];
        }

        double sum_sqd_dev = 0;
        for (int i = 0; i < N; i++)
        {
            sum_sqd_dev += x_dev[i];
        }

        return sum_sqd_dev / N;
    }

    double std_deviation(int N)
    {

        double mean = ((N * (N + 1)) / 2.0) / N;
        double x_dev[N];

        for (int i = 1; i <= N; i++)
        {
            x_dev[i - 1] = abs(mean - i);
        }

        for (int i = 0; i < N; i++)
        {
            x_dev[i] = x_dev[i] * x_dev[i];
        }

        double sum_sqd_dev = 0;
        for (int i = 0; i < N; i++)
        {
            sum_sqd_dev += x_dev[i];
        }

        return sqrt(sum_sqd_dev / N);
    }

    double variance(double *arr, int size_arr)
    {

        double sum = 0;

        for (int i = 0; i < size_arr; i++)
        {
            sum += *(arr + i);
        }

        double mean = sum / size_arr;

        double sum_sqd_dev = 0;

        for (int i = 0; i < size_arr; i++)
        {

            sum_sqd_dev += pow(std::abs(*(arr + i) - mean), 2);
        }

        return sum_sqd_dev / size_arr;
    }

    double std_deviation(double *arr, int size_arr)
    {

        double sum = 0;

        for (int i = 0; i < size_arr; i++)
        {
            sum += *(arr + i);
        }

        double mean = sum / size_arr;

        double sum_sqd_dev = 0;

        for (int i = 0; i < size_arr; i++)
        {

            sum_sqd_dev += pow(std::abs(*(arr + i) - mean), 2);
        }

        return sqrt(sum_sqd_dev / size_arr);
    }

}

int main()
{

    int x = 2, y = 5;
    if (x < y)
    {
        // pg_3_1(x,y);
    }
    if (x > y)
    {
        printf("swapped");
    }

    // pg_3_2(5);

    // pg_3_3(5);

    // pg_3_4();

    // election_ballot();

    double arr1[7] = {1, 2, 3, 7, 90, 12, 13};

    // std::cout << stats::std_deviation(arr1,7);
    // std::cout << stats::variance(arr1,7);
}
