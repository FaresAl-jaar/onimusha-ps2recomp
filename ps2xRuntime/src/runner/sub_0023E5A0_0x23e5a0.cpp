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

// Function: sub_0023E5A0
// Address: 0x23e5a0 - 0x23e694
void sub_0023E5A0_0x23e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E5A0_0x23e5a0");
#endif

    switch (ctx->pc) {
        case 0x23e610u: goto label_23e610;
        case 0x23e650u: goto label_23e650;
        case 0x23e678u: goto label_23e678;
        default: break;
    }

    ctx->pc = 0x23e5a0u;

    // 0x23e5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e5a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23e5a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x23e5b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23e5b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23e5bc: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E5BCu;
    {
        const bool branch_taken_0x23e5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x23E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5BCu;
        // 0x23e5c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5bc) {
            ctx->pc = 0x23E5D0u;
            goto label_23e5d0;
        }
    }
    ctx->pc = 0x23E5C4u;
    // 0x23e5c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e5c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23e5cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e5d0:
    // 0x23e5d0: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23E5D0u;
    {
        const bool branch_taken_0x23e5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e5d0) {
            ctx->pc = 0x23E5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E5D0u;
            // 0x23e5d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E684u;
            goto label_23e684;
        }
    }
    ctx->pc = 0x23E5D8u;
    // 0x23e5d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x23e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23e5dc: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x23E5DCu;
    {
        const bool branch_taken_0x23e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x23e5dc) {
            ctx->pc = 0x23E5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E5DCu;
            // 0x23e5e0: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E618u;
            goto label_23e618;
        }
    }
    ctx->pc = 0x23E5E4u;
    // 0x23e5e4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23e5e8: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x23e5ec: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x23e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23e5f0: 0x260a0034  addiu       $t2, $s0, 0x34
    ctx->pc = 0x23e5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x23e5f4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x23e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23e5f8: 0x86080030  lh          $t0, 0x30($s0)
    ctx->pc = 0x23e5f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23e5fc: 0x86090032  lh          $t1, 0x32($s0)
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x23e600: 0x860b0036  lh          $t3, 0x36($s0)
    ctx->pc = 0x23e600u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x23e604: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x23e604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x23e608: 0xc08b826  jal         func_22E098
    ctx->pc = 0x23E608u;
    SET_GPR_U32(ctx, 31, 0x23E610u);
    ctx->pc = 0x23E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E608u;
    // 0x23e60c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E098u, 0x23E608u, 0x23E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E610u;
label_23e610:
    // 0x23e610: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23E610u;
    {
        const bool branch_taken_0x23e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E610u;
        // 0x23e614: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e610) {
            ctx->pc = 0x23E678u;
            goto label_23e678;
        }
    }
    ctx->pc = 0x23E618u;
label_23e618:
    // 0x23e618: 0x260c0034  addiu       $t4, $s0, 0x34
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x23e61c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23e620: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x23e620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x23e624: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23e628: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x23e628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x23e62c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23e630: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23e634: 0x860a0030  lh          $t2, 0x30($s0)
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23e638: 0x860b0032  lh          $t3, 0x32($s0)
    ctx->pc = 0x23e638u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x23e63c: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x23e63cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x23e640: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x23e644: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x23e644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x23e648: 0xc08ba62  jal         func_22E988
    ctx->pc = 0x23E648u;
    SET_GPR_U32(ctx, 31, 0x23E650u);
    ctx->pc = 0x23E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E648u;
    // 0x23e64c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E988u, 0x23E648u, 0x23E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E650u;
label_23e650:
    // 0x23e650: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x23e654: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x23e654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x23e658: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e65c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x23e660: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23e660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23e664: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23e664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e668: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E668u;
    {
        const bool branch_taken_0x23e668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E668u;
        // 0x23e66c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e668) {
            ctx->pc = 0x23E67Cu;
            goto label_23e67c;
        }
    }
    ctx->pc = 0x23E670u;
    // 0x23e670: 0xc08f964  jal         func_23E590
    ctx->pc = 0x23E670u;
    SET_GPR_U32(ctx, 31, 0x23E678u);
    ctx->pc = 0x23E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E590u, 0x23E670u, 0x23E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E678u;
label_23e678:
    // 0x23e678: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23e678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23e67c:
    // 0x23e67c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23e680: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23e680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e684:
    // 0x23e684: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23e684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23e688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e68c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E68Cu;
        // 0x23e690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E694u;
}
