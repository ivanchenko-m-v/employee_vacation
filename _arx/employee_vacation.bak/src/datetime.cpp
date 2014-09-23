/// $Header
/// ============================================================================
///		Author		: M. Ivanchenko
///		Date create	: 11-02-2013
///		Date update	: 11-02-2013
///		Comment		:
/// ============================================================================
#include <time.h>
#include <sys/time.h>

#include "datetime.h"

namespace rele_auto
{

/// ############################################################################
///			class datetime
/// ############################################################################
    const int datetime::_year_offset = 1900;
    const int datetime::_month_offset = 1;
    const int datetime::_mksec_in_msec = 1000;

    /// ========================================================================
    ///		CONSTRUCTORS/DESTRUCTOR
    /// ========================================================================

    /// ------------------------------------------------------------------------
    ///	datetime( )
    /// ------------------------------------------------------------------------
    datetime::datetime( )
	{
       // this->update( );
	}

    /// ------------------------------------------------------------------------
    ///	~datetime( )
    /// ------------------------------------------------------------------------
    datetime::~datetime( )
	{
	}

    /// ========================================================================
    ///		PROPERTIES
    /// ========================================================================
    /// --------------------------------------------------------------------
    /// get properties
    /// --------------------------------------------------------------------
    /// --------------------------------------------------------------------
    short datetime::day( ) const { return this->_local_time.tm_mday;}
    /// --------------------------------------------------------------------
    short datetime::week_day( ) const { return this->_local_time.tm_wday; }
    /// --------------------------------------------------------------------
    short datetime::month( ) const
    { return this->_local_time.tm_mon + this->_month_offset; }
    /// --------------------------------------------------------------------
    int datetime::year( ) const
    { return this->_local_time.tm_year + this->_year_offset; }
    /// --------------------------------------------------------------------
    short datetime::year_day( ) const
    { return this->_local_time.tm_yday; }
    /// --------------------------------------------------------------------
    short datetime::year_week( ) const
    { return -1; }
    /// --------------------------------------------------------------------
    short datetime::hour( ) const { return this->_local_time.tm_hour; }
    /// --------------------------------------------------------------------
    short datetime::minute( ) const { return this->_local_time.tm_min; }
    /// --------------------------------------------------------------------
    short datetime::second( ) const { return this->_local_time.tm_sec; }
    /// --------------------------------------------------------------------
    int datetime::millisecond( ) const
    { return this->_time_in_sec.tv_usec / this->_mksec_in_msec; }

    /// --------------------------------------------------------------------
    /// set properties
    /// --------------------------------------------------------------------
    void datetime::day( short day_of_month )
    {
        this->_local_time.tm_mday = day_of_month;
    }

    /// --------------------------------------------------------------------
    void datetime::month( short )
    {

    }

    /// --------------------------------------------------------------------
    void datetime::year( int )
    {

    }

    /// --------------------------------------------------------------------
    void datetime::hour( short )
    {

    }

    /// --------------------------------------------------------------------
    void datetime::minute( short )
    {

    }

    /// --------------------------------------------------------------------
    void datetime::second( short )
    {

    }

    /// --------------------------------------------------------------------
    void datetime::microsecond( long )
    {

    }

    /// ========================================================================
    ///		OPERATORS
    /// ========================================================================

    /// ========================================================================
    ///		FUNCTIONS
    /// ========================================================================
    /// ------------------------------------------------------------------------
    ///	update( )
    /// ------------------------------------------------------------------------
    void datetime::update( )
    {
        ::gettimeofday( &(this->_time_in_sec), 0 );
        struct tm *ptime= ::localtime( &(this->_time_in_sec.tv_sec) );
        this->_local_time = *ptime;
    }
    /// ------------------------------------------------------------------------
    ///	update( )
    /// ------------------------------------------------------------------------
    datetime datetime::current( )
    {
        datetime dt;
        dt.update();

        return dt;
    }

/// ############################################################################
}//namespace rele_auto
