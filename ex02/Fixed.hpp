#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &src);
		~Fixed();

		Fixed&	operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;		
		int		toInt(void) const;

	private:
		int			_RawBits;
		int	const	_IndComma;
};

std::ostream &	operator<<(std::ostream& o, Fixed const & i);

/*


*/

#endif