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

// Function: sub_001D97A0
// Address: 0x1d97a0 - 0x1d98e0
void sub_001D97A0_0x1d97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D97A0_0x1d97a0");
#endif

    ctx->pc = 0x1d97a0u;

    // 0x1d97a0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1d97a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d97a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97A4u;
    {
        const bool branch_taken_0x1d97a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A4u;
        // 0x1d97a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a4) {
            ctx->pc = 0x1D97B8u;
            goto label_1d97b8;
        }
    }
    ctx->pc = 0x1D97ACu;
    // 0x1d97ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1D97ACu;
    {
        const bool branch_taken_0x1d97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97ac) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D97B4u;
    // 0x1d97b4: 0x0  nop
    ctx->pc = 0x1d97b4u;
    // NOP
label_1d97b8:
    // 0x1d97b8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1d97b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d97bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97BCu;
    {
        const bool branch_taken_0x1d97bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97BCu;
        // 0x1d97c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97bc) {
            ctx->pc = 0x1D97D0u;
            goto label_1d97d0;
        }
    }
    ctx->pc = 0x1D97C4u;
    // 0x1d97c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1D97C4u;
    {
        const bool branch_taken_0x1d97c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97c4) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D97CCu;
    // 0x1d97cc: 0x0  nop
    ctx->pc = 0x1d97ccu;
    // NOP
label_1d97d0:
    // 0x1d97d0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1d97d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d97d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97D4u;
    {
        const bool branch_taken_0x1d97d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97D4u;
        // 0x1d97d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97d4) {
            ctx->pc = 0x1D97E8u;
            goto label_1d97e8;
        }
    }
    ctx->pc = 0x1D97DCu;
    // 0x1d97dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1D97DCu;
    {
        const bool branch_taken_0x1d97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97dc) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D97E4u;
    // 0x1d97e4: 0x0  nop
    ctx->pc = 0x1d97e4u;
    // NOP
label_1d97e8:
    // 0x1d97e8: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1d97e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d97ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97ECu;
    {
        const bool branch_taken_0x1d97ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97ECu;
        // 0x1d97f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97ec) {
            ctx->pc = 0x1D9800u;
            goto label_1d9800;
        }
    }
    ctx->pc = 0x1D97F4u;
    // 0x1d97f4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D97F4u;
    {
        const bool branch_taken_0x1d97f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97f4) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D97FCu;
    // 0x1d97fc: 0x0  nop
    ctx->pc = 0x1d97fcu;
    // NOP
label_1d9800:
    // 0x1d9800: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x1d9800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d9804: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9804u;
    {
        const bool branch_taken_0x1d9804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9804u;
        // 0x1d9808: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9804) {
            ctx->pc = 0x1D9818u;
            goto label_1d9818;
        }
    }
    ctx->pc = 0x1D980Cu;
    // 0x1d980c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1D980Cu;
    {
        const bool branch_taken_0x1d980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d980c) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D9814u;
    // 0x1d9814: 0x0  nop
    ctx->pc = 0x1d9814u;
    // NOP
label_1d9818:
    // 0x1d9818: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x1d9818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d981c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D981Cu;
    {
        const bool branch_taken_0x1d981c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D981Cu;
        // 0x1d9820: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d981c) {
            ctx->pc = 0x1D9830u;
            goto label_1d9830;
        }
    }
    ctx->pc = 0x1D9824u;
    // 0x1d9824: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D9824u;
    {
        const bool branch_taken_0x1d9824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9824) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D982Cu;
    // 0x1d982c: 0x0  nop
    ctx->pc = 0x1d982cu;
    // NOP
label_1d9830:
    // 0x1d9830: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x1d9830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1d9834: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9834u;
    {
        const bool branch_taken_0x1d9834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9834u;
        // 0x1d9838: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9834) {
            ctx->pc = 0x1D9848u;
            goto label_1d9848;
        }
    }
    ctx->pc = 0x1D983Cu;
    // 0x1d983c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D983Cu;
    {
        const bool branch_taken_0x1d983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d983c) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D9844u;
    // 0x1d9844: 0x0  nop
    ctx->pc = 0x1d9844u;
    // NOP
label_1d9848:
    // 0x1d9848: 0x28810081  slti        $at, $a0, 0x81
    ctx->pc = 0x1d9848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1d984c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D984Cu;
    {
        const bool branch_taken_0x1d984c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D984Cu;
        // 0x1d9850: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d984c) {
            ctx->pc = 0x1D9860u;
            goto label_1d9860;
        }
    }
    ctx->pc = 0x1D9854u;
    // 0x1d9854: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D9854u;
    {
        const bool branch_taken_0x1d9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9854) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D985Cu;
    // 0x1d985c: 0x0  nop
    ctx->pc = 0x1d985cu;
    // NOP
label_1d9860:
    // 0x1d9860: 0x28810101  slti        $at, $a0, 0x101
    ctx->pc = 0x1d9860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1d9864: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9864u;
    {
        const bool branch_taken_0x1d9864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9864u;
        // 0x1d9868: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9864) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D986Cu;
    // 0x1d986c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D986Cu;
    {
        const bool branch_taken_0x1d986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d986c) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D9874u;
    // 0x1d9874: 0x0  nop
    ctx->pc = 0x1d9874u;
    // NOP
label_1d9878:
    // 0x1d9878: 0x28810201  slti        $at, $a0, 0x201
    ctx->pc = 0x1d9878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1d987c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D987Cu;
    {
        const bool branch_taken_0x1d987c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D987Cu;
        // 0x1d9880: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d987c) {
            ctx->pc = 0x1D9890u;
            goto label_1d9890;
        }
    }
    ctx->pc = 0x1D9884u;
    // 0x1d9884: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9884u;
    {
        const bool branch_taken_0x1d9884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9884) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D988Cu;
    // 0x1d988c: 0x0  nop
    ctx->pc = 0x1d988cu;
    // NOP
label_1d9890:
    // 0x1d9890: 0x28810401  slti        $at, $a0, 0x401
    ctx->pc = 0x1d9890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1d9894: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9894u;
    {
        const bool branch_taken_0x1d9894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9894u;
        // 0x1d9898: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9894) {
            ctx->pc = 0x1D98A8u;
            goto label_1d98a8;
        }
    }
    ctx->pc = 0x1D989Cu;
    // 0x1d989c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D989Cu;
    {
        const bool branch_taken_0x1d989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d989c) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D98A4u;
    // 0x1d98a4: 0x0  nop
    ctx->pc = 0x1d98a4u;
    // NOP
label_1d98a8:
    // 0x1d98a8: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x1d98a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1d98ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D98ACu;
    {
        const bool branch_taken_0x1d98ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98ACu;
        // 0x1d98b0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98ac) {
            ctx->pc = 0x1D98C0u;
            goto label_1d98c0;
        }
    }
    ctx->pc = 0x1D98B4u;
    // 0x1d98b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D98B4u;
    {
        const bool branch_taken_0x1d98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d98b4) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D98BCu;
    // 0x1d98bc: 0x0  nop
    ctx->pc = 0x1d98bcu;
    // NOP
label_1d98c0:
    // 0x1d98c0: 0x28811001  slti        $at, $a0, 0x1001
    ctx->pc = 0x1d98c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x1d98c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D98C4u;
    {
        const bool branch_taken_0x1d98c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98C4u;
        // 0x1d98c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98c4) {
            ctx->pc = 0x1D98D4u;
            goto label_1d98d4;
        }
    }
    ctx->pc = 0x1D98CCu;
    // 0x1d98cc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D98CCu;
    {
        const bool branch_taken_0x1d98cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98CCu;
        // 0x1d98d0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98cc) {
            ctx->pc = 0x1D98D4u;
            goto label_1d98d4;
        }
    }
    ctx->pc = 0x1D98D4u;
label_1d98d4:
    // 0x1d98d4: 0x0  nop
    ctx->pc = 0x1d98d4u;
    // NOP
label_1d98d8:
    // 0x1d98d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D98D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D98E0u;
}
