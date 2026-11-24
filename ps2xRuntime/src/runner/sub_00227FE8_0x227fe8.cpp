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

// Function: sub_00227FE8
// Address: 0x227fe8 - 0x22810c
void sub_00227FE8_0x227fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227FE8_0x227fe8");
#endif

    ctx->pc = 0x227fe8u;

    // 0x227fe8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x227fec: 0x2442aac0  addiu       $v0, $v0, -0x5540
    ctx->pc = 0x227fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
    // 0x227ff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BAAC0u));
    // 0x227ff4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227FF4u;
    {
        const bool branch_taken_0x227ff4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x227FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FF4u;
        // 0x227ff8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ff4) {
            ctx->pc = 0x22800Cu;
            goto label_22800c;
        }
    }
    ctx->pc = 0x227FFCu;
    // 0x227ffc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x227ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x228000: 0x8c46aac4  lw          $a2, -0x553C($v0)
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BAAC4u));
    // 0x228004: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228004u;
    {
        const bool branch_taken_0x228004 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x228008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228004u;
        // 0x228008: 0x3c090088  lui         $t1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228004) {
            ctx->pc = 0x228018u;
            goto label_228018;
        }
    }
    ctx->pc = 0x22800Cu;
label_22800c:
    // 0x22800c: 0x3e00008  jr          $ra
    ctx->pc = 0x22800Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22800Cu;
        // 0x228010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22800Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228014u;
    // 0x228014: 0x0  nop
    ctx->pc = 0x228014u;
    // NOP
label_228018:
    // 0x228018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22801c: 0x25235a9c  addiu       $v1, $t1, 0x5A9C
    ctx->pc = 0x22801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 23196));
    // 0x228020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228028: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x228028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22802c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228030: 0x1485001f  bne         $a0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x228030u;
    {
        const bool branch_taken_0x228030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x228034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228030u;
        // 0x228034: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228030) {
            ctx->pc = 0x2280B0u;
            goto label_2280b0;
        }
    }
    ctx->pc = 0x228038u;
    // 0x228038: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x22803c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x22803cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x228040: 0x24475a78  addiu       $a3, $v0, 0x5A78
    ctx->pc = 0x228040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23160));
    // 0x228044: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x228044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x228048: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x228048u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x885A78u));
    // 0x22804c: 0x24635a88  addiu       $v1, $v1, 0x5A88
    ctx->pc = 0x22804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23176));
    // 0x228050: 0x24485a98  addiu       $t0, $v0, 0x5A98
    ctx->pc = 0x228050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23192));
    // 0x228054: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x228054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x228058: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x228058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x22805c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x22805cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x228060: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x228060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x228064: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x228064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x228068: 0x8cc695c0  lw          $a2, -0x6A40($a2)
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294940096)));
    // 0x22806c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x22806cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x228070: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x228070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x228074: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x228074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x228078: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x228078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22807c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x22807cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x228080: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x228080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x228084: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228084u;
    {
        const bool branch_taken_0x228084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228084) {
            ctx->pc = 0x22809Cu;
            goto label_22809c;
        }
    }
    ctx->pc = 0x22808Cu;
    // 0x22808c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x22808cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x228090: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x228094: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x228094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x228098: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x228098u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_22809c:
    // 0x22809c: 0xa4e60008  sh          $a2, 0x8($a3)
    ctx->pc = 0x22809cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x2280a0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2280a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2280a4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2280a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x2280a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2280A8u;
    {
        const bool branch_taken_0x2280a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280A8u;
        // 0x2280ac: 0xc2282d  daddu       $a1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280a8) {
            ctx->pc = 0x2280F4u;
            goto label_2280f4;
        }
    }
    ctx->pc = 0x2280B0u;
label_2280b0:
    // 0x2280b0: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2280b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2280b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2280b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2280b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2280bc: 0x8c8495c0  lw          $a0, -0x6A40($a0)
    ctx->pc = 0x2280bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940096)));
    // 0x2280c0: 0x24425a98  addiu       $v0, $v0, 0x5A98
    ctx->pc = 0x2280c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23192));
    // 0x2280c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2280c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2280c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2280c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x885A98u));
    // 0x2280cc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2280ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2280d0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2280d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2280d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2280d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x885A98u));
    // 0x2280d8: 0xc4282d  daddu       $a1, $a2, $a0
    ctx->pc = 0x2280d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2280dc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2280dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2280e0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2280e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2280e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2280E4u;
    {
        const bool branch_taken_0x2280e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280E4u;
        // 0x2280e8: 0x25245a9c  addiu       $a0, $t1, 0x5A9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 23196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280e4) {
            ctx->pc = 0x2280F8u;
            goto label_2280f8;
        }
    }
    ctx->pc = 0x2280ECu;
    // 0x2280ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2280f0: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x2280f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_2280f4:
    // 0x2280f4: 0x25245a9c  addiu       $a0, $t1, 0x5A9C
    ctx->pc = 0x2280f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 23196));
label_2280f8:
    // 0x2280f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2280f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2280fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228100: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228104: 0x3e00008  jr          $ra
    ctx->pc = 0x228104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228104u;
        // 0x228108: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22810Cu;
}
