#ifndef CARTMODELHPP
#define CARTMODELHPP

#include <ctime>
#include <vector>
#include "article.hpp"

class CartModel {
	public:
		int m_id;
		time_t m_createdDate;
		time_t m_updatedDate;
		int m_userId;
		std::vector<ArticleModel> m_articles;
		double m_value;

		CartModel(int& id, time_t& createdDate, time_t& updatedDate, int& userId, std::vector<ArticleModel>& articles);

		CartModel& setCartValue(int &value);
};

#endif