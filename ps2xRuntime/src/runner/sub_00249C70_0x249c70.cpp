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

// Function: sub_00249C70
// Address: 0x249c70 - 0x249cf8
void sub_00249C70_0x249c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C70_0x249c70");
#endif

    switch (ctx->pc) {
        case 0x249c8cu: goto label_249c8c;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd8u: goto label_249cd8;
        default: break;
    }

    ctx->pc = 0x249c70u;

    // 0x249c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249c80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249c84: 0xc091a44  jal         func_246910
    ctx->pc = 0x249C84u;
    SET_GPR_U32(ctx, 31, 0x249C8Cu);
    ctx->pc = 0x249C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C84u;
    // 0x249c88: 0x24044700  addiu       $a0, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249C84u, 0x249C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C8Cu;
label_249c8c:
    // 0x249c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c94: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x249C94u;
    SET_GPR_U32(ctx, 31, 0x249C9Cu);
    ctx->pc = 0x249C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C94u;
    // 0x249c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x249C94u, 0x249C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C9Cu;
label_249c9c:
    // 0x249c9c: 0x24044701  addiu       $a0, $zero, 0x4701
    ctx->pc = 0x249c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18177));
    // 0x249ca0: 0xc091a44  jal         func_246910
    ctx->pc = 0x249CA0u;
    SET_GPR_U32(ctx, 31, 0x249CA8u);
    ctx->pc = 0x249CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CA0u;
    // 0x249ca4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249CA0u, 0x249CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CA8u;
label_249ca8:
    // 0x249ca8: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x249ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x249cac: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x249CACu;
    {
        const bool branch_taken_0x249cac = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x249CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CACu;
        // 0x249cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cac) {
            ctx->pc = 0x249CE4u;
            goto label_249ce4;
        }
    }
    ctx->pc = 0x249CB4u;
    // 0x249cb4: 0xc091a44  jal         func_246910
    ctx->pc = 0x249CB4u;
    SET_GPR_U32(ctx, 31, 0x249CBCu);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249CB4u, 0x249CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CBCu;
label_249cbc:
    // 0x249cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cc4: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x249CC4u;
    SET_GPR_U32(ctx, 31, 0x249CCCu);
    ctx->pc = 0x249CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CC4u;
    // 0x249cc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x249CC4u, 0x249CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CCCu;
label_249ccc:
    // 0x249ccc: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x249cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x249cd0: 0xc091a44  jal         func_246910
    ctx->pc = 0x249CD0u;
    SET_GPR_U32(ctx, 31, 0x249CD8u);
    ctx->pc = 0x249CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CD0u;
    // 0x249cd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249CD0u, 0x249CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CD8u;
label_249cd8:
    // 0x249cd8: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x249cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x249cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ce0: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x249ce0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_249ce4:
    // 0x249ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x249CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249CF8u;
}
