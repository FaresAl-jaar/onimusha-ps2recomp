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

// Function: sub_00241F98
// Address: 0x241f98 - 0x242188
void sub_00241F98_0x241f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241F98_0x241f98");
#endif

    switch (ctx->pc) {
        case 0x241fb8u: goto label_241fb8;
        default: break;
    }

    ctx->pc = 0x241f98u;

    // 0x241f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241f9c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x241f9cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241fa4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241fac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241fb4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241fb8:
    // 0x241fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fbc: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241fbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241fc0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241fc4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241fc8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241fc8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241fcc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241fd0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241fd4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241fd8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241fdc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241fdcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241fe0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241fe4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241fe8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241fec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241fecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ff0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241ff4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241ff8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241ff8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ffc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ffcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242000: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242004: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242008: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x242008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24200c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242010: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242014: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242018: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x242018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x24201c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24201cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x242020: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x242020u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242024: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242024u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242028: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24202c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242030: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x242030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x242034: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242038: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x242038u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24203c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242040: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242044: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x242044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x242048: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24204c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24204cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242050: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242054: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242058: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24205c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24205cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x242060: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x242060u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x242064: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x242064u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242068: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24206c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242070: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242074: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x242074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x242078: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24207c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242080: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242084: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242088: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24208c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24208cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x242090: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x242094: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242098: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24209c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2420a0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2420a4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x2420a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2420a8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2420ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2420b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2420b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2420b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2420b8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x2420b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x2420bc: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x2420bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2420c0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2420c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2420c4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2420c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2420c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2420cc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2420ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2420d0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x2420d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2420d4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2420d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2420d8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2420d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2420dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2420dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2420e0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2420e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2420e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2420e8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x2420e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x2420ec: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2420ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2420f0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2420f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2420f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2420f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2420f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2420fc: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x242100: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x242100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x242104: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242108: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x242108u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24210c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x242110: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x242114: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x242114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x242118: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x242118u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24211c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24211cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242120: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x242120u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x242124: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x242124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x242128: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242128u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24212c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24212cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x242130: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242130u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x242134: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x242134u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x242138: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x242138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24213c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24213Cu;
    {
        const bool branch_taken_0x24213c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24213Cu;
        // 0x242140: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24213c) {
            ctx->pc = 0x242150u;
            goto label_242150;
        }
    }
    ctx->pc = 0x242144u;
    // 0x242144: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242144u;
    {
        const bool branch_taken_0x242144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242144u;
        // 0x242148: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242144) {
            ctx->pc = 0x242164u;
            goto label_242164;
        }
    }
    ctx->pc = 0x24214Cu;
    // 0x24214c: 0x0  nop
    ctx->pc = 0x24214cu;
    // NOP
label_242150:
    // 0x242150: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x242154: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x242154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x242158: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x242158u;
    {
        const bool branch_taken_0x242158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242158) {
            ctx->pc = 0x24215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242158u;
            // 0x24215c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242164u;
            goto label_242164;
        }
    }
    ctx->pc = 0x242160u;
    // 0x242160: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_242164:
    // 0x242164: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x242164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x242168: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24216c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x24216Cu;
    {
        const bool branch_taken_0x24216c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24216Cu;
        // 0x242170: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24216c) {
            ctx->pc = 0x241FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241fb8;
        }
    }
    ctx->pc = 0x242174u;
    // 0x242174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24217c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24217cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242180: 0x3e00008  jr          $ra
    ctx->pc = 0x242180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242180u;
        // 0x242184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242188u;
}
