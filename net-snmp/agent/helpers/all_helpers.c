/** @name handler
 *  @{ */


/** call the initialization sequence for all handlers with init_ routines. */
void
init_helpers(void) 
{
    init_debug_helper();
    init_serialize();
    init_read_only_helper();
    init_bulk_to_next_helper();
}

/** @} */
