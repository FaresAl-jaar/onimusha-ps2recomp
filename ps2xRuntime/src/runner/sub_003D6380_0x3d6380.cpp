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

// Function: sub_003D6380
// Address: 0x3d6380 - 0x3d641c
void sub_003D6380_0x3d6380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6380_0x3d6380");
#endif

    switch (ctx->pc) {
        case 0x3d63e0u: goto label_3d63e0;
        default: break;
    }

    ctx->pc = 0x3d6380u;

    // 0x3d6380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d6380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d6384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d6388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d6388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d638c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d6390: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d6390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d6398: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6398u;
    {
        const bool branch_taken_0x3d6398 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3D639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6398u;
        // 0x3d639c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6398) {
            ctx->pc = 0x3D63B0u;
            goto label_3d63b0;
        }
    }
    ctx->pc = 0x3D63A0u;
    // 0x3d63a0: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x3d63a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3d63a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D63A4u;
    {
        const bool branch_taken_0x3d63a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d63a4) {
            ctx->pc = 0x3D63B8u;
            goto label_3d63b8;
        }
    }
    ctx->pc = 0x3D63ACu;
    // 0x3d63ac: 0x0  nop
    ctx->pc = 0x3d63acu;
    // NOP
label_3d63b0:
    // 0x3d63b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D63B0u;
    {
        const bool branch_taken_0x3d63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d63b0) {
            ctx->pc = 0x3D6400u;
            goto label_3d6400;
        }
    }
    ctx->pc = 0x3D63B8u;
label_3d63b8:
    // 0x3d63b8: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x3d63b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d63bc: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x3d63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3d63c0: 0x90832b59  lbu         $v1, 0x2B59($a0)
    ctx->pc = 0x3d63c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11097)));
    // 0x3d63c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D63C4u;
    {
        const bool branch_taken_0x3d63c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63C4u;
        // 0x3d63c8: 0x24912b59  addiu       $s1, $a0, 0x2B59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 11097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63c4) {
            ctx->pc = 0x3D6400u;
            goto label_3d6400;
        }
    }
    ctx->pc = 0x3D63CCu;
    // 0x3d63cc: 0x8c852b54  lw          $a1, 0x2B54($a0)
    ctx->pc = 0x3d63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11092)));
    // 0x3d63d0: 0x24922b54  addiu       $s2, $a0, 0x2B54
    ctx->pc = 0x3d63d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 11092));
    // 0x3d63d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d63d8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D63D8u;
    SET_GPR_U32(ctx, 31, 0x3D63E0u);
    ctx->pc = 0x3D63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63D8u;
    // 0x3d63dc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D63D8u, 0x3D63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63E0u;
label_3d63e0:
    // 0x3d63e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D63E0u;
    {
        const bool branch_taken_0x3d63e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63E0u;
        // 0x3d63e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63e0) {
            ctx->pc = 0x3D6400u;
            goto label_3d6400;
        }
    }
    ctx->pc = 0x3D63E8u;
    // 0x3d63e8: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x3d63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3d63ec: 0xa0442c78  sb          $a0, 0x2C78($v0)
    ctx->pc = 0x3d63ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11384), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d63f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3d63f4: 0xa0602b58  sb          $zero, 0x2B58($v1)
    ctx->pc = 0x3d63f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11096), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d63f8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3d63f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d63fc: 0x0  nop
    ctx->pc = 0x3d63fcu;
    // NOP
label_3d6400:
    // 0x3d6400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d6400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d6404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d6404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d6408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d6408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d640c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d640cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6414: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6414u;
        // 0x3d6418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D641Cu;
}
