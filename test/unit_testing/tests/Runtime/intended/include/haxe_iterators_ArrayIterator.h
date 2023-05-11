#pragma once

#include <deque>
#include <memory>
#include "_HaxeUtils.h"

namespace haxe::iterators {

template<typename T>
class ArrayIterator {
public:
	std::shared_ptr<std::deque<T>> array;
	
	int current;

	ArrayIterator(std::shared_ptr<std::deque<T>> array): _order_id(generate_order_id()) {
		this->current = 0;
		this->array = array;
	}
	
	bool hasNext() {
		return (unsigned int)(this->current) < this->array->size();
	}
	
	T next() {
		return (*this->array)[this->current++];
	}
	
	HX_COMPARISON_OPERATORS(ArrayIterator<T>)
};

}
