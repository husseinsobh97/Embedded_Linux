#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

struct Record
{
    std::string address;
    int id;
    bool operator>(const Record &record)
    {
        return this->id > record.id;
    }

    bool operator<(const Record &record)
    {
        return this->id < record.id;
    }
};

class SortStrategy
{
public:
    virtual void Sort(std::vector<Record> &rec, int size) = 0;
    virtual ~SortStrategy() = default;
};

class Insertion : public SortStrategy
{
public:
    void Sort(std::vector<Record> &rec, int size) override
    {
        int i, j;
        Record key;
        for (i = 1; i < size; i++)
        {
            key = rec[i];
            j = i - 1;

            while (j >= 0 && rec[j] > key)
            {
                rec[j + 1] = rec[j];
                j = j - 1;
            }
            rec[j + 1] = key;
        }
        for (Record element : rec)
        {
            std::cout << element.id << std::endl;
        }
        std::cout <<"end of insertion sort" << std::endl;
    }
};

class Selection : public SortStrategy
{
public:
    void Sort(std::vector<Record> &rec, int size) override
    {
        int i, j, min;

        for (i = 0; i < size - 1; i++)
        {

            // Find the minimum element in
            // unsorted array
            min = i;
            for (j = i + 1; j < size; j++)
            {
                if (rec[j] < rec[min])
                    min = j;
            }

            // Swap the found minimum element
            // with the first element
            if (min != i)
                std::swap(rec[min], rec[i]);
        }
        for (Record element : rec)
        {
            std::cout << element.id << std::endl;
        }
        std::cout <<"end of selection sort" << std::endl;
    }
};

int main()
{
    std::vector<Record> records;
    Record r1;
    Record r2;
    Record r3;
    Record r4;
    Record r5;
    Record r6;
    Record r7;
    Record r8;
    r1.id = 9;
    r2.id = 7;
    r3.id = 15;
    r4.id = 1;

    records.push_back(r1);
    records.push_back(r2);
    records.push_back(r3);
    records.push_back(r4);
    for (Record element : records)
    {
        std::cout << element.id << std::endl;
    }

    Insertion insertion;
    insertion.Sort(records, records.size());

    r5.id = 91;
    r6.id = 14;
    r7.id = 71;
    r8.id = 6;

    records.push_back(r5);
    records.push_back(r6);
    records.push_back(r7);
    records.push_back(r8);

    Selection selection;
    selection.Sort(records, records.size());

    return 0;
}