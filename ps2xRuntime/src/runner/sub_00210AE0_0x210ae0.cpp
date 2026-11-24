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

// Function: sub_00210AE0
// Address: 0x210ae0 - 0x210b98
void sub_00210AE0_0x210ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210AE0_0x210ae0");
#endif

    switch (ctx->pc) {
        case 0x210b08u: goto label_210b08;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b7cu: goto label_210b7c;
        default: break;
    }

    ctx->pc = 0x210ae0u;

    // 0x210ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210ae4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210ae8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x210ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210aec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x210aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210af0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x210af4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210af8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x210af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210afc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210b00: 0xc0842e6  jal         func_210B98
    ctx->pc = 0x210B00u;
    SET_GPR_U32(ctx, 31, 0x210B08u);
    ctx->pc = 0x210B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B00u;
    // 0x210b04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B98u, 0x210B00u, 0x210B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B08u;
label_210b08:
    // 0x210b08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b0c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x210B0Cu;
    {
        const bool branch_taken_0x210b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B0Cu;
        // 0x210b10: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b0c) {
            ctx->pc = 0x210B80u;
            goto label_210b80;
        }
    }
    ctx->pc = 0x210B14u;
    // 0x210b14: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x210b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x210b18: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x210B18u;
    {
        const bool branch_taken_0x210b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x210B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B18u;
        // 0x210b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b18) {
            ctx->pc = 0x210B80u;
            goto label_210b80;
        }
    }
    ctx->pc = 0x210B20u;
    // 0x210b20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210b24: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x210B24u;
    {
        const bool branch_taken_0x210b24 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b24) {
            ctx->pc = 0x210B40u;
            goto label_210b40;
        }
    }
    ctx->pc = 0x210B2Cu;
    // 0x210b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210b30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x210b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210b38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x210b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x210b3c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x210b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_210b40:
    // 0x210b40: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x210b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b48: 0x24428998  addiu       $v0, $v0, -0x7668
    ctx->pc = 0x210b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x210b4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x210b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x210b54: 0xc084346  jal         func_210D18
    ctx->pc = 0x210B54u;
    SET_GPR_U32(ctx, 31, 0x210B5Cu);
    ctx->pc = 0x210B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B54u;
    // 0x210b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210D18u, 0x210B54u, 0x210B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B5Cu;
label_210b5c:
    // 0x210b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b64: 0xc084396  jal         func_210E58
    ctx->pc = 0x210B64u;
    SET_GPR_U32(ctx, 31, 0x210B6Cu);
    ctx->pc = 0x210B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B64u;
    // 0x210b68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210E58u, 0x210B64u, 0x210B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B6Cu;
label_210b6c:
    // 0x210b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b74: 0xc084538  jal         func_2114E0
    ctx->pc = 0x210B74u;
    SET_GPR_U32(ctx, 31, 0x210B7Cu);
    ctx->pc = 0x210B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B74u;
    // 0x210b78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114E0u, 0x210B74u, 0x210B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B7Cu;
label_210b7c:
    // 0x210b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210b80:
    // 0x210b80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210b84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x210b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210b88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210b8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210b90: 0x3e00008  jr          $ra
    ctx->pc = 0x210B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B90u;
        // 0x210b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210B98u;
}
