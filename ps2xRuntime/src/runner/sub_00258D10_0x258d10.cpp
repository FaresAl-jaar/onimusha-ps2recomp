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

// Function: sub_00258D10
// Address: 0x258d10 - 0x258e4c
void sub_00258D10_0x258d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258D10_0x258d10");
#endif

    switch (ctx->pc) {
        case 0x258d5cu: goto label_258d5c;
        case 0x258d64u: goto label_258d64;
        case 0x258d74u: goto label_258d74;
        default: break;
    }

    ctx->pc = 0x258d10u;

    // 0x258d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x258d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x258d14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x258d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x258d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x258d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x258d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x258d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x258d20: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x258d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x258d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x258d28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x258d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258d30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x258d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258d38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x258d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258d40: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x258d44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x258d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d48: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x258d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d4c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x258d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x258d54: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x258D54u;
    SET_GPR_U32(ctx, 31, 0x258D5Cu);
    ctx->pc = 0x258D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D54u;
    // 0x258d58: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x258D54u, 0x258D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D5Cu;
label_258d5c:
    // 0x258d5c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x258D5Cu;
    SET_GPR_U32(ctx, 31, 0x258D64u);
    ctx->pc = 0x258D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D5Cu;
    // 0x258d60: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x258D5Cu, 0x258D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D64u;
label_258d64:
    // 0x258d64: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x258D64u;
    {
        const bool branch_taken_0x258d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d64) {
            ctx->pc = 0x258E28u;
            goto label_258e28;
        }
    }
    ctx->pc = 0x258D6Cu;
    // 0x258d6c: 0xc0962a4  jal         func_258A90
    ctx->pc = 0x258D6Cu;
    SET_GPR_U32(ctx, 31, 0x258D74u);
    ctx->pc = 0x258A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A90u, 0x258D6Cu, 0x258D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D74u;
label_258d74:
    // 0x258d74: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x258D74u;
    {
        const bool branch_taken_0x258d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D74u;
        // 0x258d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d74) {
            ctx->pc = 0x258E28u;
            goto label_258e28;
        }
    }
    ctx->pc = 0x258D7Cu;
    // 0x258d7c: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x258d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x258d80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x258d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x258d84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258d88: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x258d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x258d8c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x258d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x258d90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x258d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x258d94: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x258d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x258d98: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x258d98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x258d9c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x258d9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x258da0: 0xa4500006  sh          $s0, 0x6($v0)
    ctx->pc = 0x258da0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x258da4: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x258da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x258da8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x258da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x258dac: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x258dacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x258db0: 0x34866667  ori         $a2, $a0, 0x6667
    ctx->pc = 0x258db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x258db4: 0x84440006  lh          $a0, 0x6($v0)
    ctx->pc = 0x258db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x258db8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x258db8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x258dbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x258dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x258dc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x258dc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x258dc4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x258dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x258dc8: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x258dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x258dcc: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x258dccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x258dd0: 0x0  nop
    ctx->pc = 0x258dd0u;
    // NOP
    // 0x258dd4: 0x2010  mfhi        $a0
    ctx->pc = 0x258dd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x258dd8: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x258dd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x258ddc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x258ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x258de0: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x258de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x258de4: 0x84450006  lh          $a1, 0x6($v0)
    ctx->pc = 0x258de4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x258de8: 0x70a31818  mult1       $v1, $a1, $v1
    ctx->pc = 0x258de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x258dec: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x258decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x258df0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x258df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x258df4: 0x0  nop
    ctx->pc = 0x258df4u;
    // NOP
    // 0x258df8: 0x1810  mfhi        $v1
    ctx->pc = 0x258df8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x258dfc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x258dfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x258e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258e04: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x258e08: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x258e08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x258e0c: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x258e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258e10: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x258e10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x258e14: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x258e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x258e18: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x258e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x258e1c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x258e1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x258e20: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x258e20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x258e24: 0x0  nop
    ctx->pc = 0x258e24u;
    // NOP
label_258e28:
    // 0x258e28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x258e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x258e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e44: 0x3e00008  jr          $ra
    ctx->pc = 0x258E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E44u;
        // 0x258e48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E4Cu;
}
