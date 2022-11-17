/*
	MIT License

Copyright (c) 2022        Daniel McLarty
Copyright (c) 2020-2022   Arash Khatami

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

// Set use of custom versions of STL functions
#define USE_STL_VECTOR 1
#define USE_STL_DEQUE 1

#if USE_STL_VECTOR
#include <vector>
namespace savage::utl {
	template<typename T>
	using vector = std::vector<T>;

	// Swap two elements in a vector and remove the last element in the vector
	template<typename T>
	void erase_unordered(std::vector<T>& v, size_t index)
	{
		// If the vector has two or more elements
		if (v.size() > 1)
		{
			// We will swap the element at the index with the last element
			std::iter_swap(v.begin() + index, v.end() - 1);
			// Then we will remove the last element
			v.pop_back();
		}
		// If the vector has one element or is empty
		else
		{
			// We will just clear the vector
			v.clear();
		}
	}
}
#endif

#if USE_STL_DEQUE
#include <deque>
namespace savage::utl {
	template<typename T>
	using deque = std::deque<T>;
}
#endif

namespace savage::util {

	// TODO: make custom version of STL functions

}