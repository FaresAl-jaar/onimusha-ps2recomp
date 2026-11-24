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

// Function: sub_0012C150
// Address: 0x12c150 - 0x12c260
void sub_0012C150_0x12c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C150_0x12c150");
#endif

    switch (ctx->pc) {
        case 0x12c190u: goto label_12c190;
        case 0x12c1d4u: goto label_12c1d4;
        case 0x12c210u: goto label_12c210;
        case 0x12c238u: goto label_12c238;
        default: break;
    }

    ctx->pc = 0x12c150u;

    // 0x12c150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c160: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12c164: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C164u;
    {
        const bool branch_taken_0x12c164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c164) {
            ctx->pc = 0x12C168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C164u;
            // 0x12c168: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C180u;
            goto label_12c180;
        }
    }
    ctx->pc = 0x12C16Cu;
    // 0x12c16c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x12c16cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x12c170: 0x8dee6048  lw          $t6, 0x6048($t7)
    ctx->pc = 0x12c170u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x406048u));
    // 0x12c174: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x12c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x12c178: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c17c: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12c17cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12c180:
    // 0x12c180: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C180u;
            // 0x12c184: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C194u;
            goto label_12c194;
        }
    }
    ctx->pc = 0x12C188u;
    // 0x12c188: 0xc048f16  jal         func_123C58
    ctx->pc = 0x12C188u;
    SET_GPR_U32(ctx, 31, 0x12C190u);
    ctx->pc = 0x123C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C58u, 0x12C188u, 0x12C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C190u;
label_12c190:
    // 0x12c190: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12c190u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c194:
    // 0x12c194: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12c194u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12c198: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12C198u;
    {
        const bool branch_taken_0x12c198 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c198) {
            ctx->pc = 0x12C19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C198u;
            // 0x12c19c: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C200u;
            goto label_12c200;
        }
    }
    ctx->pc = 0x12C1A0u;
    // 0x12c1a0: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x12c1a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x12c1a4: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x12C1A4u;
    {
        const bool branch_taken_0x12c1a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1A4u;
        // 0x12c1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1a4) {
            ctx->pc = 0x12C23Cu;
            goto label_12c23c;
        }
    }
    ctx->pc = 0x12C1ACu;
    // 0x12c1ac: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12c1acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x12c1b0: 0x51e00011  beql        $t7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C1B0u;
    {
        const bool branch_taken_0x12c1b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c1b0) {
            ctx->pc = 0x12C1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C1B0u;
            // 0x12c1b4: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C1F8u;
            goto label_12c1f8;
        }
    }
    ctx->pc = 0x12C1B8u;
    // 0x12c1b8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12c1bc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C1BCu;
    {
        const bool branch_taken_0x12c1bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1BCu;
        // 0x12c1c0: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1bc) {
            ctx->pc = 0x12C1DCu;
            goto label_12c1dc;
        }
    }
    ctx->pc = 0x12C1C4u;
    // 0x12c1c4: 0x50af0005  beql        $a1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C1C4u;
    {
        const bool branch_taken_0x12c1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x12c1c4) {
            ctx->pc = 0x12C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C1C4u;
            // 0x12c1c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C1DCu;
            goto label_12c1dc;
        }
    }
    ctx->pc = 0x12C1CCu;
    // 0x12c1cc: 0xc048f7a  jal         func_123DE8
    ctx->pc = 0x12C1CCu;
    SET_GPR_U32(ctx, 31, 0x12C1D4u);
    ctx->pc = 0x12C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1CCu;
    // 0x12c1d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123DE8u, 0x12C1CCu, 0x12C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1D4u;
label_12c1d4:
    // 0x12c1d4: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12c1d4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12c1d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12c1dc:
    // 0x12c1dc: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x12c1dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12c1e0: 0x240fffdb  addiu       $t7, $zero, -0x25
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x12c1e4: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x12c1e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12c1e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12c1ec: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12c1f0: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x12c1f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1f4: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x12c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_12c1f8:
    // 0x12c1f8: 0x35cf0008  ori         $t7, $t6, 0x8
    ctx->pc = 0x12c1f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x12c1fc: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12c200:
    // 0x12c200: 0x55a00004  bnel        $t5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C200u;
    {
        const bool branch_taken_0x12c200 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c200) {
            ctx->pc = 0x12C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C200u;
            // 0x12c204: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C214u;
            goto label_12c214;
        }
    }
    ctx->pc = 0x12C208u;
    // 0x12c208: 0xc049204  jal         func_124810
    ctx->pc = 0x12C208u;
    SET_GPR_U32(ctx, 31, 0x12C210u);
    ctx->pc = 0x12C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C208u;
    // 0x12c20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124810u, 0x12C208u, 0x12C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C210u;
label_12c210:
    // 0x12c210: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12c210u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c214:
    // 0x12c214: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12c214u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12c218: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x12c218u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x12c21c: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x12c21cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
    // 0x12c220: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12C220u;
    {
        const bool branch_taken_0x12c220 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C220u;
        // 0x12c224: 0x31cf0002  andi        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c220) {
            ctx->pc = 0x12C24Cu;
            goto label_12c24c;
        }
    }
    ctx->pc = 0x12C228u;
    // 0x12c228: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x12c228u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c22c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12c230: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12c234: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x12c234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
label_12c238:
    // 0x12c238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c23c:
    // 0x12c23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c244: 0x3e00008  jr          $ra
    ctx->pc = 0x12C244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C244u;
        // 0x12c248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C24Cu;
label_12c24c:
    // 0x12c24c: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C24Cu;
    {
        const bool branch_taken_0x12c24c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C24Cu;
        // 0x12c250: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c24c) {
            ctx->pc = 0x12C258u;
            goto label_12c258;
        }
    }
    ctx->pc = 0x12C254u;
    // 0x12c254: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x12c254u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_12c258:
    // 0x12c258: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C258u;
    {
        const bool branch_taken_0x12c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C258u;
        // 0x12c25c: 0xae0e0008  sw          $t6, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c258) {
            ctx->pc = 0x12C238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c238;
        }
    }
    ctx->pc = 0x12C260u;
}
