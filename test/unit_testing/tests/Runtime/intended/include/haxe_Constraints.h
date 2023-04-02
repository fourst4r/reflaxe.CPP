#pragma once

#include <memory>
#include <optional>
#include <string>
#include "StdTypes.h"

namespace haxe {

template<typename K, typename V>
class IMap {
public:
	virtual std::optional<V> get(K k) = 0;
	
	virtual void set(K k, V v) = 0;
	
	virtual bool exists(K k) = 0;
	
	virtual bool remove(K k) = 0;
	
	virtual std::shared_ptr<Iterator<K>> keys() = 0;
	
	virtual std::shared_ptr<Iterator<V>> iterator() = 0;
	
	virtual std::shared_ptr<KeyValueIterator<K, V>> keyValueIterator() = 0;
	
	virtual std::shared_ptr<haxe::IMap<K, V>> copy() = 0;
	
	virtual std::string toString() = 0;
	
	virtual void clear() = 0;
	
	// ----------
	// Auto-generated additions from Haxe
	
	// Generate unique id for each instance
	unsigned long _order_id = 0;
	static unsigned long generate_order_id() { static unsigned long i = 0; return i++; }
	
	// Automatic comparison operators
	bool operator==(const IMap<K, V>& other) const {
		return _order_id == other._order_id;
	}
	
	bool operator<(const IMap<K, V>& other) const {
		return _order_id < other._order_id;
	}
};

}
