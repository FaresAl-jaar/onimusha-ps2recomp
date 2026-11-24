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

// Function: sub_002239E8
// Address: 0x2239e8 - 0x223ad8
void sub_002239E8_0x2239e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002239E8_0x2239e8");
#endif

    switch (ctx->pc) {
        case 0x223a1cu: goto label_223a1c;
        case 0x223a60u: goto label_223a60;
        case 0x223a8cu: goto label_223a8c;
        default: break;
    }

    ctx->pc = 0x2239e8u;

    // 0x2239e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2239ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2239ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2239f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2239f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2239f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2239f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2239f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2239fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2239fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x223a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x223a04: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223a08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x223a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x223a0c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x223a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x223a10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x223a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x223a14: 0xc088e5a  jal         func_223968
    ctx->pc = 0x223A14u;
    SET_GPR_U32(ctx, 31, 0x223A1Cu);
    ctx->pc = 0x223A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A14u;
    // 0x223a18: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223968u, 0x223A14u, 0x223A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A1Cu;
label_223a1c:
    // 0x223a1c: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x223A1Cu;
    {
        const bool branch_taken_0x223a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x223a1c) {
            ctx->pc = 0x223A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223A1Cu;
            // 0x223a20: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223A30u;
            goto label_223a30;
        }
    }
    ctx->pc = 0x223A24u;
    // 0x223a24: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x223A24u;
    {
        const bool branch_taken_0x223a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A24u;
        // 0x223a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a24) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A2Cu;
    // 0x223a2c: 0x0  nop
    ctx->pc = 0x223a2cu;
    // NOP
label_223a30:
    // 0x223a30: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x223a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x223a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223A34u;
    {
        const bool branch_taken_0x223a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A34u;
        // 0x223a38: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a34) {
            ctx->pc = 0x223A50u;
            goto label_223a50;
        }
    }
    ctx->pc = 0x223A3Cu;
    // 0x223a3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x223a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x223A44u;
    {
        const bool branch_taken_0x223a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A44u;
        // 0x223a48: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a44) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A4Cu;
    // 0x223a4c: 0x0  nop
    ctx->pc = 0x223a4cu;
    // NOP
label_223a50:
    // 0x223a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a54: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x223a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x223a58: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x223A58u;
    SET_GPR_U32(ctx, 31, 0x223A60u);
    ctx->pc = 0x223A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A58u;
    // 0x223a5c: 0x24a58f78  addiu       $a1, $a1, -0x7088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x223A58u, 0x223A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A60u;
label_223a60:
    // 0x223a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x223a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223A68u;
    {
        const bool branch_taken_0x223a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A68u;
        // 0x223a6c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a68) {
            ctx->pc = 0x223A80u;
            goto label_223a80;
        }
    }
    ctx->pc = 0x223A70u;
    // 0x223a70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x223a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223a74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x223a78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x223A78u;
    {
        const bool branch_taken_0x223a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A78u;
        // 0x223a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a78) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A80u;
label_223a80:
    // 0x223a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223a84: 0xc088f76  jal         func_223DD8
    ctx->pc = 0x223A84u;
    SET_GPR_U32(ctx, 31, 0x223A8Cu);
    ctx->pc = 0x223A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A84u;
    // 0x223a88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DD8u, 0x223A84u, 0x223A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A8Cu;
label_223a8c:
    // 0x223a8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223A8Cu;
    {
        const bool branch_taken_0x223a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A8Cu;
        // 0x223a90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a8c) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A94u;
    // 0x223a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223a98: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x223a9c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x223a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x223aa0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x223aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x223aa4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x223aa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x223aac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x223aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x223ab0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x223ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x223ab4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x223ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x223ab8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x223ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_223abc:
    // 0x223abc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x223abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ac0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223ac4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x223ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223ac8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x223ac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x223acc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x223accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x223AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AD0u;
        // 0x223ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223AD8u;
}
