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

// Function: sub_0020C360
// Address: 0x20c360 - 0x20c414
void sub_0020C360_0x20c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C360_0x20c360");
#endif

    switch (ctx->pc) {
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3e4u: goto label_20c3e4;
        default: break;
    }

    ctx->pc = 0x20c360u;

    // 0x20c360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c36c: 0x80830de  j           func_20C378
    ctx->pc = 0x20C36Cu;
    ctx->pc = 0x20C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C36Cu;
    // 0x20c370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C378u;
    goto label_20c378;
    ctx->pc = 0x20C374u;
    // 0x20c374: 0x0  nop
    ctx->pc = 0x20c374u;
    // NOP
label_20c378:
    // 0x20c378: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x20c37c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c380: 0x8c4586dc  lw          $a1, -0x7924($v0)
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4B86DCu));
    // 0x20c384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20c384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c38c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c398: 0x14a30019  bne         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x20C398u;
    {
        const bool branch_taken_0x20c398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C398u;
        // 0x20c39c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c398) {
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3A0u;
    // 0x20c3a0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C3A0u;
    {
        const bool branch_taken_0x20c3a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c3a0) {
            ctx->pc = 0x20C3C0u;
            goto label_20c3c0;
        }
    }
    ctx->pc = 0x20C3A8u;
    // 0x20c3a8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20c3ac: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20C3ACu;
    SET_GPR_U32(ctx, 31, 0x20C3B4u);
    ctx->pc = 0x20C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3ACu;
    // 0x20c3b0: 0x248486c8  addiu       $a0, $a0, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20C3ACu, 0x20C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3B4u;
label_20c3b4:
    // 0x20c3b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C3B4u;
    {
        const bool branch_taken_0x20c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3B4u;
        // 0x20c3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3b4) {
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3BCu;
    // 0x20c3bc: 0x0  nop
    ctx->pc = 0x20c3bcu;
    // NOP
label_20c3c0:
    // 0x20c3c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x20c3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c3c4: 0x1605000e  bne         $s0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x20C3C4u;
    {
        const bool branch_taken_0x20c3c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x20C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C4u;
        // 0x20c3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3c4) {
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3CCu;
    // 0x20c3cc: 0xc083158  jal         func_20C560
    ctx->pc = 0x20C3CCu;
    SET_GPR_U32(ctx, 31, 0x20C3D4u);
    ctx->pc = 0x20C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C560u, 0x20C3CCu, 0x20C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3D4u;
label_20c3d4:
    // 0x20c3d4: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C3D4u;
    {
        const bool branch_taken_0x20c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x20c3d4) {
            ctx->pc = 0x20C3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C3D4u;
            // 0x20c3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3DCu;
    // 0x20c3dc: 0xc08318a  jal         func_20C628
    ctx->pc = 0x20C3DCu;
    SET_GPR_U32(ctx, 31, 0x20C3E4u);
    ctx->pc = 0x20C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C628u, 0x20C3DCu, 0x20C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3E4u;
label_20c3e4:
    // 0x20c3e4: 0x1050fff3  beq         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x20C3E4u;
    {
        const bool branch_taken_0x20c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3E4u;
        // 0x20c3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3e4) {
            ctx->pc = 0x20C3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c3b4;
        }
    }
    ctx->pc = 0x20C3ECu;
    // 0x20c3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c3f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c3f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c3f8: 0x8083106  j           func_20C418
    ctx->pc = 0x20C3F8u;
    ctx->pc = 0x20C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3F8u;
    // 0x20c3fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C418u;
    sub_0020C418_0x20c418(rdram, ctx, runtime); return;
    ctx->pc = 0x20C400u;
label_20c400:
    // 0x20c400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C40Cu;
        // 0x20c410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C414u;
}
