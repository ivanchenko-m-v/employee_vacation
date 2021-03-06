/// $Header
/// ============================================================================
///		Author		: M. Ivanchenko
///		Date create	: 10-10-2013
///		Date update	: 10-10-2013
///		Comment		:
/// ============================================================================
#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__

#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

namespace rele_auto
{

namespace employee_vacation
{

    class widget_central;
/// ############################################################################
///			class main_window
/// ############################################################################
	class main_window : public QMainWindow
	{
		Q_OBJECT

	/// ========================================================================
	///		CONSTRUCTORS/DESTRUCTOR
	/// ========================================================================
	private:
		main_window( const main_window &rhs );

	public:
		explicit main_window( QWidget *parent = 0 );
		~main_window( );

	/// ========================================================================
	///		FUNCTIONS
	/// ========================================================================
	private:
		void initialize( );
		void window_center( );

	public:

	/// ========================================================================
	///		SLOTS
	/// ========================================================================
	private slots:

	/// ========================================================================
	///		PROPERTIES
	/// ========================================================================
	private:

	public:

	/// ========================================================================
	///		OPERATORS
	/// ========================================================================
	private:
		main_window& operator=( const main_window &rhs );

	public:

	/// ========================================================================
	///			FIELDS
	/// ========================================================================
	private:
        widget_central *_workspace;

	};//class main_window

/// ############################################################################
/// ----------------------------------------------------------------------------

}//namespace employee_vacation

}//namespace rele_auto

#endif // __MAIN_WINDOW_H__
