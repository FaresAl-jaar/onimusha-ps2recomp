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

// Function: sub_00119BF0
// Address: 0x119bf0 - 0x119c44
void sub_00119BF0_0x119bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119BF0_0x119bf0");
#endif

    switch (ctx->pc) {
        case 0x119c04u: goto label_119c04;
        case 0x119c1cu: goto label_119c1c;
        default: break;
    }

    ctx->pc = 0x119bf0u;

    // 0x119bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119bf4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119BF4u;
    {
        const bool branch_taken_0x119bf4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x119BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BF4u;
        // 0x119bf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bf4) {
            ctx->pc = 0x119C0Cu;
            goto label_119c0c;
        }
    }
    ctx->pc = 0x119BFCu;
    // 0x119bfc: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x119BFCu;
    SET_GPR_U32(ctx, 31, 0x119C04u);
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x119BFCu, 0x119C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C04u;
label_119c04:
    // 0x119c04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119C04u;
    {
        const bool branch_taken_0x119c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C04u;
        // 0x119c08: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c04) {
            ctx->pc = 0x119C20u;
            goto label_119c20;
        }
    }
    ctx->pc = 0x119C0Cu;
label_119c0c:
    // 0x119c0c: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x119c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x119c10: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x119c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x119c14: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x119C14u;
    SET_GPR_U32(ctx, 31, 0x119C1Cu);
    ctx->pc = 0x119C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C14u;
    // 0x119c18: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x119C14u, 0x119C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C1Cu;
label_119c1c:
    // 0x119c1c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x119c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_119c20:
    // 0x119c20: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x119c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x119c24: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x119c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x119c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119c30: 0x0  nop
    ctx->pc = 0x119c30u;
    // NOP
    // 0x119c34: 0x0  nop
    ctx->pc = 0x119c34u;
    // NOP
    // 0x119c38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x119c38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x119c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x119C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C3Cu;
        // 0x119c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119C44u;
}
