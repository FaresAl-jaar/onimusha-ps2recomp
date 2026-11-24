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

// Function: sub_002FFF80
// Address: 0x2fff80 - 0x30006c
void sub_002FFF80_0x2fff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFF80_0x2fff80");
#endif

    switch (ctx->pc) {
        case 0x2fffd0u: goto label_2fffd0;
        case 0x2ffff8u: goto label_2ffff8;
        case 0x300020u: goto label_300020;
        case 0x300038u: goto label_300038;
        case 0x300040u: goto label_300040;
        default: break;
    }

    ctx->pc = 0x2fff80u;

    // 0x2fff80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fff84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fff88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2fff8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fff90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2fff90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fff98: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2fff98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fffa0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fffa8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2fffa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2fffacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffb4: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x2fffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x2fffb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fffbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffc0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x2fffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x2fffc4: 0x2508ff10  addiu       $t0, $t0, -0xF0
    ctx->pc = 0x2fffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967056));
    // 0x2fffc8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x2FFFC8u;
    SET_GPR_U32(ctx, 31, 0x2FFFD0u);
    ctx->pc = 0x2FFFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFC8u;
    // 0x2fffcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x2FFFC8u, 0x2FFFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFD0u;
label_2fffd0:
    // 0x2fffd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffd4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FFFD4u;
    {
        const bool branch_taken_0x2fffd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD4u;
        // 0x2fffd8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffd4) {
            ctx->pc = 0x300040u;
            goto label_300040;
        }
    }
    ctx->pc = 0x2FFFDCu;
    // 0x2fffdc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2fffdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffe0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2fffe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffe4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2fffe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffe8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2fffe8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffff0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x2FFFF0u;
    SET_GPR_U32(ctx, 31, 0x2FFFF8u);
    ctx->pc = 0x2FFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFF0u;
    // 0x2ffff4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x2FFFF0u, 0x2FFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFF8u;
label_2ffff8:
    // 0x2ffff8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2ffff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ffffc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x2ffffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300000: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x300000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x300004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300008: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x300008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30000c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300010: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x300010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x300014: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x300014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x300018: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x300018u;
    SET_GPR_U32(ctx, 31, 0x300020u);
    ctx->pc = 0x30001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300018u;
    // 0x30001c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x300018u, 0x300020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300020u;
label_300020:
    // 0x300020: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x300020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x300024: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300028: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x300028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x30002c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x30002cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x300030: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x300030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x300034: 0x10000004  b           . + 4 + (0x4 << 2)
label_300038:
    if (ctx->pc == 0x300038u) {
        ctx->pc = 0x300038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300034u;
        // 0x300038: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30003Cu;
        goto label_fallthrough_0x300034;
    }
    ctx->pc = 0x300034u;
    {
        const bool branch_taken_0x300034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300034u;
        // 0x300038: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300034) {
            ctx->pc = 0x300048u;
            goto label_300048;
        }
    }
label_fallthrough_0x300034:
    ctx->pc = 0x30003Cu;
    // 0x30003c: 0x0  nop
    ctx->pc = 0x30003cu;
    // NOP
label_300040:
    // 0x300040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300044: 0x0  nop
    ctx->pc = 0x300044u;
    // NOP
label_300048:
    // 0x300048: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x300048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30004c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30004cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300050: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x300054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30005c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30005cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300064: 0x3e00008  jr          $ra
    ctx->pc = 0x300064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300064u;
        // 0x300068: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30006Cu;
}
