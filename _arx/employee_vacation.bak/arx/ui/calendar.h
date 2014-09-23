//$Header
//=============================================================================
//		Author		: M. Ivanchenko
//		Date create	: 28-01-2013
//		Date update	: 28-01-2013
//		Comment		:
//=============================================================================
#ifndef __EV_CALENDAR_H__
#define __EV_CALENDAR_H__

#include <QtGui/QCalendarWidget>

namespace rele_auto
{

namespace employee_vacation
{

//#############################################################################
//			class calendar
//#############################################################################
    class calendar : public QCalendarWidget
    {
    //=========================================================================
    //		CONSTRUCTORS/DESTRUCTOR
    //=========================================================================
    private:
        calendar( const calendar &rhs );

    public:
        explicit calendar( QWidget *parent = 0 );
        virtual ~calendar( );

    //=========================================================================
    //		FUNCTIONS
    //=========================================================================
    private:
        void initialize( );

    public:

    //=========================================================================
    //		PROPERTIES
    //=========================================================================
    private:

    public:

    //=========================================================================
    //		OPERATORS
    //=========================================================================
    private:
        calendar& operator=( const calendar &rhs );

    public:

    //=========================================================================
    //			FIELDS
    //=========================================================================
    private:

    };//class calendar
//#############################################################################
//-----------------------------------------------------------------------------

}//namespace employee_vacation

}//namespace rele_auto
#endif // __EV_CALENDAR_H__
