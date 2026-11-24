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

// Function: sub_00209C50
// Address: 0x209c50 - 0x209cbc
void sub_00209C50_0x209c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209C50_0x209c50");
#endif

    switch (ctx->pc) {
        case 0x209c6cu: goto label_209c6c;
        case 0x209ca0u: goto label_209ca0;
        default: break;
    }

    ctx->pc = 0x209c50u;

    // 0x209c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209c64: 0xc081d84  jal         func_207610
    ctx->pc = 0x209C64u;
    SET_GPR_U32(ctx, 31, 0x209C6Cu);
    ctx->pc = 0x209C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C64u;
    // 0x209c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209C64u, 0x209C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C6Cu;
label_209c6c:
    // 0x209c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209c70: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209C70u;
    {
        const bool branch_taken_0x209c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C70u;
        // 0x209c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c70) {
            ctx->pc = 0x209C98u;
            goto label_209c98;
        }
    }
    ctx->pc = 0x209C78u;
    // 0x209c78: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209c84: 0x24848100  addiu       $a0, $a0, -0x7F00
    ctx->pc = 0x209c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x209c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209c8c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209C8Cu;
    ctx->pc = 0x209C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C8Cu;
    // 0x209c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x209C94u;
    // 0x209c94: 0x0  nop
    ctx->pc = 0x209c94u;
    // NOP
label_209c98:
    // 0x209c98: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209C98u;
    SET_GPR_U32(ctx, 31, 0x209CA0u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209C98u, 0x209CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CA0u;
label_209ca0:
    // 0x209ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209cb4: 0x80899da  j           func_226768
    ctx->pc = 0x209CB4u;
    ctx->pc = 0x209CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CB4u;
    // 0x209cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226768u;
    sub_00226768_0x226768(rdram, ctx, runtime); return;
    ctx->pc = 0x209CBCu;
}
