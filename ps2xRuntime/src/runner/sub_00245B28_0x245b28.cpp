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

// Function: sub_00245B28
// Address: 0x245b28 - 0x245bd8
void sub_00245B28_0x245b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245B28_0x245b28");
#endif

    switch (ctx->pc) {
        case 0x245b64u: goto label_245b64;
        case 0x245bb0u: goto label_245bb0;
        default: break;
    }

    ctx->pc = 0x245b28u;

    // 0x245b28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245b38: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x245b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245b40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x245b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x245b48: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x245b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x245b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x245b50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x245b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x245b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x245b58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x245b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x245b5c: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x245B5Cu;
    SET_GPR_U32(ctx, 31, 0x245B64u);
    ctx->pc = 0x245B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B5Cu;
    // 0x245b60: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x245B5Cu, 0x245B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B64u;
label_245b64:
    // 0x245b64: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x245b64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x245b68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x245B68u;
    {
        const bool branch_taken_0x245b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B68u;
        // 0x245b6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b68) {
            ctx->pc = 0x245B80u;
            goto label_245b80;
        }
    }
    ctx->pc = 0x245B70u;
    // 0x245b70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245B70u;
    {
        const bool branch_taken_0x245b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B70u;
        // 0x245b74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b70) {
            ctx->pc = 0x245B80u;
            goto label_245b80;
        }
    }
    ctx->pc = 0x245B78u;
    // 0x245b78: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x245B78u;
    {
        const bool branch_taken_0x245b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x245b78) {
            ctx->pc = 0x245BA8u;
            goto label_245ba8;
        }
    }
    ctx->pc = 0x245B80u;
label_245b80:
    // 0x245b80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x245b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245b84: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x245b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x245b88: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x245b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x245b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245b90: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x245b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x245b94: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245b98: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x245b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x245b9c: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x245b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x245ba0: 0xfe150028  sd          $s5, 0x28($s0)
    ctx->pc = 0x245ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 21));
    // 0x245ba4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_245ba8:
    // 0x245ba8: 0xc094bd2  jal         func_252F48
    ctx->pc = 0x245BA8u;
    SET_GPR_U32(ctx, 31, 0x245BB0u);
    ctx->pc = 0x252F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F48u, 0x245BA8u, 0x245BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BB0u;
label_245bb0:
    // 0x245bb0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x245bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245bbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245bc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x245bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245bc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x245bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245bc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x245bc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245bcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x245BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD0u;
        // 0x245bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245BD8u;
}
