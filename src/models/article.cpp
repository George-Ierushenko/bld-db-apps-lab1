#include "../include/models/article.hpp"

ArticleModel::ArticleModel(int &id, const std::string &name, float &price, int &quantity, const std::string &unit)
			: m_id(id),
				m_name(name),
				m_price(price),
				m_quantity(quantity),
				m_unit(unit)
		{};