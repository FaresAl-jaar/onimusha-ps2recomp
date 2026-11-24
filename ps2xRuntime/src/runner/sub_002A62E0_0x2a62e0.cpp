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

// Function: sub_002A62E0
// Address: 0x2a62e0 - 0x2a6394
void sub_002A62E0_0x2a62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A62E0_0x2a62e0");
#endif

    switch (ctx->pc) {
        case 0x2a6324u: goto label_2a6324;
        case 0x2a6350u: goto label_2a6350;
        case 0x2a6378u: goto label_2a6378;
        default: break;
    }

    ctx->pc = 0x2a62e0u;

    // 0x2a62e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a62e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a62e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a62e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a62ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a62ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a62f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a62f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a62f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a62f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a62f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a62fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a6300: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a6300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6304: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a6304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6308: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a630c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2a630cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2a6310: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a6310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a6314: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a6318: 0x24c6b3f8  addiu       $a2, $a2, -0x4C08
    ctx->pc = 0x2a6318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947832));
    // 0x2a631c: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A631Cu;
    SET_GPR_U32(ctx, 31, 0x2A6324u);
    ctx->pc = 0x2A6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A631Cu;
    // 0x2a6320: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A631Cu, 0x2A6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6324u;
label_2a6324:
    // 0x2a6324: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a6324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a6328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a632c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a6330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6334: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a6334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a6338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a6338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a633c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a633cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6340: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6340u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6344: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a6344u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6348: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A6348u;
    SET_GPR_U32(ctx, 31, 0x2A6350u);
    ctx->pc = 0x2A634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6348u;
    // 0x2a634c: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A6348u, 0x2A6350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6350u;
label_2a6350:
    // 0x2a6350: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a6350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6354: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a6354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6358: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a6358u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a635c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a635cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6364: 0x34058ca4  ori         $a1, $zero, 0x8CA4
    ctx->pc = 0x2a6364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36004);
    // 0x2a6368: 0x2406023c  addiu       $a2, $zero, 0x23C
    ctx->pc = 0x2a6368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x2a636c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a636cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6370: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A6370u;
    SET_GPR_U32(ctx, 31, 0x2A6378u);
    ctx->pc = 0x2A6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6370u;
    // 0x2a6374: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A6370u, 0x2A6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6378u;
label_2a6378:
    // 0x2a6378: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a6378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a637c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a637cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a6380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6384: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a6384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a6388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a638c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A638Cu;
        // 0x2a6390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A638Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6394u;
}
