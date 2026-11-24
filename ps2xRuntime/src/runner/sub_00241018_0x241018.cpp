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

// Function: sub_00241018
// Address: 0x241018 - 0x241208
void sub_00241018_0x241018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241018_0x241018");
#endif

    switch (ctx->pc) {
        case 0x241038u: goto label_241038;
        default: break;
    }

    ctx->pc = 0x241018u;

    // 0x241018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24101c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24101cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241024: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24102c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241034: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241038:
    // 0x241038: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24103c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24103cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241040: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241044: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241048: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24104c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241050: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241054: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241058: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24105c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241060: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241064: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241068: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24106c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24106cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241070: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241074: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241078: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24107c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241080: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241084: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241088: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24108c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24108cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241090: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241094: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241098: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24109c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24109cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2410a0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x2410a0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2410a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2410a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2410ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2410acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2410b0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2410b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2410b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2410b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2410b8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x2410b8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2410bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2410bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2410c0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2410c4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2410c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2410c8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2410cc: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2410d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2410d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2410d8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2410d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2410dc: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x2410dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2410e0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x2410e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2410e4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x2410e4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2410e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2410ec: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2410f0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2410f4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2410f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2410f8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2410fc: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241100: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241104: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241108: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241108u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24110c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24110cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x241110: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241114: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241118: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24111c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241120: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241120u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241124: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241128: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24112c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24112cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241130: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241134: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241138: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241138u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24113c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24113cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241140: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241144: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241144u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241148: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24114c: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x24114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x241150: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241150u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241154: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241158: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24115c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241160: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241164: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241168: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241168u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x24116c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x24116cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241170: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241170u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241174: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241178: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24117c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x24117cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241180: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241184: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241188: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241188u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24118c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241190: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241194: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241198: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241198u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24119c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24119cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2411a0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x2411a4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2411a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2411a8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2411a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2411ac: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2411b0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2411b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2411b4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x2411b4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2411b8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x2411b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x2411bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2411BCu;
    {
        const bool branch_taken_0x2411bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411BCu;
        // 0x2411c0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411bc) {
            ctx->pc = 0x2411D0u;
            goto label_2411d0;
        }
    }
    ctx->pc = 0x2411C4u;
    // 0x2411c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2411C4u;
    {
        const bool branch_taken_0x2411c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411C4u;
        // 0x2411c8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411c4) {
            ctx->pc = 0x2411E4u;
            goto label_2411e4;
        }
    }
    ctx->pc = 0x2411CCu;
    // 0x2411cc: 0x0  nop
    ctx->pc = 0x2411ccu;
    // NOP
label_2411d0:
    // 0x2411d0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x2411d4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x2411d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2411d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2411D8u;
    {
        const bool branch_taken_0x2411d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411d8) {
            ctx->pc = 0x2411DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2411D8u;
            // 0x2411dc: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2411E4u;
            goto label_2411e4;
        }
    }
    ctx->pc = 0x2411E0u;
    // 0x2411e0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2411e4:
    // 0x2411e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2411e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2411e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2411ec: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2411ECu;
    {
        const bool branch_taken_0x2411ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411ECu;
        // 0x2411f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411ec) {
            ctx->pc = 0x241038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241038;
        }
    }
    ctx->pc = 0x2411F4u;
    // 0x2411f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2411f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2411f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2411f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2411fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2411fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241200: 0x3e00008  jr          $ra
    ctx->pc = 0x241200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241200u;
        // 0x241204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241208u;
}
