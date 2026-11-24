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

// Function: sub_00319D80
// Address: 0x319d80 - 0x319e48
void sub_00319D80_0x319d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319D80_0x319d80");
#endif

    switch (ctx->pc) {
        case 0x319da4u: goto label_319da4;
        case 0x319e30u: goto label_319e30;
        default: break;
    }

    ctx->pc = 0x319d80u;

    // 0x319d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x319d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x319d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x319d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d94: 0x26022b20  addiu       $v0, $s0, 0x2B20
    ctx->pc = 0x319d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x319d98: 0xac820144  sw          $v0, 0x144($a0)
    ctx->pc = 0x319d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
    // 0x319d9c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x319D9Cu;
    SET_GPR_U32(ctx, 31, 0x319DA4u);
    ctx->pc = 0x319DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D9Cu;
    // 0x319da0: 0x8c910144  lw          $s1, 0x144($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x319D9Cu, 0x319DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DA4u;
label_319da4:
    // 0x319da4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x319da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x319da8: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x319da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x319dac: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x319dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x319db0: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x319db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319db4: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x319db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x319db8: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x319db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x319dbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x319dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x319dc0: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x319dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319dc4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x319dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x319dc8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x319dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x319dcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x319dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x319dd0: 0x24030241  addiu       $v1, $zero, 0x241
    ctx->pc = 0x319dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x319dd4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x319dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x319dd8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x319dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x319ddc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x319ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x319de0: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x319de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x319de4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x319de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x319de8: 0x8c271680  lw          $a3, 0x1680($at)
    ctx->pc = 0x319de8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x811680u));
    // 0x319dec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x319decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x319df0: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x319df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x319df4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x319df4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x319df8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x319df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x319dfc: 0xac261680  sw          $a2, 0x1680($at)
    ctx->pc = 0x319dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x811680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x811680u, _value); } while (0);
    // 0x319e00: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x319e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x319e04: 0x8c261680  lw          $a2, 0x1680($at)
    ctx->pc = 0x319e04u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x811680u));
    // 0x319e08: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x319e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x319e0c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x319e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x319e10: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x319E10u;
    {
        const bool branch_taken_0x319e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x319E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E10u;
        // 0x319e14: 0xac251680  sw          $a1, 0x1680($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5760), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e10) {
            ctx->pc = 0x319E30u;
            goto label_319e30;
        }
    }
    ctx->pc = 0x319E18u;
    // 0x319e18: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x319e18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x319e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319e20: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319E20u;
    {
        const bool branch_taken_0x319e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x319e20) {
            ctx->pc = 0x319E30u;
            goto label_319e30;
        }
    }
    ctx->pc = 0x319E28u;
    // 0x319e28: 0xc06407c  jal         func_1901F0
    ctx->pc = 0x319E28u;
    SET_GPR_U32(ctx, 31, 0x319E30u);
    ctx->pc = 0x319E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E28u;
    // 0x319e2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901F0u, 0x319E28u, 0x319E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E30u;
label_319e30:
    // 0x319e30: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x319e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x319e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x319e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319e38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x319e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319e40: 0x3e00008  jr          $ra
    ctx->pc = 0x319E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E40u;
        // 0x319e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319E48u;
}
