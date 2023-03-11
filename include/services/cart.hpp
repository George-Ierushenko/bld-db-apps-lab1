#ifndef CARTSERVICEHPP
#define CARTSERVICEHPP

#include "../models/cart.hpp"

class CartService {
	public:
		std::vector<CartModel> getAllCarts();
};

#endif
