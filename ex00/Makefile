CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp
OBJS_DIR := objects
OBJS := $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
DEPS := $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.d))

NAME := main

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Created" $(NAME)

-include $(DEPS)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@
	@echo "Created" $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME) $(NAME).exe

re: fclean all

debug: CXXFLAGS += -g -fsanitize=address
debug: re

.PHONY: all clean fclean re debug
