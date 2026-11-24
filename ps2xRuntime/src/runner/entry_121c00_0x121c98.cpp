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

// Function: entry_121c00
// Address: 0x121c00 - 0x121c98
void entry_121c00_0x121c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_121c00_0x121c98");
#endif

    switch (ctx->pc) {
        case 0x121c0cu: goto label_121c0c;
        case 0x121c54u: goto label_121c54;
        case 0x121c64u: goto label_121c64;
        default: break;
    }

    ctx->pc = 0x121c00u;

    // 0x121c00: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x121c00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x121c04: 0xc04380c  jal         func_10E030
    ctx->pc = 0x121C04u;
    SET_GPR_U32(ctx, 31, 0x121C0Cu);
    ctx->pc = 0x121C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C04u;
    // 0x121c08: 0x8e645d4c  lw          $a0, 0x5D4C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E030u, 0x121C04u, 0x121C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C0Cu;
label_121c0c:
    // 0x121c0c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121C0Cu;
    {
        const bool branch_taken_0x121c0c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x121C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C0Cu;
        // 0x121c10: 0x3c070069  lui         $a3, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c0c) {
            ctx->pc = 0x121C1Cu;
            goto label_121c1c;
        }
    }
    ctx->pc = 0x121C14u;
    // 0x121c14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x121C14u;
    {
        const bool branch_taken_0x121c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C14u;
        // 0x121c18: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c14) {
            ctx->pc = 0x121C78u;
            goto label_121c78;
        }
    }
    ctx->pc = 0x121C1Cu;
label_121c1c:
    // 0x121c1c: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x121c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x121c20: 0x24e744c0  addiu       $a3, $a3, 0x44C0
    ctx->pc = 0x121c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17600));
    // 0x121c24: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x121c28: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x121c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x121c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c30: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x121c30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
    // 0x121c34: 0x25295a00  addiu       $t1, $t1, 0x5A00
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23040));
    // 0x121c38: 0x256b0dc8  addiu       $t3, $t3, 0xDC8
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3528));
    // 0x121c3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121c40: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x121c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121c44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c48: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x121c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x121c4c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x121C4Cu;
    SET_GPR_U32(ctx, 31, 0x121C54u);
    ctx->pc = 0x121C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C4Cu;
    // 0x121c50: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x121C4Cu, 0x121C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C54u;
label_121c54:
    // 0x121c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121C54u;
    {
        const bool branch_taken_0x121c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C54u;
        // 0x121c58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c54) {
            ctx->pc = 0x121C6Cu;
            goto label_121c6c;
        }
    }
    ctx->pc = 0x121C5Cu;
    // 0x121c5c: 0xc043800  jal         func_10E000
    ctx->pc = 0x121C5Cu;
    SET_GPR_U32(ctx, 31, 0x121C64u);
    ctx->pc = 0x121C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C5Cu;
    // 0x121c60: 0x8e645d4c  lw          $a0, 0x5D4C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x121C5Cu, 0x121C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C64u;
label_121c64:
    // 0x121c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121C64u;
    {
        const bool branch_taken_0x121c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C64u;
        // 0x121c68: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c64) {
            ctx->pc = 0x121C78u;
            goto label_121c78;
        }
    }
    ctx->pc = 0x121C6Cu;
label_121c6c:
    // 0x121c6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x121c70: 0xac625d48  sw          $v0, 0x5D48($v1)
    ctx->pc = 0x121c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x405D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x405D48u, _value); } while (0);
    // 0x121c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121c78:
    // 0x121c78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x121c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121c7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x121c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121c80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x121c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121c84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x121c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121c88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x121C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C8Cu;
        // 0x121c90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121C94u;
    // 0x121c94: 0x0  nop
    ctx->pc = 0x121c94u;
    // NOP
    ctx->pc = 0x121c98u;
}
