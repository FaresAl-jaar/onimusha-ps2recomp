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

// Function: sub_00137E30
// Address: 0x137e30 - 0x137f1c
void sub_00137E30_0x137e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E30_0x137e30");
#endif

    switch (ctx->pc) {
        case 0x137e94u: goto label_137e94;
        case 0x137ea8u: goto label_137ea8;
        case 0x137ed8u: goto label_137ed8;
        default: break;
    }

    ctx->pc = 0x137e30u;

    // 0x137e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x137e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x137e34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x137e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137e38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137e3c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137e40: 0x24504340  addiu       $s0, $v0, 0x4340
    ctx->pc = 0x137e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
    // 0x137e44: 0xac444340  sw          $a0, 0x4340($v0)
    ctx->pc = 0x137e44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x137e48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x137e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137e4c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x137e50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x137e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x137e54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x137e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x137e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x137e5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x137e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e60: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x137e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4344u, _value); } while (0);
    // 0x137e64: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x137e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x137e68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x137e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137e74: 0x34a5131a  ori         $a1, $a1, 0x131A
    ctx->pc = 0x137e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4890);
    // 0x137e78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x137e7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x137e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4348u, _value); } while (0);
    // 0x137e84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x137e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e88: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137e88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137e8c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137E8Cu;
    SET_GPR_U32(ctx, 31, 0x137E94u);
    ctx->pc = 0x137E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E8Cu;
    // 0x137e90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137E8Cu, 0x137E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E94u;
label_137e94:
    // 0x137e94: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137E94u;
    {
        const bool branch_taken_0x137e94 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137e94) {
            ctx->pc = 0x137E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E94u;
            // 0x137e98: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137EB0u;
            goto label_137eb0;
        }
    }
    ctx->pc = 0x137E9Cu;
    // 0x137e9c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137ea0: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137EA0u;
    SET_GPR_U32(ctx, 31, 0x137EA8u);
    ctx->pc = 0x137EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EA0u;
    // 0x137ea4: 0x248448c8  addiu       $a0, $a0, 0x48C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137EA0u, 0x137EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EA8u;
label_137ea8:
    // 0x137ea8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x137EA8u;
    {
        const bool branch_taken_0x137ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EA8u;
        // 0x137eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ea8) {
            ctx->pc = 0x137F04u;
            goto label_137f04;
        }
    }
    ctx->pc = 0x137EB0u;
label_137eb0:
    // 0x137eb0: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x137EB0u;
    {
        const bool branch_taken_0x137eb0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x137EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EB0u;
        // 0x137eb4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137eb0) {
            ctx->pc = 0x137F08u;
            goto label_137f08;
        }
    }
    ctx->pc = 0x137EB8u;
    // 0x137eb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137ebc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x137ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x137ec0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137ec4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x137EC4u;
    {
        const bool branch_taken_0x137ec4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x137EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EC4u;
        // 0x137ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ec4) {
            ctx->pc = 0x137F00u;
            goto label_137f00;
        }
    }
    ctx->pc = 0x137ECCu;
    // 0x137ecc: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x137eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137ed0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137ed4: 0x0  nop
    ctx->pc = 0x137ed4u;
    // NOP
label_137ed8:
    // 0x137ed8: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x137edc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137ee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137ee4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x137ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137ee8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137eec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137ef0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137EF0u;
    {
        const bool branch_taken_0x137ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EF0u;
        // 0x137ef4: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ef0) {
            ctx->pc = 0x137ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ed8;
        }
    }
    ctx->pc = 0x137EF8u;
    // 0x137ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137EF8u;
    {
        const bool branch_taken_0x137ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EF8u;
        // 0x137efc: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ef8) {
            ctx->pc = 0x137F04u;
            goto label_137f04;
        }
    }
    ctx->pc = 0x137F00u;
label_137f00:
    // 0x137f00: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_137f04:
    // 0x137f04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_137f08:
    // 0x137f08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x137f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x137f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f14: 0x3e00008  jr          $ra
    ctx->pc = 0x137F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F14u;
        // 0x137f18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F1Cu;
}
