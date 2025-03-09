#ifndef PHOINLIST_H
#define PHOINLIST_H
#include <unordered_map>

template <typename T>
class PhoinList
{
public:
    PhoinList() = default;
    PhoinList(const std::unordered_map<T,char> &map);
    void clear();
    void appendValue(const T &value);
    void removeValue(const T &value);
    bool getValue(const int &number,T &value) const;
    bool findValue(const T &value) const;
    bool isEmpty() const;
    size_t size() const;
    bool operator==(const PhoinList& other) const;
    bool operator>(const PhoinList& other) const;
    bool operator<(const PhoinList& other) const;
    void operator=(const PhoinList& other) const;
private:
    std::unordered_map<T,char> mapa{};
};

#endif // PHOINLIST_H
