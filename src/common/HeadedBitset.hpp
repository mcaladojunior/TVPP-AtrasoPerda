#ifndef HEADEDBITSET_H_INCLUDED#define HEADEDBITSET_H_INCLUDED#include <boost/dynamic_bitset.hpp>#include "ChunkUniqueID.hpp"class HeadedBitset: public boost::dynamic_bitset<>{    private:        ChunkUniqueID head;    public:        HeadedBitset(int size) : boost::dynamic_bitset<>(size) {};        HeadedBitset(ChunkUniqueID head,  boost::dynamic_bitset<> map) : boost::dynamic_bitset<>(map) {this->head = head;};        ChunkUniqueID GetHead();        void SetHead(ChunkUniqueID newHead);        friend std::ostream& operator<<(std::ostream& os, const HeadedBitset& bitset);};#endif // HEADEDBITSET_H_INCLUDED