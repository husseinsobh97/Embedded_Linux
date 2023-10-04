#include <iostream>
#include <vector>
#include <algorithm>

struct Record
{
    std::string address;
    int id;
};


bool cmp_by_id(const Record &a, const Record &b)
{
    return a.id < b.id;
}

int main()
{
    std::vector<Record> records;
    Record r1;
    Record r2;
    r1.id = 1;
    r1.address = "209 abdelsalam";
    r2.id = 2;
    r2.address = "15 louran";
    records.push_back(r1);
    records.push_back(r2);
    auto cpm_by_address = [](const Record &a, const Record &b) -> bool
    {
        return a.address < b.address;
    };
    std::sort(records.begin(), records.end(), cpm_by_address);

    for (auto record : records)
    {
        std::cout << record.address << std::endl;
    }
    return 0;
}