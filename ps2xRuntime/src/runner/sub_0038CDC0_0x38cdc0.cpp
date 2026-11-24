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

// Function: sub_0038CDC0
// Address: 0x38cdc0 - 0x38cec0
void sub_0038CDC0_0x38cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CDC0_0x38cdc0");
#endif

    switch (ctx->pc) {
        case 0x38ce18u: goto label_38ce18;
        case 0x38ce40u: goto label_38ce40;
        case 0x38ce68u: goto label_38ce68;
        default: break;
    }

    ctx->pc = 0x38cdc0u;

    // 0x38cdc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38cdc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x38cdc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x38cdcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38cdd0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x38cdd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38cdd8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38cdd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38cde0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38cde0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cde4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38cde8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38cde8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x38cdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38cdf4: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x38cdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x38cdf8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x38cdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ce00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38ce04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce08: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x38ce08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x38ce0c: 0x2508cd50  addiu       $t0, $t0, -0x32B0
    ctx->pc = 0x38ce0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954320));
    // 0x38ce10: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x38CE10u;
    SET_GPR_U32(ctx, 31, 0x38CE18u);
    ctx->pc = 0x38CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CE10u;
    // 0x38ce14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x38CE10u, 0x38CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CE18u;
label_38ce18:
    // 0x38ce18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38ce18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce1c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x38CE1Cu;
    {
        const bool branch_taken_0x38ce1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE1Cu;
        // 0x38ce20: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce1c) {
            ctx->pc = 0x38CE90u;
            goto label_38ce90;
        }
    }
    ctx->pc = 0x38CE24u;
    // 0x38ce24: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x38ce24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce28: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x38ce28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce2c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x38ce2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x38ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38ce38: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x38CE38u;
    SET_GPR_U32(ctx, 31, 0x38CE40u);
    ctx->pc = 0x38CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CE38u;
    // 0x38ce3c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x38CE38u, 0x38CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CE40u;
label_38ce40:
    // 0x38ce40: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x38ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x38ce44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x38ce48: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x38ce48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ce4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce50: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x38ce50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x38ce54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ce58: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x38ce58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x38ce5c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x38ce5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ce60: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x38CE60u;
    SET_GPR_U32(ctx, 31, 0x38CE68u);
    ctx->pc = 0x38CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CE60u;
    // 0x38ce64: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x38CE60u, 0x38CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CE68u;
label_38ce68:
    // 0x38ce68: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x38ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x38ce6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x38ce70: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x38ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x38ce74: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x38ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x38ce78: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x38ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ce7c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x38ce7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38ce80: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x38ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x38ce84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38CE84u;
    {
        const bool branch_taken_0x38ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE84u;
        // 0x38ce88: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce84) {
            ctx->pc = 0x38CE98u;
            goto label_38ce98;
        }
    }
    ctx->pc = 0x38CE8Cu;
    // 0x38ce8c: 0x0  nop
    ctx->pc = 0x38ce8cu;
    // NOP
label_38ce90:
    // 0x38ce90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38ce90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ce94: 0x0  nop
    ctx->pc = 0x38ce94u;
    // NOP
label_38ce98:
    // 0x38ce98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38ce98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38ce9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38ce9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38cea0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38cea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38cea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38cea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38cea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ceac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38ceacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ceb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ceb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ceb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ceb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x38CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEB8u;
        // 0x38cebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CEC0u;
}
