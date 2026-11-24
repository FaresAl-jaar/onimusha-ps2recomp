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

// Function: sub_00228420
// Address: 0x228420 - 0x2284d0
void sub_00228420_0x228420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228420_0x228420");
#endif

    switch (ctx->pc) {
        case 0x228464u: goto label_228464;
        case 0x228478u: goto label_228478;
        case 0x228494u: goto label_228494;
        case 0x22849cu: goto label_22849c;
        default: break;
    }

    ctx->pc = 0x228420u;

    // 0x228420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x228424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x228428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22842c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x228430: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x228430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228438: 0x2a421800  slti        $v0, $s2, 0x1800
    ctx->pc = 0x228438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x22843c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22843Cu;
    {
        const bool branch_taken_0x22843c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x228440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22843Cu;
        // 0x228440: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22843c) {
            ctx->pc = 0x228450u;
            goto label_228450;
        }
    }
    ctx->pc = 0x228444u;
    // 0x228444: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228448: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x228448u;
    {
        const bool branch_taken_0x228448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228448u;
        // 0x22844c: 0x24849610  addiu       $a0, $a0, -0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228448) {
            ctx->pc = 0x22845Cu;
            goto label_22845c;
        }
    }
    ctx->pc = 0x228450u;
label_228450:
    // 0x228450: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228450u;
    {
        const bool branch_taken_0x228450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228450u;
        // 0x228454: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228450) {
            ctx->pc = 0x228470u;
            goto label_228470;
        }
    }
    ctx->pc = 0x228458u;
    // 0x228458: 0x24849638  addiu       $a0, $a0, -0x69C8
    ctx->pc = 0x228458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940216));
label_22845c:
    // 0x22845c: 0xc08a0d4  jal         func_228350
    ctx->pc = 0x22845Cu;
    SET_GPR_U32(ctx, 31, 0x228464u);
    ctx->pc = 0x228350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228350u, 0x22845Cu, 0x228464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228464u;
label_228464:
    // 0x228464: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x228464u;
    {
        const bool branch_taken_0x228464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228464u;
        // 0x228468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228464) {
            ctx->pc = 0x2284B8u;
            goto label_2284b8;
        }
    }
    ctx->pc = 0x22846Cu;
    // 0x22846c: 0x0  nop
    ctx->pc = 0x22846cu;
    // NOP
label_228470:
    // 0x228470: 0xc08a134  jal         func_2284D0
    ctx->pc = 0x228470u;
    SET_GPR_U32(ctx, 31, 0x228478u);
    ctx->pc = 0x2284D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284D0u, 0x228470u, 0x228478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228478u;
label_228478:
    // 0x228478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22847c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22847cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228480: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x228480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x228484: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x228484u;
    {
        const bool branch_taken_0x228484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x228488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228484u;
        // 0x228488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228484) {
            ctx->pc = 0x2284B4u;
            goto label_2284b4;
        }
    }
    ctx->pc = 0x22848Cu;
    // 0x22848c: 0xc049590  jal         func_125640
    ctx->pc = 0x22848Cu;
    SET_GPR_U32(ctx, 31, 0x228494u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22848Cu, 0x228494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228494u;
label_228494:
    // 0x228494: 0xc08a14a  jal         func_228528
    ctx->pc = 0x228494u;
    SET_GPR_U32(ctx, 31, 0x22849Cu);
    ctx->pc = 0x228498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228494u;
    // 0x228498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228528u, 0x228494u, 0x22849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22849Cu;
label_22849c:
    // 0x22849c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x22849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2284a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2284a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2284a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2284a8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2284a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2284ac: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2284acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2284b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2284b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2284b4:
    // 0x2284b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2284b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2284b8:
    // 0x2284b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2284b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2284bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2284c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2284c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2284c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2284c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2284c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2284C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284C8u;
        // 0x2284cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2284D0u;
}
