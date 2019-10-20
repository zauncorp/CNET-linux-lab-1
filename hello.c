# CNET-linux-lab-1

#include <cnet.h>
char buffer[100];
void on_timer( CnetEvent event, CnetTimerID timer, CnetData data )
{
printf( "You just typed '%s'.\n", buffer );
CNET_start_timer( EV_TIMER1, 5000000, 0 );
}
void on_keyboard( CnetEvent event, CnetTimerID timer, CnetData data )
{
size_t bufferLength = 100;
CHECK( CNET_read_keyboard( buffer, &bufferLength ) );
CHECK( CNET_set_handler( EV_TIMER1, on_timer, 0 ) );
CNET_start_timer( EV_TIMER1, 5000000, 0 );

}

void on_debug1( CnetEvent event, CnetTimerID timer, CnetData data )
{
printf( "Hello from node '%s'.\n", &buffer );

}
void reboot_node( CnetEvent event, CnetTimerID timer, CnetData data
)
{
fprintf( stdout, "Hello to stdout\n" );
fprintf( stderr, "Hello to stderr\n" );
CHECK( CNET_set_handler( EV_KEYBOARDREADY, on_keyboard, 0 ) );
CNET_start_timer( EV_TIMER1, 5000000, 0 );
CHECK( CNET_set_handler( EV_DEBUG1, on_debug1, 0 ) );
CHECK( CNET_set_debug_string(EV_DEBUG1, "DEBUG") );

}
