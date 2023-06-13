#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int n);
		Fixed(Fixed const &src);
		~Fixed();
		Fixed&	operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int			_RawBits;
		int	const	_IndComma;
};

#endif