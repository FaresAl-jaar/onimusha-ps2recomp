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

// Function: sub_002A5870
// Address: 0x2a5870 - 0x2a5924
void sub_002A5870_0x2a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5870_0x2a5870");
#endif

    switch (ctx->pc) {
        case 0x2a58b4u: goto label_2a58b4;
        case 0x2a58e0u: goto label_2a58e0;
        case 0x2a5908u: goto label_2a5908;
        default: break;
    }

    ctx->pc = 0x2a5870u;

    // 0x2a5870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a5874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a5874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a5878: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a587c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5880: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a5888: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a5888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a588c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5890: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a5890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5894: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a5894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5898: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a589c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2a589cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2a58a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a58a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a58a8: 0x24c6b3f8  addiu       $a2, $a2, -0x4C08
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947832));
    // 0x2a58ac: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A58ACu;
    SET_GPR_U32(ctx, 31, 0x2A58B4u);
    ctx->pc = 0x2A58B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58ACu;
    // 0x2a58b0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A58ACu, 0x2A58B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58B4u;
label_2a58b4:
    // 0x2a58b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a58b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a58b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a58b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a58c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a58c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58c4: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a58c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a58c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a58c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a58ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a58d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a58d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58d8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A58D8u;
    SET_GPR_U32(ctx, 31, 0x2A58E0u);
    ctx->pc = 0x2A58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58D8u;
    // 0x2a58dc: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A58D8u, 0x2A58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58E0u;
label_2a58e0:
    // 0x2a58e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a58e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58e4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a58e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58e8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a58e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58ec: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a58ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58f4: 0x2405622c  addiu       $a1, $zero, 0x622C
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25132));
    // 0x2a58f8: 0x240600d8  addiu       $a2, $zero, 0xD8
    ctx->pc = 0x2a58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2a58fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a58fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5900: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A5900u;
    SET_GPR_U32(ctx, 31, 0x2A5908u);
    ctx->pc = 0x2A5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5900u;
    // 0x2a5904: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A5900u, 0x2A5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5908u;
label_2a5908:
    // 0x2a5908: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a5908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a590c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a590cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a5910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a591c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A591Cu;
        // 0x2a5920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5924u;
}
