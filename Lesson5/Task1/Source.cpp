// Includes
#include <iostream>
#include <chrono>
#include <deque>
#include <list>
#include <vector>

// Constants
const int NUM_ELEMENTS = 1000000;

// Functions declarations
double ProfileBackInsertVector(std::vector<int>& vec);
double ProfileFrontInsertVector(std::vector<int>& vec);
double ProfileRandomAccessVector(std::vector<int>& vec);

double ProfileBackInsertList(std::list<int>& list);
double ProfileFrontInsertList(std::list<int>& list);

double ProfileBackInsertDeque(std::deque<int>& deque);
double ProfileFrontInsertDeque(std::deque<int>& deque);
double ProfileRandomAccessDeque(std::deque<int>& deque);

// Functions Definitions
int main()
{
    srand(time(0));

    std::vector<int> vec_back;
    std::vector<int> vec_front;

    double backInsertVectorDuration = ProfileBackInsertVector(vec_back);
    double frontInsertVectorDuration = ProfileFrontInsertVector(vec_front);
    double lookupRandomVectorDuration = ProfileRandomAccessVector(vec_back);

    std::cout << '\n';

    std::list<int> list_back;
    std::list<int> list_front;

    double backInsertListDuration = ProfileBackInsertList(list_back);
    double frontInsertListDuration = ProfileFrontInsertList(list_front);

    std::cout << '\n';

    std::deque<int> deq_back;
    std::deque<int> deq_front;

    double backInsertDequeDuration = ProfileBackInsertDeque(deq_back);
    double frontInsertDequeDuration = ProfileFrontInsertDeque(deq_front);
    double lookupRandomDequeDuration = ProfileRandomAccessDeque(deq_back);

    std::cout << '\n';

    double fastestBackInsertDuration = std::min({ backInsertVectorDuration, backInsertListDuration, backInsertDequeDuration });
    double fastestFrontInsertDuration = std::min({ frontInsertVectorDuration, frontInsertListDuration, frontInsertDequeDuration });
    double fastestLookupDuration = std::min({ lookupRandomVectorDuration, lookupRandomDequeDuration });

    std::cout << "Fastest back insert duration: " << fastestBackInsertDuration << " ms\n";
    std::cout << "Fastest front insert duration: " << fastestFrontInsertDuration << " ms\n";
    std::cout << "Fastest random lookup duration: " << fastestLookupDuration << " ms\n";

    return 0;
}

double ProfileBackInsertVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::vector: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileFrontInsertVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the front
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.insert(std::begin(vec), 1, i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::vector: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileRandomAccessVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Pick random element location
    int randomIndex = rand() % vec.size();

    int randomNumber = vec[randomIndex];

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to access at random location for std::vector: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileBackInsertList(std::list<int>& list)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        list.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::list: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileFrontInsertList(std::list<int>& list)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        list.push_front(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::list: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileBackInsertDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        deque.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::deque: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileFrontInsertDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the front
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        deque.insert(std::begin(deque), 1, i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::deque: " << duration.count() << " ms\n";

    return duration.count();
}

double ProfileRandomAccessDeque(std::deque<int>& deque)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Pick random element location
    int randomIndex = rand() % deque.size();

    int randomNumber = deque[randomIndex];

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to access at random location for std::deque: " << duration.count() << " ms\n";

    return duration.count();
}