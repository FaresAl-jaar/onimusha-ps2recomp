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

// Function: sub_0028C6E0
// Address: 0x28c6e0 - 0x28c780
void sub_0028C6E0_0x28c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C6E0_0x28c6e0");
#endif

    switch (ctx->pc) {
        case 0x28c710u: goto label_28c710;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c764u: goto label_28c764;
        default: break;
    }

    ctx->pc = 0x28c6e0u;

    // 0x28c6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28c6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c6e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c6ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c6f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c6f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28c6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c700: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28c700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c708: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x28C708u;
    SET_GPR_U32(ctx, 31, 0x28C710u);
    ctx->pc = 0x28C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C708u;
    // 0x28c70c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x28C708u, 0x28C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C710u;
label_28c710:
    // 0x28c710: 0x8e450190  lw          $a1, 0x190($s2)
    ctx->pc = 0x28c710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x28c714: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x28C714u;
    SET_GPR_U32(ctx, 31, 0x28C71Cu);
    ctx->pc = 0x28C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C714u;
    // 0x28c718: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x28C714u, 0x28C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C71Cu;
label_28c71c:
    // 0x28c71c: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x28c71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x28c720: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x28c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28c724: 0xc09d524  jal         func_275490
    ctx->pc = 0x28C724u;
    SET_GPR_U32(ctx, 31, 0x28C72Cu);
    ctx->pc = 0x28C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C724u;
    // 0x28c728: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28C724u, 0x28C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C72Cu;
label_28c72c:
    // 0x28c72c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C72Cu;
    {
        const bool branch_taken_0x28c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c72c) {
            ctx->pc = 0x28C748u;
            goto label_28c748;
        }
    }
    ctx->pc = 0x28C734u;
    // 0x28c734: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x28c734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28c738: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x28c738u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c73c: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x28c73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28c740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28C740u;
    {
        const bool branch_taken_0x28c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C740u;
        // 0x28c744: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c740) {
            ctx->pc = 0x28C758u;
            goto label_28c758;
        }
    }
    ctx->pc = 0x28C748u;
label_28c748:
    // 0x28c748: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x28c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x28c74c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x28c74cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x28c750: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28c754: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x28c754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_28c758:
    // 0x28c758: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x28c758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28c75c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C75Cu;
    SET_GPR_U32(ctx, 31, 0x28C764u);
    ctx->pc = 0x28C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C75Cu;
    // 0x28c760: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C75Cu, 0x28C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C764u;
label_28c764:
    // 0x28c764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c778: 0x3e00008  jr          $ra
    ctx->pc = 0x28C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C778u;
        // 0x28c77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C780u;
}
