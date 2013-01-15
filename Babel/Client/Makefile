NAME=		Client

SRC=		$(wildcard Sources/*.cpp)

OBJ=		$(SRC:.cpp=.o)

RM=		rm -f

CFLAGS=		-W -Wall -Werror -Wextra

INCLUDE=	-I/usr/lib64/qt4/mkspecs/linux-g++ -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include/QtNetwork -I/usr/include/QtDeclarative -I./Includes/

LFLAGS=		 -lQtGui -lQtCore -lQtNetwork -lQtDeclarative

MOC=		/usr/lib64/qt4/bin/moc

$(NAME):	 $(OBJ)
		g++  -o $(NAME) $(OBJ) $(LFLAGS) $(INCLUDE)


%.o:		%.cpp
		@$ g++ -c $< $(INCLUDE) $(CFLAGS) -o $@
		@echo -e "compiling : $@"

all:		$(NAME)

clean:
		$(RM) *~
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

moc:
		$(MOC) $(INCLUDE) ./Includes/ui_BabelDesign.h -o ./Sources/BabelDesign.cpp

.PHONY:		all clean fclean re