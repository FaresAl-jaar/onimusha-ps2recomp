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

// Function: sub_00240A48
// Address: 0x240a48 - 0x240c38
void sub_00240A48_0x240a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240A48_0x240a48");
#endif

    switch (ctx->pc) {
        case 0x240a68u: goto label_240a68;
        case 0x240c00u: goto label_240c00;
        default: break;
    }

    ctx->pc = 0x240a48u;

    // 0x240a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240a4c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x240a4cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240a54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x240a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240a64: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_240a68:
    // 0x240a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x240a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a6c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240a70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240a74: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x240a78: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240a7c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240a80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240a84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240a88: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240a88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240a8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240a8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240a90: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x240a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x240a94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240a98: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240a9c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240aa0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240aa4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x240aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240aa8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240aa8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240aac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ab0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ab4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240ab8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x240ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240abc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ac0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ac4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ac8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240acc: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240ad0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ad4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ad8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240adc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240ae0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240ae4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ae8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240aec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240aecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240af0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240af4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x240af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x240af8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240af8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240afc: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x240afcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b00: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240b08: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b0c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x240b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x240b10: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x240b10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x240b14: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x240b14u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b1c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240b20: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b24: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x240b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x240b28: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240b2c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b30: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b34: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240b38: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b3c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x240b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x240b40: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240b40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240b44: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x240b44u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b4c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240b50: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b54: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x240b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x240b58: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x240b58u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b5c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b60: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240b68: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x240b6c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x240b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x240b70: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b74: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b7c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240b80: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x240b84: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x240b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x240b88: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240b8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240b8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240b90: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240b94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240b98: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x240b98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x240b9c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240ba0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240ba0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ba4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240ba4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ba8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240bac: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x240bacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x240bb0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240bb4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x240bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240bb8: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x240bb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x240bbc: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x240bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x240bc0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x240bc4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x240bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240bc8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x240bcc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x240bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240bd0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x240bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x240bd4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x240bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x240bd8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240bdc: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240be0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240be4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x240be4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x240be8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x240be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x240bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240BECu;
    {
        const bool branch_taken_0x240bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BECu;
        // 0x240bf0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bec) {
            ctx->pc = 0x240C00u;
            goto label_240c00;
        }
    }
    ctx->pc = 0x240BF4u;
    // 0x240bf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240BF4u;
    {
        const bool branch_taken_0x240bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BF4u;
        // 0x240bf8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bf4) {
            ctx->pc = 0x240C14u;
            goto label_240c14;
        }
    }
    ctx->pc = 0x240BFCu;
    // 0x240bfc: 0x0  nop
    ctx->pc = 0x240bfcu;
    // NOP
label_240c00:
    // 0x240c00: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x240c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x240c04: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x240c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240c08: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x240C08u;
    {
        const bool branch_taken_0x240c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c08) {
            ctx->pc = 0x240C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240C08u;
            // 0x240c0c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240C14u;
            goto label_240c14;
        }
    }
    ctx->pc = 0x240C10u;
    // 0x240c10: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x240c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_240c14:
    // 0x240c14: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x240c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x240c18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x240c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x240c1c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x240C1Cu;
    {
        const bool branch_taken_0x240c1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C1Cu;
        // 0x240c20: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c1c) {
            ctx->pc = 0x240A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240a68;
        }
    }
    ctx->pc = 0x240C24u;
    // 0x240c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240c30: 0x3e00008  jr          $ra
    ctx->pc = 0x240C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C30u;
        // 0x240c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C38u;
}
