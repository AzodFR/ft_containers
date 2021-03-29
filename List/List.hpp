#ifndef LIST_HPP
# define LIST_HPP

# include <cstdlib>
# include <memory>
# include <iostream>
namespace ft
{
	template < class T, class Alloc=std::allocator<T> >
	class List : std::allocator<T>
	{
		typedef T type_name;
		protected:
			unsigned int _size;
			size_t	_max_size;
			T *_list;
		private:
			const std::allocator<T> _allocator;
		public:
			
			/* CONSTRUCTOR */
				List() : _size(0), _max_size(768614336404564650)
				{
					if (_allocator.max_size() < 768614336404564650)
						_max_size = _allocator.max_size();
					T array[1];
					array[0] = 0;
					_list = array;
				};
				List(long unsigned int, T);
				template<class InputIterator>
				List(InputIterator, InputIterator);
				List(List<T> const &);
				~List(){};
			/* FUNCTIONS */
				size_t max_size() const {return _max_size;};
				int getIndex(int i) {return _list[i];};
	};
}
#endif