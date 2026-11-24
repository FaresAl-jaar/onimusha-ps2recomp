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

// Function: sub_00208640
// Address: 0x208640 - 0x208680
void sub_00208640_0x208640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208640_0x208640");
#endif

    ctx->pc = 0x208640u;

    // 0x208640: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x208640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208648: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x208648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20864c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208650: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x208650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x208654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208654u;
    {
        const bool branch_taken_0x208654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208654u;
        // 0x208658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208654) {
            ctx->pc = 0x208670u;
            goto label_208670;
        }
    }
    ctx->pc = 0x20865Cu;
    // 0x20865c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20865cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208664: 0x24847b98  addiu       $a0, $a0, 0x7B98
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31640));
    // 0x208668: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x208668u;
    ctx->pc = 0x20866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208668u;
    // 0x20866c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208670u;
label_208670:
    // 0x208670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208674: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x208678: 0x8087e0e  j           func_21F838
    ctx->pc = 0x208678u;
    ctx->pc = 0x20867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208678u;
    // 0x20867c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208680u;
}
