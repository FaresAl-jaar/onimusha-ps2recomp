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

// Function: sub_003DBCA0
// Address: 0x3dbca0 - 0x3dbd14
void sub_003DBCA0_0x3dbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBCA0_0x3dbca0");
#endif

    switch (ctx->pc) {
        case 0x3dbcd4u: goto label_3dbcd4;
        default: break;
    }

    ctx->pc = 0x3dbca0u;

    // 0x3dbca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dbca4: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x3dbca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3dbca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dbcac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dbcacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dbcb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbcb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbcb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbcb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbcbc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DBCBCu;
    {
        const bool branch_taken_0x3dbcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCBCu;
        // 0x3dbcc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcbc) {
            ctx->pc = 0x3DBCC8u;
            goto label_3dbcc8;
        }
    }
    ctx->pc = 0x3DBCC4u;
    // 0x3dbcc4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x3dbcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3dbcc8:
    // 0x3dbcc8: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x3dbcc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3dbccc: 0xc096750  jal         func_259D40
    ctx->pc = 0x3DBCCCu;
    SET_GPR_U32(ctx, 31, 0x3DBCD4u);
    ctx->pc = 0x3DBCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBCCCu;
    // 0x3dbcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x3DBCCCu, 0x3DBCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBCD4u;
label_3dbcd4:
    // 0x3dbcd4: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3dbcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbcd8: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x3dbcd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3dbcdc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dbcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3dbce0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dbce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dbce4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBCE4u;
    {
        const bool branch_taken_0x3dbce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbce4) {
            ctx->pc = 0x3DBCF8u;
            goto label_3dbcf8;
        }
    }
    ctx->pc = 0x3DBCECu;
    // 0x3dbcec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBCECu;
    {
        const bool branch_taken_0x3dbcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCECu;
        // 0x3dbcf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcec) {
            ctx->pc = 0x3DBD00u;
            goto label_3dbd00;
        }
    }
    ctx->pc = 0x3DBCF4u;
    // 0x3dbcf4: 0x0  nop
    ctx->pc = 0x3dbcf4u;
    // NOP
label_3dbcf8:
    // 0x3dbcf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dbcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbcfc: 0x0  nop
    ctx->pc = 0x3dbcfcu;
    // NOP
label_3dbd00:
    // 0x3dbd00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dbd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbd04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbd08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD0Cu;
        // 0x3dbd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBD14u;
}
