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

// Function: sub_00213F50
// Address: 0x213f50 - 0x213fec
void sub_00213F50_0x213f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213F50_0x213f50");
#endif

    switch (ctx->pc) {
        case 0x213f90u: goto label_213f90;
        case 0x213fa4u: goto label_213fa4;
        default: break;
    }

    ctx->pc = 0x213f50u;

    // 0x213f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213f5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213f64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x213f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213f6c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213f70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x213f74: 0x26501f74  addiu       $s0, $s2, 0x1F74
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8052));
    // 0x213f78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x213f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x213f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x213f80: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x213F80u;
    {
        const bool branch_taken_0x213f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x213F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F80u;
        // 0x213f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f80) {
            ctx->pc = 0x213F90u;
            goto label_213f90;
        }
    }
    ctx->pc = 0x213F88u;
    // 0x213f88: 0xc084068  jal         func_2101A0
    ctx->pc = 0x213F88u;
    SET_GPR_U32(ctx, 31, 0x213F90u);
    ctx->pc = 0x2101A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101A0u, 0x213F88u, 0x213F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F90u;
label_213f90:
    // 0x213f90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213f94: 0x10b30003  beq         $a1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x213F94u;
    {
        const bool branch_taken_0x213f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x213F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F94u;
        // 0x213f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f94) {
            ctx->pc = 0x213FA4u;
            goto label_213fa4;
        }
    }
    ctx->pc = 0x213F9Cu;
    // 0x213f9c: 0xc084068  jal         func_2101A0
    ctx->pc = 0x213F9Cu;
    SET_GPR_U32(ctx, 31, 0x213FA4u);
    ctx->pc = 0x213FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F9Cu;
    // 0x213fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101A0u, 0x213F9Cu, 0x213FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FA4u;
label_213fa4:
    // 0x213fa4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x213fa8: 0x10b30009  beq         $a1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x213FA8u;
    {
        const bool branch_taken_0x213fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x213FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FA8u;
        // 0x213fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fa8) {
            ctx->pc = 0x213FD0u;
            goto label_213fd0;
        }
    }
    ctx->pc = 0x213FB0u;
    // 0x213fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x213fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213fc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213fc8: 0x8084068  j           func_2101A0
    ctx->pc = 0x213FC8u;
    ctx->pc = 0x213FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FC8u;
    // 0x213fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101A0u;
    sub_002101A0_0x2101a0(rdram, ctx, runtime); return;
    ctx->pc = 0x213FD0u;
label_213fd0:
    // 0x213fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213fdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x213FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FE4u;
        // 0x213fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213FECu;
}
