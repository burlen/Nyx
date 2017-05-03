
#include "Nyx.H"
#include "Nyx_error_F.H"

using namespace amrex;

void
Nyx::error_setup()
{
    err_list.add("total_particle_count", 1, ErrorRec::Standard,
                 BL_FORT_PROC_CALL(TAG_PART_CNT_ERR, tag_part_cnt_err));
}