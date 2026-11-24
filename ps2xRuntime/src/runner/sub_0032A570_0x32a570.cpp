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

// Function: sub_0032A570
// Address: 0x32a570 - 0x32a5cc
void sub_0032A570_0x32a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A570_0x32a570");
#endif

    switch (ctx->pc) {
        case 0x32a590u: goto label_32a590;
        case 0x32a598u: goto label_32a598;
        case 0x32a5a4u: goto label_32a5a4;
        default: break;
    }

    ctx->pc = 0x32a570u;

    // 0x32a570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32a574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32a578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32a57c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a584: 0x8c850600  lw          $a1, 0x600($a0)
    ctx->pc = 0x32a584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x32a588: 0xc0c0844  jal         func_302110
    ctx->pc = 0x32A588u;
    SET_GPR_U32(ctx, 31, 0x32A590u);
    ctx->pc = 0x32A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A588u;
    // 0x32a58c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x32A588u, 0x32A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A590u;
label_32a590:
    // 0x32a590: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a594: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x32a594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a598:
    // 0x32a598: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x32a598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x32a59c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x32A59Cu;
    SET_GPR_U32(ctx, 31, 0x32A5A4u);
    ctx->pc = 0x32A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A59Cu;
    // 0x32a5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x32A59Cu, 0x32A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5A4u;
label_32a5a4:
    // 0x32a5a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a5a8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x32a5a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a5ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A5ACu;
    {
        const bool branch_taken_0x32a5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5ACu;
        // 0x32a5b0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5ac) {
            ctx->pc = 0x32A598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a598;
        }
    }
    ctx->pc = 0x32A5B4u;
    // 0x32a5b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32a5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a5b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a5bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5C4u;
        // 0x32a5c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A5CCu;
}
