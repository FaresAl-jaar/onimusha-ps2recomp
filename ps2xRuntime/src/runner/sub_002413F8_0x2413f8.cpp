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

// Function: sub_002413F8
// Address: 0x2413f8 - 0x2415e8
void sub_002413F8_0x2413f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002413F8_0x2413f8");
#endif

    switch (ctx->pc) {
        case 0x241418u: goto label_241418;
        default: break;
    }

    ctx->pc = 0x2413f8u;

    // 0x2413f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2413f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2413fc: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2413fcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241404: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24140c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24140cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241414: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241418:
    // 0x241418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24141c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24141cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241420: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241424: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241428: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241428u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24142c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241430: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241434: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241438: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24143c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241440: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241444: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241448: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24144c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241450: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241454: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241458: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24145c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241460: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241464: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241468: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24146c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241470: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241474: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241478: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24147c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24147cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241480: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241484: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241484u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241488: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24148c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241490: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241494: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241498: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24149c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2414a0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2414a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2414a4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2414a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2414a8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2414ac: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x2414acu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2414b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2414b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2414b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2414b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2414b8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2414bc: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x2414bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2414c0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x2414c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2414c4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2414c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2414c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2414cc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2414ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2414d0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2414d4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2414d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2414d8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2414d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2414dc: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x2414dcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2414e0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2414e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2414e8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2414e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2414ec: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x2414ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2414f0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2414f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2414f4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2414f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2414f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2414fc: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x2414fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x241500: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241500u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241504: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241508: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241508u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24150c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24150cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241510: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241514: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241518: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24151c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24151cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241520: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241524: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241524u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241528: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24152c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241530: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241534: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241538: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24153c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241540: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241544: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241548: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x24154c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x24154cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241550: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241550u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241554: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241554u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241558: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24155c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241560: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241564: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241568: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24156c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24156cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241570: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241570u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241574: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241578: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24157c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24157cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241580: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241584: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241588: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241588u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24158c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241590: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241594: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241594u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241598: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24159c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24159Cu;
    {
        const bool branch_taken_0x24159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24159Cu;
        // 0x2415a0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24159c) {
            ctx->pc = 0x2415B0u;
            goto label_2415b0;
        }
    }
    ctx->pc = 0x2415A4u;
    // 0x2415a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2415A4u;
    {
        const bool branch_taken_0x2415a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415A4u;
        // 0x2415a8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415a4) {
            ctx->pc = 0x2415C4u;
            goto label_2415c4;
        }
    }
    ctx->pc = 0x2415ACu;
    // 0x2415ac: 0x0  nop
    ctx->pc = 0x2415acu;
    // NOP
label_2415b0:
    // 0x2415b0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x2415b4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x2415b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2415b8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2415B8u;
    {
        const bool branch_taken_0x2415b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415b8) {
            ctx->pc = 0x2415BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415B8u;
            // 0x2415bc: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415C4u;
            goto label_2415c4;
        }
    }
    ctx->pc = 0x2415C0u;
    // 0x2415c0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2415c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2415c4:
    // 0x2415c4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2415c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2415c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2415cc: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2415CCu;
    {
        const bool branch_taken_0x2415cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2415D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415CCu;
        // 0x2415d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415cc) {
            ctx->pc = 0x241418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241418;
        }
    }
    ctx->pc = 0x2415D4u;
    // 0x2415d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2415d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2415d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2415dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2415dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2415e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2415E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2415E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415E0u;
        // 0x2415e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2415E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2415E8u;
}
