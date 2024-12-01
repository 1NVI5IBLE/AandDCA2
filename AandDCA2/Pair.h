#pragma once

template <class K, class V>

struct Pair {
	K key;
	V value;

	Pair(K k, V v) : key(k), value(v) {}

	bool operator < (const Pair& other) const { return key < other.key; }
	bool operator > (const Pair& other) const { return key > other.key; }
	bool operator == (const Pair& other) const { return key == other.key; }
	bool operator != (const Pair& other) const { return key != other.key; }

};
