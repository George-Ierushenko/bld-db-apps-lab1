#include "../include/models/cart.hpp"

CartModel::CartModel(int &id, time_t &createdDate, time_t &updatedDate, int &userId, std::vector<ArticleModel> &articles)
			: m_id(id),
					m_createdDate(createdDate),
					m_updatedDate(updatedDate),
					m_userId(userId),
					m_articles(articles)
		{};

CartModel& CartModel::setCartValue(int &value) {
	m_value = value;
	return *this;
}