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

// Function: sub_00213B38
// Address: 0x213b38 - 0x213bc8
void sub_00213B38_0x213b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B38_0x213b38");
#endif

    switch (ctx->pc) {
        case 0x213b74u: goto label_213b74;
        case 0x213b8cu: goto label_213b8c;
        case 0x213ba4u: goto label_213ba4;
        default: break;
    }

    ctx->pc = 0x213b38u;

    // 0x213b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213b4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213b54: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x213b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x213b5c: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x213b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x213b60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x213b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x213b64: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B64u;
    {
        const bool branch_taken_0x213b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x213B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B64u;
        // 0x213b68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b64) {
            ctx->pc = 0x213B78u;
            goto label_213b78;
        }
    }
    ctx->pc = 0x213B6Cu;
    // 0x213b6c: 0xc08408e  jal         func_210238
    ctx->pc = 0x213B6Cu;
    SET_GPR_U32(ctx, 31, 0x213B74u);
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x213B6Cu, 0x213B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B74u;
label_213b74:
    // 0x213b74: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x213b74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_213b78:
    // 0x213b78: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x213b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213b7c: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x213B7Cu;
    {
        const bool branch_taken_0x213b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x213b7c) {
            ctx->pc = 0x213B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213B7Cu;
            // 0x213b80: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213B94u;
            goto label_213b94;
        }
    }
    ctx->pc = 0x213B84u;
    // 0x213b84: 0xc08408e  jal         func_210238
    ctx->pc = 0x213B84u;
    SET_GPR_U32(ctx, 31, 0x213B8Cu);
    ctx->pc = 0x213B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B84u;
    // 0x213b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x213B84u, 0x213B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B8Cu;
label_213b8c:
    // 0x213b8c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x213b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x213b90: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_213b94:
    // 0x213b94: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x213B94u;
    {
        const bool branch_taken_0x213b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x213B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B94u;
        // 0x213b98: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b94) {
            ctx->pc = 0x213BACu;
            goto label_213bac;
        }
    }
    ctx->pc = 0x213B9Cu;
    // 0x213b9c: 0xc08408e  jal         func_210238
    ctx->pc = 0x213B9Cu;
    SET_GPR_U32(ctx, 31, 0x213BA4u);
    ctx->pc = 0x213BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B9Cu;
    // 0x213ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x213B9Cu, 0x213BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BA4u;
label_213ba4:
    // 0x213ba4: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x213ba4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x213ba8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x213ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213bac:
    // 0x213bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213bb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213bb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213bb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213bbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x213BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BC0u;
        // 0x213bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213BC8u;
}
