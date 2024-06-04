class BookCard:
    def __init__(self, author, title, publisher, year, pages, circulation):
        self.__author = author
        self.__title = title
        self.__publisher = publisher
        self.__year = year
        self.__pages = pages
        self.__circulation = circulation
        self.__rating = None
        self.__comment = None

    def set_rating(self, rating):
        if 0 <= rating <= 100:
            self.__rating = rating
        else:
            raise ValueError("Rating must be between 0 and 100")

    def set_comment(self, comment):
        self.__comment = comment

    def get_author(self):
        return self.__author

    def get_title(self):
        return self.__title

    def get_publisher(self):
        return self.__publisher

    def get_year(self):
        return self.__year

    def get_pages(self):
        return self.__pages

    def get_circulation(self):
        return self.__circulation

    def get_rating(self):
        return self.__rating

    def get_comment(self):
        return self.__comment

    def book_info(self):
        return f"Author: {self.__author}, Title: {self.__title}, Publisher: {self.__publisher}, Year: {self.__year}, Pages: {self.__pages}, Circulation: {self.__circulation}, Rating: {self.__rating}"

    def sort_books_by_year(self, book_list):
        for i in range(len(book_list)):
            for j in range(len(book_list) - i - 1):
                if book_list[j].get_year() > book_list[j + 1].get_year():
                    book_list[j], book_list[j + 1] = book_list[j + 1], book_list[j]
        return book_list