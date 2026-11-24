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

// Function: entry_11fc18
// Address: 0x11fc18 - 0x11fcc8
void entry_11fc18_0x11fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11fc18_0x11fcc8");
#endif

    ctx->pc = 0x11fc18u;

    // 0x11fc18: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x11fc1c: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11FC1Cu;
    {
        const bool branch_taken_0x11fc1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC1Cu;
        // 0x11fc20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc1c) {
            ctx->pc = 0x11FCB8u;
            goto label_11fcb8;
        }
    }
    ctx->pc = 0x11FC24u;
    // 0x11fc24: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x11fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x11fc28: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11FC28u;
    {
        const bool branch_taken_0x11fc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC28u;
        // 0x11fc2c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc28) {
            ctx->pc = 0x11FCB0u;
            goto label_11fcb0;
        }
    }
    ctx->pc = 0x11FC30u;
    // 0x11fc30: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x11fc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x11fc34: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11FC34u;
    {
        const bool branch_taken_0x11fc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC34u;
        // 0x11fc38: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc34) {
            ctx->pc = 0x11FCA8u;
            goto label_11fca8;
        }
    }
    ctx->pc = 0x11FC3Cu;
    // 0x11fc3c: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x11fc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x11fc40: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11FC40u;
    {
        const bool branch_taken_0x11fc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC40u;
        // 0x11fc44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc40) {
            ctx->pc = 0x11FCA0u;
            goto label_11fca0;
        }
    }
    ctx->pc = 0x11FC48u;
    // 0x11fc48: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x11fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x11fc4c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11FC4Cu;
    {
        const bool branch_taken_0x11fc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC4Cu;
        // 0x11fc50: 0x34028013  ori         $v0, $zero, 0x8013 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc4c) {
            ctx->pc = 0x11FC90u;
            goto label_11fc90;
        }
    }
    ctx->pc = 0x11FC54u;
    // 0x11fc54: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11FC54u;
    {
        const bool branch_taken_0x11fc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC54u;
        // 0x11fc58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc54) {
            ctx->pc = 0x11FC88u;
            goto label_11fc88;
        }
    }
    ctx->pc = 0x11FC5Cu;
    // 0x11fc5c: 0x34028012  ori         $v0, $zero, 0x8012
    ctx->pc = 0x11fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x11fc60: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FC60u;
    {
        const bool branch_taken_0x11fc60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC60u;
        // 0x11fc64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc60) {
            ctx->pc = 0x11FC80u;
            goto label_11fc80;
        }
    }
    ctx->pc = 0x11FC68u;
    // 0x11fc68: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x11fc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x11fc6c: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FC6Cu;
    {
        const bool branch_taken_0x11fc6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fc6c) {
            ctx->pc = 0x11FC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC6Cu;
            // 0x11fc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FC74u;
    // 0x11fc74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11fc78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11FC78u;
    {
        const bool branch_taken_0x11fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC78u;
        // 0x11fc7c: 0x24425d00  addiu       $v0, $v0, 0x5D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc78) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FC80u;
label_11fc80:
    // 0x11fc80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11FC80u;
    {
        const bool branch_taken_0x11fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC80u;
        // 0x11fc84: 0x244257c0  addiu       $v0, $v0, 0x57C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc80) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FC88u;
label_11fc88:
    // 0x11fc88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11FC88u;
    {
        const bool branch_taken_0x11fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC88u;
        // 0x11fc8c: 0x24425380  addiu       $v0, $v0, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc88) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FC90u;
label_11fc90:
    // 0x11fc90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11fc94: 0x8c4241ac  lw          $v0, 0x41AC($v0)
    ctx->pc = 0x11fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4041ACu));
    // 0x11fc98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11FC98u;
    {
        const bool branch_taken_0x11fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC98u;
        // 0x11fc9c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc98) {
            ctx->pc = 0x11FCC0u;
            goto label_11fcc0;
        }
    }
    ctx->pc = 0x11FCA0u;
label_11fca0:
    // 0x11fca0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11FCA0u;
    {
        const bool branch_taken_0x11fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA0u;
        // 0x11fca4: 0x24425350  addiu       $v0, $v0, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fca0) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FCA8u;
label_11fca8:
    // 0x11fca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FCA8u;
    {
        const bool branch_taken_0x11fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA8u;
        // 0x11fcac: 0x24424280  addiu       $v0, $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fca8) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FCB0u;
label_11fcb0:
    // 0x11fcb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FCB0u;
    {
        const bool branch_taken_0x11fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB0u;
        // 0x11fcb4: 0x24424200  addiu       $v0, $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb0) {
            ctx->pc = 0x11FCBCu;
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FCB8u;
label_11fcb8:
    // 0x11fcb8: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x11fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
label_11fcbc:
    // 0x11fcbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11fcc0:
    // 0x11fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC0u;
        // 0x11fcc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCC8u;
}
