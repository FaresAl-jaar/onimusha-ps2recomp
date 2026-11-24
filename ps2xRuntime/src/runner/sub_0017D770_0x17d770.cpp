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

// Function: sub_0017D770
// Address: 0x17d770 - 0x17d86c
void sub_0017D770_0x17d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D770_0x17d770");
#endif

    switch (ctx->pc) {
        case 0x17d7c0u: goto label_17d7c0;
        case 0x17d7d8u: goto label_17d7d8;
        case 0x17d7ecu: goto label_17d7ec;
        default: break;
    }

    ctx->pc = 0x17d770u;

    // 0x17d770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d774: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17d778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17d77c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d780: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d784: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17d788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d78c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d794: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17d798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d79c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17d79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17d7a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17d7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a8: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x17d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x17d7ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17d7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7b0: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x17d7b4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17d7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7b8: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x17D7B8u;
    SET_GPR_U32(ctx, 31, 0x17D7C0u);
    ctx->pc = 0x17D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7B8u;
    // 0x17d7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x17D7B8u, 0x17D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7C0u;
label_17d7c0:
    // 0x17d7c0: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x17d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x17d7c4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x17d7c8: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x17d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x17d7cc: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x17d7d0: 0xc04d050  jal         func_134140
    ctx->pc = 0x17D7D0u;
    SET_GPR_U32(ctx, 31, 0x17D7D8u);
    ctx->pc = 0x17D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7D0u;
    // 0x17d7d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x17D7D0u, 0x17D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7D8u;
label_17d7d8:
    // 0x17d7d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D7D8u;
    {
        const bool branch_taken_0x17d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7D8u;
        // 0x17d7dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7d8) {
            ctx->pc = 0x17D830u;
            goto label_17d830;
        }
    }
    ctx->pc = 0x17D7E0u;
    // 0x17d7e0: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x17d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x17d7e4: 0xc04d058  jal         func_134160
    ctx->pc = 0x17D7E4u;
    SET_GPR_U32(ctx, 31, 0x17D7ECu);
    ctx->pc = 0x17D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7E4u;
    // 0x17d7e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134160u, 0x17D7E4u, 0x17D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7ECu;
label_17d7ec:
    // 0x17d7ec: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x17d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x17d7f0: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x17d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x17d7f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17d7f8: 0x328b8  dsll        $a1, $v1, 2
    ctx->pc = 0x17d7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 2);
    // 0x17d7fc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x17d800: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x17d800u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x17d804: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x17d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x17d808: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x17d808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17d80c: 0x24030360  addiu       $v1, $zero, 0x360
    ctx->pc = 0x17d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x17d810: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d814: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x17d814u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x17d818: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17d818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17d81c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17d820: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x17d820u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x17d824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D824u;
    {
        const bool branch_taken_0x17d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D824u;
        // 0x17d828: 0xfe230028  sd          $v1, 0x28($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d824) {
            ctx->pc = 0x17D850u;
            goto label_17d850;
        }
    }
    ctx->pc = 0x17D82Cu;
    // 0x17d82c: 0x0  nop
    ctx->pc = 0x17d82cu;
    // NOP
label_17d830:
    // 0x17d830: 0xfe200030  sd          $zero, 0x30($s1)
    ctx->pc = 0x17d830u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
    // 0x17d834: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x17d838: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x17d83c: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x17d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x17d840: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x17d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17d844: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x17d844u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x17d848: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x17d848u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x17d84c: 0x0  nop
    ctx->pc = 0x17d84cu;
    // NOP
label_17d850:
    // 0x17d850: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d864: 0x3e00008  jr          $ra
    ctx->pc = 0x17D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D864u;
        // 0x17d868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D86Cu;
}
