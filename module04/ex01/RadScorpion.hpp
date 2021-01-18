/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 12:40:35 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/27 12:40:36 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion: public Enemy {
private:

public:
	RadScorpion();
	RadScorpion(RadScorpion const & radScorpion);
	RadScorpion operator=(RadScorpion const & rhs);
	~RadScorpion();
};


#endif