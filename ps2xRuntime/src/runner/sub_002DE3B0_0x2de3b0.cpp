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

// Function: sub_002DE3B0
// Address: 0x2de3b0 - 0x2de480
void sub_002DE3B0_0x2de3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3B0_0x2de3b0");
#endif

    ctx->pc = 0x2de3b0u;

    // 0x2de3b0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de3b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DE3B4u;
    {
        const bool branch_taken_0x2de3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3B4u;
        // 0x2de3b8: 0x3c058050  lui         $a1, 0x8050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3b4) {
            ctx->pc = 0x2DE3E0u;
            goto label_2de3e0;
        }
    }
    ctx->pc = 0x2DE3BCu;
    // 0x2de3bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2de3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2de3c0: 0x34a65050  ori         $a2, $a1, 0x5050
    ctx->pc = 0x2de3c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20560);
    // 0x2de3c4: 0x34655050  ori         $a1, $v1, 0x5050
    ctx->pc = 0x2de3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20560);
    // 0x2de3c8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2de3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2de3cc: 0x3c035080  lui         $v1, 0x5080
    ctx->pc = 0x2de3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20608 << 16));
    // 0x2de3d0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2de3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2de3d4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x2de3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x2de3d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DE3D8u;
    {
        const bool branch_taken_0x2de3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3D8u;
        // 0x2de3dc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3d8) {
            ctx->pc = 0x2DE478u;
            goto label_2de478;
        }
    }
    ctx->pc = 0x2DE3E0u;
label_2de3e0:
    // 0x2de3e0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2de3e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2de3e4: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x2de3e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2de3e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE3E8u;
    {
        const bool branch_taken_0x2de3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3E8u;
        // 0x2de3ec: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3e8) {
            ctx->pc = 0x2DE3F4u;
            goto label_2de3f4;
        }
    }
    ctx->pc = 0x2DE3F0u;
    // 0x2de3f0: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2de3f4:
    // 0x2de3f4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2de3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2de3f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2de3fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2de3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2de400: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2de400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2de404: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x2de404u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2de408: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2de408u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2de40c: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2de40cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2de410: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2de410u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2de414: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2de414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2de418: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2de41c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2de41cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2de420: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x2de424: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2de424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2de428: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x2de428u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x2de42c: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2de42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2de430: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2de430u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2de434: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x2de434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2de438: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2de438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2de43c: 0x54400  sll         $t0, $a1, 16
    ctx->pc = 0x2de43cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2de440: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x2de440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2de444: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2de444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2de448: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2de448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2de44c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2de44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2de450: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2de450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2de454: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2de454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2de458: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x2de458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2de45c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2de45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2de460: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2de460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2de464: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2de464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2de468: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2de468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2de46c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x2de46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x2de470: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2de470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2de474: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2de474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2de478:
    // 0x2de478: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE480u;
}
