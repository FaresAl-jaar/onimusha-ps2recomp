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

// Function: sub_001CD3A0
// Address: 0x1cd3a0 - 0x1cd4e0
void sub_001CD3A0_0x1cd3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD3A0_0x1cd3a0");
#endif

    ctx->pc = 0x1cd3a0u;

    // 0x1cd3a0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1cd3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cd3a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3A4u;
        // 0x1cd3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CD3B8u;
            goto label_1cd3b8;
        }
    }
    ctx->pc = 0x1CD3ACu;
    // 0x1cd3ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1CD3ACu;
    {
        const bool branch_taken_0x1cd3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3ac) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD3B4u;
    // 0x1cd3b4: 0x0  nop
    ctx->pc = 0x1cd3b4u;
    // NOP
label_1cd3b8:
    // 0x1cd3b8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cd3bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD3BCu;
    {
        const bool branch_taken_0x1cd3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3BCu;
        // 0x1cd3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3bc) {
            ctx->pc = 0x1CD3D0u;
            goto label_1cd3d0;
        }
    }
    ctx->pc = 0x1CD3C4u;
    // 0x1cd3c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1CD3C4u;
    {
        const bool branch_taken_0x1cd3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3c4) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD3CCu;
    // 0x1cd3cc: 0x0  nop
    ctx->pc = 0x1cd3ccu;
    // NOP
label_1cd3d0:
    // 0x1cd3d0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1cd3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cd3d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD3D4u;
    {
        const bool branch_taken_0x1cd3d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3D4u;
        // 0x1cd3d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3d4) {
            ctx->pc = 0x1CD3E8u;
            goto label_1cd3e8;
        }
    }
    ctx->pc = 0x1CD3DCu;
    // 0x1cd3dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1CD3DCu;
    {
        const bool branch_taken_0x1cd3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3dc) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD3E4u;
    // 0x1cd3e4: 0x0  nop
    ctx->pc = 0x1cd3e4u;
    // NOP
label_1cd3e8:
    // 0x1cd3e8: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cd3ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD3ECu;
    {
        const bool branch_taken_0x1cd3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3ECu;
        // 0x1cd3f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3ec) {
            ctx->pc = 0x1CD400u;
            goto label_1cd400;
        }
    }
    ctx->pc = 0x1CD3F4u;
    // 0x1cd3f4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1CD3F4u;
    {
        const bool branch_taken_0x1cd3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3f4) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD3FCu;
    // 0x1cd3fc: 0x0  nop
    ctx->pc = 0x1cd3fcu;
    // NOP
label_1cd400:
    // 0x1cd400: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x1cd400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1cd404: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD404u;
    {
        const bool branch_taken_0x1cd404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD404u;
        // 0x1cd408: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd404) {
            ctx->pc = 0x1CD418u;
            goto label_1cd418;
        }
    }
    ctx->pc = 0x1CD40Cu;
    // 0x1cd40c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1CD40Cu;
    {
        const bool branch_taken_0x1cd40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd40c) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD414u;
    // 0x1cd414: 0x0  nop
    ctx->pc = 0x1cd414u;
    // NOP
label_1cd418:
    // 0x1cd418: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x1cd418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1cd41c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD41Cu;
    {
        const bool branch_taken_0x1cd41c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD41Cu;
        // 0x1cd420: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd41c) {
            ctx->pc = 0x1CD430u;
            goto label_1cd430;
        }
    }
    ctx->pc = 0x1CD424u;
    // 0x1cd424: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CD424u;
    {
        const bool branch_taken_0x1cd424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd424) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD42Cu;
    // 0x1cd42c: 0x0  nop
    ctx->pc = 0x1cd42cu;
    // NOP
label_1cd430:
    // 0x1cd430: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x1cd430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1cd434: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD434u;
    {
        const bool branch_taken_0x1cd434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD434u;
        // 0x1cd438: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd434) {
            ctx->pc = 0x1CD448u;
            goto label_1cd448;
        }
    }
    ctx->pc = 0x1CD43Cu;
    // 0x1cd43c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD43Cu;
    {
        const bool branch_taken_0x1cd43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd43c) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD444u;
    // 0x1cd444: 0x0  nop
    ctx->pc = 0x1cd444u;
    // NOP
label_1cd448:
    // 0x1cd448: 0x28810081  slti        $at, $a0, 0x81
    ctx->pc = 0x1cd448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1cd44c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD44Cu;
    {
        const bool branch_taken_0x1cd44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD44Cu;
        // 0x1cd450: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd44c) {
            ctx->pc = 0x1CD460u;
            goto label_1cd460;
        }
    }
    ctx->pc = 0x1CD454u;
    // 0x1cd454: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CD454u;
    {
        const bool branch_taken_0x1cd454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd454) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD45Cu;
    // 0x1cd45c: 0x0  nop
    ctx->pc = 0x1cd45cu;
    // NOP
label_1cd460:
    // 0x1cd460: 0x28810101  slti        $at, $a0, 0x101
    ctx->pc = 0x1cd460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1cd464: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD464u;
    {
        const bool branch_taken_0x1cd464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD464u;
        // 0x1cd468: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd464) {
            ctx->pc = 0x1CD478u;
            goto label_1cd478;
        }
    }
    ctx->pc = 0x1CD46Cu;
    // 0x1cd46c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CD46Cu;
    {
        const bool branch_taken_0x1cd46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd46c) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD474u;
    // 0x1cd474: 0x0  nop
    ctx->pc = 0x1cd474u;
    // NOP
label_1cd478:
    // 0x1cd478: 0x28810201  slti        $at, $a0, 0x201
    ctx->pc = 0x1cd478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1cd47c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD47Cu;
    {
        const bool branch_taken_0x1cd47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD47Cu;
        // 0x1cd480: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd47c) {
            ctx->pc = 0x1CD490u;
            goto label_1cd490;
        }
    }
    ctx->pc = 0x1CD484u;
    // 0x1cd484: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD484u;
    {
        const bool branch_taken_0x1cd484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd484) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD48Cu;
    // 0x1cd48c: 0x0  nop
    ctx->pc = 0x1cd48cu;
    // NOP
label_1cd490:
    // 0x1cd490: 0x28810401  slti        $at, $a0, 0x401
    ctx->pc = 0x1cd490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1cd494: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD494u;
    {
        const bool branch_taken_0x1cd494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD494u;
        // 0x1cd498: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd494) {
            ctx->pc = 0x1CD4A8u;
            goto label_1cd4a8;
        }
    }
    ctx->pc = 0x1CD49Cu;
    // 0x1cd49c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CD49Cu;
    {
        const bool branch_taken_0x1cd49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd49c) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD4A4u;
    // 0x1cd4a4: 0x0  nop
    ctx->pc = 0x1cd4a4u;
    // NOP
label_1cd4a8:
    // 0x1cd4a8: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x1cd4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1cd4ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD4ACu;
    {
        const bool branch_taken_0x1cd4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4ACu;
        // 0x1cd4b0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4ac) {
            ctx->pc = 0x1CD4C0u;
            goto label_1cd4c0;
        }
    }
    ctx->pc = 0x1CD4B4u;
    // 0x1cd4b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD4B4u;
    {
        const bool branch_taken_0x1cd4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4b4) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD4BCu;
    // 0x1cd4bc: 0x0  nop
    ctx->pc = 0x1cd4bcu;
    // NOP
label_1cd4c0:
    // 0x1cd4c0: 0x28811001  slti        $at, $a0, 0x1001
    ctx->pc = 0x1cd4c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x1cd4c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD4C4u;
    {
        const bool branch_taken_0x1cd4c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C4u;
        // 0x1cd4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c4) {
            ctx->pc = 0x1CD4D4u;
            goto label_1cd4d4;
        }
    }
    ctx->pc = 0x1CD4CCu;
    // 0x1cd4cc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD4CCu;
    {
        const bool branch_taken_0x1cd4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4CCu;
        // 0x1cd4d0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4cc) {
            ctx->pc = 0x1CD4D4u;
            goto label_1cd4d4;
        }
    }
    ctx->pc = 0x1CD4D4u;
label_1cd4d4:
    // 0x1cd4d4: 0x0  nop
    ctx->pc = 0x1cd4d4u;
    // NOP
label_1cd4d8:
    // 0x1cd4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4E0u;
}
