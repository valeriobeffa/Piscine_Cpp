#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(Bureaucrat const & uguale);
        Bureaucrat(std::string _name, int _grade);

        std::string getName();
        int         getGrade();

        void inc_grade();
        void dec_grade();
        
        class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw ();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw ();
		};
};

std::ostream& operator<<(std::ostream & os, Bureaucrat & bur);

#endif