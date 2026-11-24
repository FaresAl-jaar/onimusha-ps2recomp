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

// Function: sub_00303E30
// Address: 0x303e30 - 0x303ed8
void sub_00303E30_0x303e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303E30_0x303e30");
#endif

    ctx->pc = 0x303e30u;

    // 0x303e30: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x303e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x303e34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x303e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x303e38: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x303E38u;
    {
        const bool branch_taken_0x303e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x303E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E38u;
        // 0x303e3c: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e38) {
            ctx->pc = 0x303EC8u;
            goto label_303ec8;
        }
    }
    ctx->pc = 0x303E40u;
    // 0x303e40: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x303e44: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x303E44u;
    {
        const bool branch_taken_0x303e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x303E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E44u;
        // 0x303e48: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e44) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303E4Cu;
    // 0x303e4c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x303E4Cu;
    {
        const bool branch_taken_0x303e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e4c) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303E54u;
    // 0x303e54: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x303e58: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x303E58u;
    {
        const bool branch_taken_0x303e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x303E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E58u;
        // 0x303e5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e58) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303E60u;
    // 0x303e60: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x303E60u;
    {
        const bool branch_taken_0x303e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e60) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303E68u;
    // 0x303e68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303e6c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x303E6Cu;
    {
        const bool branch_taken_0x303e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e6c) {
            ctx->pc = 0x303EB8u;
            goto label_303eb8;
        }
    }
    ctx->pc = 0x303E74u;
    // 0x303e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x303e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303e78: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x303E78u;
    {
        const bool branch_taken_0x303e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x303E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E78u;
        // 0x303e7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e78) {
            ctx->pc = 0x303EB0u;
            goto label_303eb0;
        }
    }
    ctx->pc = 0x303E80u;
    // 0x303e80: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x303E80u;
    {
        const bool branch_taken_0x303e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e80) {
            ctx->pc = 0x303EB0u;
            goto label_303eb0;
        }
    }
    ctx->pc = 0x303E88u;
    // 0x303e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303e8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303E8Cu;
    {
        const bool branch_taken_0x303e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e8c) {
            ctx->pc = 0x303EA8u;
            goto label_303ea8;
        }
    }
    ctx->pc = 0x303E94u;
    // 0x303e94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x303E94u;
    {
        const bool branch_taken_0x303e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e94) {
            ctx->pc = 0x303EA8u;
            goto label_303ea8;
        }
    }
    ctx->pc = 0x303E9Cu;
    // 0x303e9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x303E9Cu;
    {
        const bool branch_taken_0x303e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e9c) {
            ctx->pc = 0x303ED0u;
            goto label_303ed0;
        }
    }
    ctx->pc = 0x303EA4u;
    // 0x303ea4: 0x0  nop
    ctx->pc = 0x303ea4u;
    // NOP
label_303ea8:
    // 0x303ea8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x303EA8u;
    {
        const bool branch_taken_0x303ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EA8u;
        // 0x303eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ea8) {
            ctx->pc = 0x303ED0u;
            goto label_303ed0;
        }
    }
    ctx->pc = 0x303EB0u;
label_303eb0:
    // 0x303eb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303EB0u;
    {
        const bool branch_taken_0x303eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EB0u;
        // 0x303eb4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303eb0) {
            ctx->pc = 0x303ED0u;
            goto label_303ed0;
        }
    }
    ctx->pc = 0x303EB8u;
label_303eb8:
    // 0x303eb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x303EB8u;
    {
        const bool branch_taken_0x303eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EB8u;
        // 0x303ebc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303eb8) {
            ctx->pc = 0x303ED0u;
            goto label_303ed0;
        }
    }
    ctx->pc = 0x303EC0u;
label_303ec0:
    // 0x303ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x303EC0u;
    {
        const bool branch_taken_0x303ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EC0u;
        // 0x303ec4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ec0) {
            ctx->pc = 0x303ED0u;
            goto label_303ed0;
        }
    }
    ctx->pc = 0x303EC8u;
label_303ec8:
    // 0x303ec8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x303ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x303ecc: 0x0  nop
    ctx->pc = 0x303eccu;
    // NOP
label_303ed0:
    // 0x303ed0: 0x80c0f1c  j           func_303C70
    ctx->pc = 0x303ED0u;
    ctx->pc = 0x303C70u;
    sub_00303C70_0x303c70(rdram, ctx, runtime); return;
    ctx->pc = 0x303ED8u;
}
