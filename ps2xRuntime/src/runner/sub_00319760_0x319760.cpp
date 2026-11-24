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

// Function: sub_00319760
// Address: 0x319760 - 0x3197d8
void sub_00319760_0x319760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319760_0x319760");
#endif

    ctx->pc = 0x319760u;

    // 0x319760: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x319760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x319764: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x319764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x319768: 0x9028cea4  lbu         $t0, -0x315C($at)
    ctx->pc = 0x319768u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x31976c: 0x34490004  ori         $t1, $v0, 0x4
    ctx->pc = 0x31976cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x319770: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x319770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x319774: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x319774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x319778: 0x34460404  ori         $a2, $v0, 0x404
    ctx->pc = 0x319778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x31977c: 0x24636700  addiu       $v1, $v1, 0x6700
    ctx->pc = 0x31977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26368));
    // 0x319780: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x319784: 0x344403f0  ori         $a0, $v0, 0x3F0
    ctx->pc = 0x319784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x319788: 0x344203f4  ori         $v0, $v0, 0x3F4
    ctx->pc = 0x319788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    // 0x31978c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x31978cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x319790: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x319790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x319794: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x319794u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x319798: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x319798u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31979c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x31979cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3197a0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3197a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3197a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3197a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3197a8: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x3197a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3197ac: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x3197acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x3197b0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x3197b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3197b4: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x3197b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x3197b8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x3197b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x3197bc: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x3197bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
    // 0x3197c0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x3197c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x3197c4: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x3197c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x3197c8: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x3197c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x3197cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3197ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3197d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3197D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3197D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197D0u;
        // 0x3197d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3197D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3197D8u;
}
