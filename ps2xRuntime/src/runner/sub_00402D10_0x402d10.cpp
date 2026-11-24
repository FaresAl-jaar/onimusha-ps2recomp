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

// Function: sub_00402D10
// Address: 0x402d10 - 0x402e40
void sub_00402D10_0x402d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402D10_0x402d10");
#endif

    switch (ctx->pc) {
        case 0x402d5cu: goto label_402d5c;
        default: break;
    }

    ctx->pc = 0x402d10u;

    // 0x402d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x402d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x402d14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x402d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x402d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x402d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d1c: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x402d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x402d20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x402D20u;
    {
        const bool branch_taken_0x402d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D20u;
        // 0x402d24: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d20) {
            ctx->pc = 0x402D40u;
            goto label_402d40;
        }
    }
    ctx->pc = 0x402D28u;
    // 0x402d28: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x402d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x402d2c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x402d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x402d30: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x402d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x402d34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x402d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x402d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x402D38u;
    {
        const bool branch_taken_0x402d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D38u;
        // 0x402d3c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d38) {
            ctx->pc = 0x402D48u;
            goto label_402d48;
        }
    }
    ctx->pc = 0x402D40u;
label_402d40:
    // 0x402d40: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x402D40u;
    {
        const bool branch_taken_0x402d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D40u;
        // 0x402d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d40) {
            ctx->pc = 0x402E30u;
            goto label_402e30;
        }
    }
    ctx->pc = 0x402D48u;
label_402d48:
    // 0x402d48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d4c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x402d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x402d50: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x402d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x402d54: 0xc01d456  jal         func_075158
    ctx->pc = 0x402D54u;
    SET_GPR_U32(ctx, 31, 0x402D5Cu);
    ctx->pc = 0x402D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D54u;
    // 0x402d58: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x402D54u, 0x402D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D5Cu;
label_402d5c:
    // 0x402d5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x402d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d60: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x402D60u;
    {
        const bool branch_taken_0x402d60 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x402d60) {
            ctx->pc = 0x402D88u;
            goto label_402d88;
        }
    }
    ctx->pc = 0x402D68u;
    // 0x402d68: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x402D68u;
    {
        const bool branch_taken_0x402d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D68u;
        // 0x402d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d68) {
            ctx->pc = 0x402E30u;
            goto label_402e30;
        }
    }
    ctx->pc = 0x402D70u;
    // 0x402d70: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x402d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
    // 0x402d74: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x402d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x402d78: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x402d78u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x402d7c: 0x40f  sync.p
    ctx->pc = 0x402d7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x402d80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x402D80u;
    {
        const bool branch_taken_0x402d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x402d80) {
            ctx->pc = 0x402DD0u;
            goto label_402dd0;
        }
    }
    ctx->pc = 0x402D88u;
label_402d88:
    // 0x402d88: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x402D88u;
    {
        const bool branch_taken_0x402d88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x402D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D88u;
        // 0x402d8c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d88) {
            ctx->pc = 0x402DD0u;
            goto label_402dd0;
        }
    }
    ctx->pc = 0x402D90u;
    // 0x402d90: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x402d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
    // 0x402d94: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x402d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x402d98: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x402d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402d9c: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x402d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
    // 0x402da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x402da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x402da4: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x402da4u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x402da8: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x402da8u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x402dac: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x402dacu;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
    // 0x402db0: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x402db0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x402db4: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x402db4u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x402db8: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x402db8u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x402dbc: 0x40f  sync.p
    ctx->pc = 0x402dbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x402dc0: 0x42000002  tlbwi
    ctx->pc = 0x402dc0u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x402dc4: 0x40f  sync.p
    ctx->pc = 0x402dc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x402dc8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x402DC8u;
    {
        const bool branch_taken_0x402dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DC8u;
        // 0x402dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402dc8) {
            ctx->pc = 0x402E30u;
            goto label_402e30;
        }
    }
    ctx->pc = 0x402DD0u;
label_402dd0:
    // 0x402dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x402dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x402dd4: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x402dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x402dd8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x402dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x402ddc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x402ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x402de0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x402de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x402de4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x402de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x402de8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x402de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x402dec: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x402decu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x402df0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x402df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x402df4: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x402df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x402df8: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x402df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x402dfc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x402dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x402e00: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x402e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x402e04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x402e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x402e08: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x402e08u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x402e0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x402e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e10: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x402e10u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
    // 0x402e14: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x402e14u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x402e18: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x402e18u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
    // 0x402e1c: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x402e1cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
    // 0x402e20: 0x40f  sync.p
    ctx->pc = 0x402e20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x402e24: 0x42000002  tlbwi
    ctx->pc = 0x402e24u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x402e28: 0x40f  sync.p
    ctx->pc = 0x402e28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x402e2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x402e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_402e30:
    // 0x402e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x402e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402e34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x402e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402e38: 0x3e00008  jr          $ra
    ctx->pc = 0x402E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E38u;
        // 0x402e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402E40u;
}
