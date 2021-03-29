#ifndef LIST_HPP
# define LIST_HPP


namespace ft
{
	template<typename T> 
	class List
	{
		protected:
			unsigned int _size;
		//	size_t	_max_size;
			T *_list;
		public:
			List();
			List(long unsigned int, T);
			template<class InputIterator>
			List(InputIterator, InputIterator);
			List(List<T> const &);
			~List();
	};
}
#endif