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

// Function: sub_0017D670
// Address: 0x17d670 - 0x17d714
void sub_0017D670_0x17d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D670_0x17d670");
#endif

    ctx->pc = 0x17d670u;

    // 0x17d670: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17d674: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x17d674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17d678: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x17d67c: 0xad0400e0  sw          $a0, 0xE0($t0)
    ctx->pc = 0x17d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 4));
    // 0x17d680: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x17d684: 0xad0500f8  sw          $a1, 0xF8($t0)
    ctx->pc = 0x17d684u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 248), GPR_U32(ctx, 5));
    // 0x17d688: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x17d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17d68c: 0xad030108  sw          $v1, 0x108($t0)
    ctx->pc = 0x17d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 264), GPR_U32(ctx, 3));
    // 0x17d690: 0x248900a0  addiu       $t1, $a0, 0xA0
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x17d694: 0xad020100  sw          $v0, 0x100($t0)
    ctx->pc = 0x17d694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 256), GPR_U32(ctx, 2));
    // 0x17d698: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x17d698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x17d69c: 0x248200b0  addiu       $v0, $a0, 0xB0
    ctx->pc = 0x17d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x17d6a0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x17d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x17d6a4: 0x5213c  dsll32      $a0, $a1, 4
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 4));
    // 0x17d6a8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x17d6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x17d6ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17d6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17d6b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x17d6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17d6b4: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x17d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x17d6b8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x17d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x17d6bc: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x17d6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x17d6c0: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x17d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x17d6c4: 0x9193c  dsll32      $v1, $t1, 4
    ctx->pc = 0x17d6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 4));
    // 0x17d6c8: 0xaca4003c  sw          $a0, 0x3C($a1)
    ctx->pc = 0x17d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
    // 0x17d6cc: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x17d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x17d6d0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x17d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x17d6d4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x17d6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17d6d8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x17d6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x17d6dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x17d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x17d6e0: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x17d6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x17d6e4: 0x34660404  ori         $a2, $v1, 0x404
    ctx->pc = 0x17d6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x17d6e8: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x17d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x17d6ec: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x17d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x17d6f0: 0xaca60048  sw          $a2, 0x48($a1)
    ctx->pc = 0x17d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 6));
    // 0x17d6f4: 0x346403f8  ori         $a0, $v1, 0x3F8
    ctx->pc = 0x17d6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
    // 0x17d6f8: 0xaca4004c  sw          $a0, 0x4C($a1)
    ctx->pc = 0x17d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 4));
    // 0x17d6fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x17d700: 0xad0900e8  sw          $t1, 0xE8($t0)
    ctx->pc = 0x17d700u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 232), GPR_U32(ctx, 9));
    // 0x17d704: 0xfca300d0  sd          $v1, 0xD0($a1)
    ctx->pc = 0x17d704u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 208), GPR_U64(ctx, 3));
    // 0x17d708: 0xaca000d8  sw          $zero, 0xD8($a1)
    ctx->pc = 0x17d708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 0));
    // 0x17d70c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D70Cu;
        // 0x17d710: 0xaca000dc  sw          $zero, 0xDC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D714u;
}
