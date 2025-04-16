#include "phoinlist.h"


template<typename T>
PhoinList<T>::PhoinList(const std::unordered_map<T, char> &map){
    mapa = map;
}

template<typename T>
void PhoinList<T>::appendValue(const T &value){
    mapa[value] = ' ';
}

template<typename T>
void PhoinList<T>::removeValue(const T &value){
    mapa.erase(value);
}

template<typename T>
bool PhoinList<T>::getValue(const int &number, T &value) const{
    if (number < mapa.size()){
        value = mapa.begin()+number;
        return true;
    }
    return false;
}

template<typename T>
bool PhoinList<T>::findValue(const T &value) const{
    return mapa.find(value) != mapa.end();
}

template<typename T>
void PhoinList<T>::clear(){
    mapa.clear();
}

template<typename T>
bool PhoinList<T>::isEmpty() const{
    return mapa.empty();
}

template<typename T>
size_t PhoinList<T>::size() const{
    return mapa.size();
}

template<typename T>
bool PhoinList<T>::operator==(const PhoinList &other) const{
    return mapa == other.mapa;
}

template<typename T>
bool PhoinList<T>::operator>(const PhoinList &other) const{
    return mapa.size() > other.mapa.size();
}

template<typename T>
bool PhoinList<T>::operator<(const PhoinList &other) const{
    return mapa.size() < other.mapa.size();
}

template<typename T>
void PhoinList<T>::operator =(const PhoinList &other) const{
    mapa = other.mapa;
}
