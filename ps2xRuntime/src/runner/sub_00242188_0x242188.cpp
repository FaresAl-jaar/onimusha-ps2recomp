#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242188
// Address: 0x242188 - 0x242378
void sub_00242188_0x242188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242188_0x242188");
#endif

    switch (ctx->pc) {
        case 0x2421a8u: goto label_2421a8;
        default: break;
    }

    ctx->pc = 0x242188u;

    // 0x242188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24218c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24218cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242194: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24219c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24219cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2421a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2421a4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x2421a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2421a8:
    // 0x2421a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2421a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421ac: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2421b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2421b4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x2421b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2421b8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2421bc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2421c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2421c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2421c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2421c8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2421cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2421d0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x2421d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x2421d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2421d8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2421dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2421dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2421e0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2421e4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2421e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2421e8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2421e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2421ec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2421ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2421f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2421f4: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x2421f8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x2421f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2421fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242200: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242204: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242204u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242208: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24220c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24220cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x242210: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x242210u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242214: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242214u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242218: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24221c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242220: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x242220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x242224: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242228: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x242228u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24222c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24222cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242230: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242234: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x242234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x242238: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242238u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24223c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24223cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242240: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242244: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242248: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242248u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24224c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24224cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x242250: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x242254: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242258: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24225c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242260: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242260u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242264: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x242264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x242268: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x242268u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24226c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x24226cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242270: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242274: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242278: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24227c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24227cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x242280: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x242284: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242288: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24228c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242290: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242294: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x242294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x242298: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x242298u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24229c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24229cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2422a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2422a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2422a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2422a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2422a8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x2422a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x2422ac: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x2422acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2422b0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2422b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2422b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2422b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2422b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2422bc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2422bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2422c0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x2422c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2422c4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2422c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2422c8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2422c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2422cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2422ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2422d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2422d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2422d8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x2422d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x2422dc: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2422dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2422e0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2422e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2422e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2422e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2422e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2422e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2422ec: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x2422ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x2422f0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2422f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2422f4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x2422f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2422f8: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2422fc: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x2422fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x242300: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x242304: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x242304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x242308: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x242308u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24230c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24230cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242310: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x242310u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x242314: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x242314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x242318: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24231c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x242320: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x242324: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x242324u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x242328: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x242328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24232c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24232Cu;
    {
        const bool branch_taken_0x24232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24232Cu;
        // 0x242330: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24232c) {
            ctx->pc = 0x242340u;
            goto label_242340;
        }
    }
    ctx->pc = 0x242334u;
    // 0x242334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242334u;
    {
        const bool branch_taken_0x242334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242334u;
        // 0x242338: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242334) {
            ctx->pc = 0x242354u;
            goto label_242354;
        }
    }
    ctx->pc = 0x24233Cu;
    // 0x24233c: 0x0  nop
    ctx->pc = 0x24233cu;
    // NOP
label_242340:
    // 0x242340: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x242340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x242344: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x242344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x242348: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x242348u;
    {
        const bool branch_taken_0x242348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242348) {
            ctx->pc = 0x24234Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242348u;
            // 0x24234c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242354u;
            goto label_242354;
        }
    }
    ctx->pc = 0x242350u;
    // 0x242350: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x242350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_242354:
    // 0x242354: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x242354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x242358: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x242358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24235c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x24235Cu;
    {
        const bool branch_taken_0x24235c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24235Cu;
        // 0x242360: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24235c) {
            ctx->pc = 0x2421A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2421a8;
        }
    }
    ctx->pc = 0x242364u;
    // 0x242364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24236c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242370: 0x3e00008  jr          $ra
    ctx->pc = 0x242370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242370u;
        // 0x242374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242378u;
}
